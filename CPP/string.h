#pragma once
#if 0
#include <iostream>
#include <cassert>
#include <cstring>
#include <string>
#include <algorithm>
#include <vld.h>
using namespace std;
namespace tzh
{
	class string
	{
		friend ostream& operator<<(ostream& out, const string& s);
		//friend istream& operator>>(istream& in, string& s);
	public:
		//原生的指针是天然的迭代器(string/vector等类的迭代器),迭代器不都是指针,可以是封装成类似于指针的用法(list等类的迭代器)
		//C++11中的范围for就是替换成迭代器,自实现的容器中的如果实现了迭代器(自实现的迭代器名字函数都得和库中迭代器的一样,否则无法使用自实现的容器范围for)就可以在使用时用范围for遍历
		typedef char* iterator;
		typedef const char* const_iterator;
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		const_iterator begin()const
		{
			return _str;
		}
		const_iterator end()const
		{
			return _str + _size;
		}
		const char* c_str()const
		{
			return _str;
		}
		string(const char* str = "")
		{
			size_t len = strlen(str);
			_str = new char[len + 1];
			strcpy(_str, str);
			_size = len;
			_capacity = len;
		}
		~string()
		{
			if (_str)	delete[] _str;
			_str = nullptr;
			_capacity = _size = 0;
		}
		//string(const string& s)//拷贝构造和赋值运算符重载的传统写法
		//{
		//	size_t len = strlen(s._str);
		//	_str = new char[len + 1];
		//	strcpy(_str, s._str);
		//	_size = len;
		//	_capacity = len;
		//}
		//string& operator=(const string& s)
		//{
		//	if (this != &s)
		//	{
		//		if (_str)	delete[] _str;
		//		_str = nullptr;
		//		size_t len = strlen(s._str);
		//		_str = new char[len + 1];
		//		strcpy(_str, s._str);
		//		_size = len;
		//		_capacity = len;
		//	}
		//	return *this;
		//}
		string(const string& s)
			: _str(nullptr)
			, _size(0)
			, _capacity(0)
		{
			string tmp(s._str);
			//swap(*this, tmp);//这样写交换的代价就太大了

			//swap(_str, tmp._str);//这样写逻辑就冗余了,将其抽象成一个函数
			//swap(_size, tmp._size);
			//swap(_capacity, tmp._capacity);
			swap(tmp);//this->swap(tmp);
		}
		string& operator=(string s)
		{
			//swap(_str, s._str);
			//swap(_size, s._size);
			//swap(_capacity, s._capacity);
			swap(s);//this->swap(s);
			return *this;
		}
		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}
		void reserve(size_t n)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}
		void push_back(const char& ch)
		{
			if (_size + 1 > _capacity)	reserve(2 * _capacity);
			_str[_size] = ch;
			_size++;
			_str[_size] = '\0';
		}
		string& append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)	reserve(_size + len);//扩容
			strcpy(_str + _size, str);
			_size += len;
			return *this;
		}
		string operator+(const char* str)//尽量少使用+,因为它涉及到拷贝构造造成深拷贝,效率很低
		{
			string ret(*this);
			ret = append(str);
			return ret;
		}
		string& append(const string& s)
		{
			size_t len = strlen(s._str);
			if (_size + len > _capacity)	reserve(_size + len);
			strcpy(_str + _size, s._str);
			_size += len;
			return *this;
		}
		string& operator+=(const char* str)
		{
			return append(str);
		}
		string& operator+=(const string& s)
		{
			return append(s);
		}
		string& operator+=(const char& ch)
		{
			push_back(ch);
			return *this;
		}
		string operator+(const string& s)
		{
			string ret(*this);
			ret = append(s); 
			return ret;
		}
		char& operator[](size_t i)
		{
			assert(i < _size);
			return _str[i];
		}
		size_t size()
		{
			return _size;
		}
		size_t capacity()
		{
			return _capacity;
		}
		void clear()
		{
			_size = 0;
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
	ostream& operator<<(ostream& out, const string& s)
	{
		out << s._str << endl;
		return out;
	}
	//istream& operator>>(istream& in, string& s)
	//{
	//	size_t len = strlen(s._str);
	//	in >> s._str;
	//	return in;
	//}
}
#endif
#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
using namespace std;
namespace tzh
{
	class string
	{
	public:
		typedef char* iterator;
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		typedef const char* const_iterator;
		const_iterator begin()const
		{
			return _str;
		}
		const_iterator end()const
		{
			return _str + _size;
		}
		void clear()
		{
			_size = 0;
			_str[0] = '\0';//这里还是需要置'\0',如果不置'\0'将导致清空后继续调用c_str打印出值
		}
		const char* c_str()const
		{
			return _str;
		}
		size_t size()const
		{
			return _size;
		}
		size_t find(const char& ch, size_t pos = 0)const
		{
			assert(pos < _size);
			for (size_t i = pos; i < _size; i++)
			{
				if (_str[i] == ch)	return i;
			}
			return npos;
		}
		size_t find(const char* subStr, size_t pos = 0)const
		{
			assert(pos < _size);
			const char* ret = strstr(_str + pos, subStr);
			if (!ret)	return npos;
			return ret - _str;
		}
		size_t find(const string & subS, size_t pos = 0)const
		{
			assert(pos < _size);
			const char* ret = strstr(_str + pos, subS._str);
			if (!ret)	return npos;
			return ret - _str;
		}
		string& insert(size_t pos, const char& ch)
		{
			assert(pos <= _size);
			size_t newCapacity = ((_capacity == 0) ? 8 : 2 * _capacity);
			if (_size + 1 > _capacity)
			{
				reserve(newCapacity);
			}
			for (int i = (int)_size; i >= (int)pos; i--)//处理了'\0'
			{
				_str[i + 1] = _str[i];
			}
			_str[pos] = ch;
			_size++;
			return *this;
		}
		string& insert(size_t pos, const char* str)
		{
			assert(pos <= _size);
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			for (int i = (int)_size; i >= (int)pos; i--)//处理了'\0'
			{
				_str[i + len] = _str[i];
			}
			strncpy(_str + pos, str, len);
			_size += len;
			return *this;
		}
		string& insert(size_t pos, const string & s)
		{
			assert(pos <= _size);
			size_t len = strlen(s._str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			for (int i = (int)_size; i >= (int)pos; i--)//处理了'\0'
			{
				_str[i + len] = _str[i];
			}
			strncpy(_str + pos, s._str, len);
			_size += len;
			return *this;
		}
		string& erase(size_t pos = 0, size_t len = npos)
		{
			assert(pos < _size);
			long long t = (long long)(pos + len);
			if (t >= _size)//溢出风险
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				for (int i = (int)pos; i < _size; i++)
				{
					_str[i] = _str[i + len];
				}
				_size -= len;
			}
			return *this;
		}
		void resize(size_t n, const char& ch = '\0')
		{
			if (n < _size)
			{
				_str[n] = '\0';
				_size = n;
			}
			else
			{
				if (n > _capacity)
				{
					reserve(n);
				}
				for (size_t i = _size; i < n; i++)
				{
					_str[i] = ch;
				}
				_size = n;
				_str[_size] = '\0';
			}
		}
		void reserve(size_t n)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}
		string& operator+=(const string & s)
		{
			size_t len = strlen(s._str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			strcpy(_str + _size, s._str);
			_size += len;
			return *this;
		}
		string& operator+=(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			strcpy(_str + _size, str);
			_size += len;
			return *this;
		}
		string& operator+=(const char& ch)
		{
			size_t newCapacity = ((_capacity == 0) ? 8 : 2 * _capacity);
			if (_size + 1 > _capacity)
			{
				reserve(newCapacity);
			}
			_str[_size++] = ch;
			_str[_size] = '\0';
			return *this;
		}
		string operator+(const char& ch)
		{
			string ret(*this);
			return ret += ch;
		}
		string operator+(const char* str)
		{
			string ret(*this);
			return ret += str;
		}
		string operator+(const string & s)
		{
			string ret(*this);
			return ret += s;
		}
		void push_back(const char& ch)
		{
			*this += ch;
		}
		string& append(const char& ch)
		{
			return *this += ch;
		}
		string& append(const char* str)
		{
			return *this += str;
		}
		string& append(const string & s)
		{
			return *this += s;
		}
		void swap(string & s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}
		char& operator[](size_t i)
		{
			assert(i < _size);//越界直接断死
			return _str[i];
		}
		const char& operator[](size_t i)const
		{
			assert(i < _size);//越界直接断死
			return _str[i];
		}
		string(const char* str = "")
		{
			size_t len = strlen(str);
			_str = new char[len + 1];
			strcpy(_str, str);
			_size = len;
			_capacity = len;
		}
		string(const string & s)
			: _str(nullptr)//注意这个需要初始化,否则将会在临时对象tmp析构时崩溃(delete[]了一个随机地址)
			, _size(0)
			, _capacity(0)
		{
			string tmp(s._str);
			swap(tmp);
		}
		string& operator=(string s)//这个不需要初始化,因为*this已经存在
		{
			swap(s);
			return *this;
		}
		~string()
		{
			if (_str)
				delete[] _str;//注意delete[]/free/delete 空指针不会报错,只是无事发生而已
			_str = nullptr;
			_capacity = _size = 0;
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	public:
		static const size_t npos;
	};
	const size_t string::npos = -1;
	ostream& operator<<(ostream & out, const string & s)
	{//这里输出不需要重载成友元函数突破封装,因为有operator[]可以拿到私有成员
		for (size_t i = 0; i < s.size(); i++)
		{
			out << s[i];
		}
		return out;
	}
	istream& operator>>(istream & in, string & s)
	{
		s.clear();
		char ch = '\0';
		while (1)
		{
			in.get(ch);
			if (ch == ' ' || ch == '\n')	break;
			s += ch;
		}
		return in;
	}
	bool operator==(const string & s1, const string & s2)
	{
		size_t i1 = 0, i2 = 0;
		while (i1 < s1.size() && i2 < s2.size())
		{
			if (s1[i1] != s2[i2])	return false;
			++i1, ++i2;
		}
		if (i1 == s1.size() && i2 == s2.size())	return	true;
		return false;
	}
	bool operator>(const string & s1, const string & s2)
	{
		size_t i1 = 0, i2 = 0;
		while (i1 < s1.size() && i2 < s2.size())
		{
			if (s1[i1] > s2[i2])	return true;
			else if (s1[i1] < s2[i2])	return false;
			else
			{
				++i1, ++i2;
			}
		}
		if (i1 < s1.size())	return true;
		else    return false;
	}
	bool operator!=(const string & s1, const string & s2)
	{
		return !(s1 == s2);
	}
	bool operator>=(const string & s1, const string & s2)
	{
		return (s1 == s2) || (s1 > s2);
	}
	bool operator<(const string & s1, const string & s2)
	{
		return !(s1 >= s2);
	}
	bool operator<=(const string & s1, const string & s2)
	{
		return !(s1 > s2);
	}
}