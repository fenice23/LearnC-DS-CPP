#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//#include <iostream>
//using namespace std;
//int main() {
//	cout << "hello world!" << endl;
//	return 0;
//}
//#include <stdio.h>
////命名空间 --- 域
//namespace N
//{
//	int scanf = 0;//这里的scanf还是全局变量,放到N命名空间域中了
//}
//int main()
//{
//	printf("%p\n", scanf);
//	printf("%d\n", N::scanf);
//	return 0;
//}
//#include <stdio.h>
//namespace bit
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//}
////using bit::b;//2.相当于把b单独展开到全局域中
//using namespace bit;//3.全部展开
////推荐在项目中,尽量不要全部展开,最好使用1或2的方式
//int main()
//{
//	printf("%d\n", bit::a);//1.直接指定域
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//#include <iostream>
//using namespace std;
////C++库里面的东西都放在std这个命名空间中
//int main()
//{
//	cout << "hello world!" << endl;
//	return 0;
//}
//#include <iostream>
//#include <vector>
//int main()
//{
//	std::cout << "Hello World!" << std::endl;
//	std::cout << "Hello Cplusplus!" << std::endl;
//	std::vector<int> v;
//	int i = 0;
//	std::cin >> i;
//	return 0;
//}
//#include <iostream>
//#include <vector>
//using std::cout;//可以把命名空间中常用的类型或者变量展开
//using std::cin;
//using std::endl;
//using std::vector;
//int main()
//{
//	cout << "Hello World!" << endl;
//	int i = 0;
//	cin >> i;
//	vector<int> v;
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//#include "test.h"
//namespace N1
//{
//	int a;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//namespace N2
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N3
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//using N2::Add;
//int main()
//{
//	printf("%d\n", Add(4, 5));
//	printf("%d\n", N2::a);
//	printf("%d\n", N2::Add(2, 3));
//	printf("%d\n", N2::N3::Sub(3, 2));
//	printf("%d\n", N1::a);
//	printf("%d\n", N1::Add(3, 5));
//	printf("%d\n", N1::Mul(2, 10));
//	return 0;
//}
//#include <iostream.h> vc6.0支持,新的编译器一般不支持,没有命名空间
//#include <iostream>
//using namespace std;
//int main()
//{
//	//1.cout/cin相对printf/scanf,可以自动识别类型,控制输出格式
//	//2.一行支持连续输出
//	//3.endl换行符等价于'\n'
//	//自动识别原理,cout,cin到底是什么?涉及到类和对象,运算符重载,函数重载
//	cout << "Hello World!" << endl;
//	int i = 50;
//	char ch = 48;
//	double d = 2.222;
//	cout << i << endl;
//	cout << d << endl;
//	cout << ch << endl;
//	cout << &i << endl;//int* 按十六进制输出
//	cout << &ch << endl;//char* 字符串
//	cin >> i;
//	cin >> ch >> d;
//	cout << i << "---" << ch << "---" << d << endl;
//	return 0;
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//struct Student
//{
//	char _name[10];
//	int _age;
//};
//int main()
//{
//	//实际使用角度,cin/cout和scanf/printf混着用,它们各有优势,哪个方便用哪个,混在一起用是没有问题的
//	int i;
//	double d;
//	//cin >> i >> d;//CPP方便
//	//cout << i << d << endl;
//	Student s = { "Peter", 18 };
//	printf("name:%s, age:%d\n", s._name, s._age);//C方便
//	cout << "name:" << s._name << ", age:" << s._age << endl;
//	d = 10.0 / 3.0;//保留小数点后两位
//	printf("%.2lf\n", d);
//	cout << d << endl;
//	cout.unsetf(ios::fixed);
//	cout << setprecision(3) << d << endl;
//	return 0;
//}
//#include <iostream>
//#include "test.h"
//using namespace std;
//void TestFunc(int a = 0)//缺省参数
//{
//	cout << a << endl;
//}
//void testfunc(int a = 10, int b = 20, int c = 30)//全缺省参数
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//void test(int a, int b = 10, int c = 20)//半缺省参数,半缺省参数必须从右往左依次来给,不能跳着给,缺省参数不能在函数声明和函数定义中同时出现,一般我们放在函数声明中
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int d = 20;//缺省值必须是常量或者全局变量
//void Test(int a, int b, int c = d/*int c = 10*/)//半缺省参数
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int Func(int l = 0, int r = 0)
//{
//	return 0;
//}
//int main()
//{
//	Test(1, 2);
//	Test(1, 2, 3);
//	test(1);
//	test(1, 2);
//	test(1, 2, 3);
//	testfunc();
//	testfunc(100);
//	testfunc(100, 200);
//	testfunc(100, 200, 300);
//	TestFunc();//没有传参时,使用参数的默认值
//	TestFunc(10);//传参时,使用指定的实参
//	Func(1, 1);
//	return 0;
//}
#if 0
void StackInit(Stack* pst, int num = 8)
{
	pst->_a = malloc(sizeof(int) * num);
	//..
}//缺省参数的一种使用场景
StackInit(&st);
StackInit(&st, 100);
#endif
//如果是C语言不支持同名函数,而C++为了解决这个问题,支持同名函数,但是有要求:同一作用域中,函数名相同,参数的个数,类型,顺序不同才能构成函数重载,而返回值类型不同不作为构成函数重载的条件
//int addint(int i, int j)
//{
//	return i + j;
//}
//double adddouble(double i, double j)
//{
//	return i + j;
//}
//void f(int i, double d) {}
//void f(double d, int i) {}
//int main()
//{
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
////函数重载:同一作用域中,函数名相同,参数个数,类型,顺序不同的构成函数重载,返回值类型不同不作为构成重载的条件
//int Add(int l, int r) {//1
//	return l + r;
//}
////int Add(int r, int l) {//与1不能构成重载
////	return l + r;
////}
//double Add(double l, double r) {
//	return l + r;
//}
//long Add(long l, long r) {
//	return l + r;;
//}
//int main()
//{
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L, 20L);
//	return 0;
//}
//#include <iostream>
//using namespace std;
////void TestFunc(int a = 10) {//1
////	cout << "void TestFunc(int)" << endl;
////}
////void TestFunc(int a) {//
////	cout << "void TestFunc(int)" << endl;
////}//1和2不构成重载
////extern "C" int Add(int left, int right);
////int Add(int left, int right);
//int main()
//{
//	Add(1, 2);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	a = 20;
//	b = 30;
//	int& c = a;
//	int& d = b;
//	//一个变量可以有多个引用(别名)
//	//int& e;//err:引用在定义时必须初始化
//	//e = a;
//	int x = 1;
//	d = x;//这里是将x的值赋值给d,即引用一旦引用一个实体,再不能引用其他实体
//	return 0;
//}
//#include <iostream>
//using namespace std;
////int strlen(const char* str);
//int main()
//{
//	//指针和引用在初始化赋值时,权限只能缩小不能放大
//	const int a = 10;
//	const int& b = a;
//	int c = 10;
//	int& d = c;
//	const int& e = c;
//	const int& r = 10;//OK
//
//	//整形和浮点型之间可以互相隐式类型转换
//	double de = 2.22;
//	int i = de;
//	int& ri = i;
//	//int& rde = de;//err:引用类型必须和引用实体是同种类型的
//	const int& rde = de;//ok:
//	return 0;
//}
//#include <iostream>
//using namespace std;
//void MySwap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//void MySwap(int& rx, int& ry)
//{
//	int tmp = rx;
//	rx = ry;
//	ry = tmp;
//}
//int main()
//{
//	int a = 0, b = 1;
//	MySwap(&a, &b);
//	MySwap(a, b);
//	return 0;
//}
//#include <iostream>
//#include <ctime>
//using namespace std;
//struct A
//{
//	int a[10000];
//};
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//int main()
//{
//	A a;
//	//以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; i++)	TestFunc1(a);
//	size_t end1 = clock();
//	//以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; i++)	TestFunc2(a);
//	size_t end2 = clock();
//	cout << "TesetFunc1(A) - time:" << end1 - begin1 << endl;
//	cout << "TesetFunc2(A&) - time:" << end2 - begin2 << endl;
//	return 0;
//}
//#include <iostream>
//#include <ctime>
//using namespace std;
//int& Count()
//{
//	static int n = 0;
//	n++;
//	//...
//	return n;
//}
//void test1()
//{
//	int ret = 0;
//	for (int i = 0; i < 10; i++)	ret = Count();
//	cout << ret << endl;//10
//}
//int& Add(int a, int b)//有问题
//{
//	int c = a + b;
//	return c;//返回局部变量或临时变量的地址:c
//}
//void test2()
//{
//	int& ret = Add(1, 2);
//	//Add(3, 4);
//	printf("hello world!\n");
//	cout << "Add(1, 2) is : " << ret << endl;//7
//}
//struct A
//{
//	int a[10000];
//};
//A a;
//A TestFunc1()
//{
//	return a;
//}
//A& TestFunc2()
//{
//	return a;
//}
//void test3()
//{
//	//以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; i++)	TestFunc1();
//	size_t end1 = clock();
//	//以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; i++)	TestFunc2();
//	size_t end2 = clock();
//	cout << "TestFunc1 time : " << end1 - begin1 << endl;
//	cout << "TestFunc2 time : " << end2 - begin2 << endl;
//}
//int main()
//{
//	//test1();
//	//test2();
//	//char a = 10;
//	//char& ra = a;
//	//cout << sizeof(ra) << endl;
//	test3();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& ra = a;
//	ra = 20;
//
//	int* pa = &a;
//	*pa = 20;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//inline void Swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int x = 1, y = 2;
//	Swap(x, y);
//	return 0;
//}
//#include "F.h"
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << F(1, 2) << endl;
//	cout << "Hello world" << endl;
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//int TestAuto()
//{
//	return 10;
//}
////void TestAuto(auto a) {}//err:auto不能作为形参类型,因为编译器无法对a的实际类型进行推导
////void TestAuto()
////{
////	int a[] = { 1, 2, 3 };
////	//auto b[] = { 4, 5, 6 };//err:auto不能直接用来声明数组
////}
////为了避免与C++98的auto发生混淆,C++11只保留了auto作为类型指示符的用法
//int main()
//{
//	//int a = 10;
//	//auto b = a;
//	//auto c = 'a';
//	//auto d = TestAuto();
//	//cout << typeid(a).name() << endl;
//	//cout << typeid(b).name() << endl;
//	//cout << typeid(c).name() << endl;
//	//cout << typeid(d).name() << endl;
//	//cout << typeid(TestAuto()).name() << endl;
//	//cout << typeid(TestAuto).name() << endl;
//
//	//int x = 10;
//	//auto a = &x;
//	//auto* b = &x;
//	//auto& c = x;
//	//cout << typeid(x).name() << endl;
//	//cout << typeid(a).name() << endl;
//	//cout << typeid(b).name() << endl;
//	//cout << typeid(c).name() << endl;
//	//*a = 20;
//	//*b = 30;
//	//c = 40;
//
//	//auto a = 1, b = 2;
//	//auto c = 3, d = 4.0;//err:在同一行声明初始化多个变量时,这些变量必须是相同类型的,否则编译器会报错,因为编译器实际只对第一个类型进行推导,然后用推导出来的类型定义其他变量
//
//	//int a = 10;
//	//auto b = a;
//	//char c = 'a';
//	//auto d = c;
//	//cout << typeid(a).name() << endl;
//	//cout << typeid(b).name() << endl;
//	//cout << typeid(c).name() << endl;
//	//cout << typeid(d).name() << endl;
//
//	//std::map<std::string, std::string> m;
//	//std::map<std::string, std::string>::iterator it = m.begin();
//	//auto it = m.begin();//使用场景
//
//	//int a[] = { 1, 2, 3, 4, 5 };
//	//for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)	a[i] *= 2;
//	//for (int* p = a; p < a + sizeof(a) / sizeof(a[0]); p++)	cout << *p << endl;
//
//	//注意范围for也可以用continue结束本次循环,break跳出这层循环
//	//int a[] = { 1, 2, 3, 4, 5 };
//	//for (auto e : a)	e *= 2;
//	//for (auto e : a)	cout << e << endl;
//	//for (auto& e : a)	e *= 2;
//	//for (auto e : a)	cout << e << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	//int* p1 = NULL;
//	//int* p2 = 0;
//	//#ifndef NULL
//	//#ifdef __cplusplus
//	//#define NULL 0
//	//#else
//	//#define NULL ((void *)0)
//	//#endif
//	//说明C++中int* p1 = NULL;和int* p2 = 0;两者等价
//	//f(0);
//	//f(NULL);
//	//f((int*)NULL);
//	//f(nullptr);//f(int) f(int) f(int*) f(int*)
//	
//	//nullptr_t t;//nullptr_t是一种类型,nullptr的类型就是nullptr_t
//	//cout << sizeof(nullptr_t) << endl;//4/8
//	//cout << sizeof(t) << endl;//4/8
//	//cout << sizeof(nullptr) << endl;//4/8
//	//cout << sizeof(NULL) << endl;//4
//	//cout << sizeof(0) << endl;//4
//	//cout << sizeof((void*)0) << endl;//4/8
//	//int* ptr = nullptr;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//struct Student
//{
//	void SetStudentInfo(const char* name, const char* gender, int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintStudentInfo()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//int main()
//{
//	struct Student s;
//	s.SetStudentInfo("Peter", "男", 18);
//	s.PrintStudentInfo();
//	return 0;
//}
//#include "person.h"
//int main()
//{
//	Person s = { "Peter", "男", 19 };
//	s.showInfo();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public://class中的成员默认是私有的
//	void Init(int a1, int a2)
//	{
//		_a1 = a1;
//		_a2 = a2;
//	}
//	void Print()
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//	//访问限定符是类外访问的时候要看,类里面不受限制
////public:
//private:
////protected:
//	int _a1;
//	int _a2;
//};
//int main()
//{
//	A aa;
//	aa.Init(1, 2);
//	aa.Print();
//	aa.Init(2, 3);
//	aa.Print();
//	//aa._a1 = 20;//err
//	return 0;
//}
//#include <iostream>
//class Stack//xx.h
//{
//public:
//	void Init(int capacity = 4);
//	void Destroy();
//	void Push(int x);
//	void Pop();
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};
//void Stack::Init(int capacity)//xx.cpp
//{
//	_a = (int*)malloc(sizeof(int) * capacity);
//	_size = 0;
//	_capacity = capacity;
//}
//void Stack::Push(int x)
//{
//}
//int main()
//{
//	Stack st;
//	//st.Init();
//	st.Init(100);
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Destroy();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	void showInfo()
//	{
//		cout << _name << "-" << _sex << "-" << _age;
//	}
//	const char* _name;
//	const char* _sex;
//	int _age;
//};
//void Test()
//{
//	Person man;
//	man._name = "Jack";
//	man._age = 10;
//	man._sex = "男";
//	man.showInfo();
//}
//int main()
//{
//	Test();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
////private:
//	char _a;
//};
//// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//// 类中什么都没有---空类
//class A3
//{};
//struct A4
//{};
//struct A5 {
//public:
//	void f2() {}
//};
//void test()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	cout << sizeof(A4) << endl;
//	cout << sizeof(A5) << endl;
//	//空类给1个字节是为了占位,表示实例化出的对象存在,不存储数据,表示对象存在
//}
//int main()
//{
//	//类对象的大小,只计算成员变量+内存对齐计算,不考虑成员函数(成员函数存在于公共的地方,公共代码段)
//	//A a;
//	//cout << sizeof(a) << endl;
//	//cout << sizeof(A) << endl;
//	//A a1, a2, a3, a4;
//	////成员变量对于每个对象是独立的,成员函数对于每个对象是公共的
//	//a.PrintA();//这里函数的地址不需要到对象中去找
//	//a1._a;//这里是到对象中去找_a
//	//a2._a;
//	//test();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		cout << "this:" << this << endl;
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//	void Print()
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class A
//{
//public:
//	void PrintA()
//	{
//		//cout << _a << endl;
//	}
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//void test()
//{
//	A* p = nullptr;
//	p->PrintA();
//	p->Show();
//}
//int main()
//{
//	Date d1;
//	d1.Init(2021, 2, 2);
//	d1.Print();
//
//	Date d2;
//	d2.Init(2021, 2, 3);
//	d2.Print();
//	//test();
//	return 0;
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	//Date(int year, int month, int day)
//	//{
//	//	cout << "Date(int year, int month, int day)" << endl;
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	//Date()
//	//{
//	//	cout << "Date()" << endl;
//	//	_year = 1900;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	//void Init(int year, int month, int day)
//	//{
//	//	cout << "this" << this << endl;
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//class Stack
//{
//public:
//	Stack(int capacity = 8)
//	{
//		_a = (int*)malloc(capacity * sizeof(int));
//		if (_a)
//		{
//			_size = 0;
//			_capacity = capacity;
//		}
//	}
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};
//void test()
//{
//	Stack st1;
//	Stack st2(100);
//}
//int main()
//{
//	//想要的是对象定义(构造)出来就初始化了
//	//我们没写,编译器就默认生成了构造函数,但是这里d1里面还是随机值,说明默认的构造函数在这里不行,需要我们自己写
//	//Date d1;
//	Date d1(2022, 10, 10);
//	d1.Print();
//	Date d2;
//	d2.Print();
//	test();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	//Time(int hour)//err:这个不是默认构造函数,要传参所以错误
//	//{
//	//	cout << "Time()" << endl;
//	//	_hour = hour;
//	//	_minute = 0;
//	//	_second = 0;
//	//}
//	//Time(int hour = 0)
//	//{
//	//	cout << "Time()" << endl;
//	//	_hour = hour;
//	//	_minute = 0;
//	//	_second = 0;
//	//}
//	//Time()
//	//{
//	//	cout << "Time()" << endl;
//	//	_hour = 0;
//	//	_minute = 0;
//	//	_second = 0;
//	//}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	// 基本类型(内置类型)
//	int _year;
//	int _month;
//	int _day;
//	// 自定义类型
//	Time _t;
//};
//void test()
//{
//	Date d;
//}
//int main()
//{
//	//test();
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		cout << "Date(int year = 1900, int month = 1, int day = 1)" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//~Date()
//	//{//做一些资源清理工作,Date类中没有需要清理的资源,所以严格来说Date类不需要写析构函数,因为我们不写,编译器也会默认生成,而且Date类中的这个默认生成的也是可以用的
//	//	cout << "~Date()" << endl;
//	//}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	String _s;
//};
//class Stack
//{
//public:
//	Stack(int capacity = 8)//Stack这样的类一定要清理释放资源,所以要写析构函数
//	{
//		cout << "Stack(int capacity = 8)" << endl;
//		_a = (int*)malloc(capacity * sizeof(int));
//		if (_a)
//		{
//			_size = 0;
//			_capacity = capacity;
//		}
//	}
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		if (_a)
//		{
//			free(_a);
//		}
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};
//int main()
//{
//	Date d1;
//	//Stack st;
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//using namespace std;
//typedef int SeqListDateType;
//class SeqList
//{
//public:
//	SeqList(int capacity = 8)
//	{
//		cout << "SeqList(int capacity = 8)" << endl;
//		_a = (SeqListDateType*)malloc(capacity * sizeof(SeqListDateType));
//		if (_a)
//		{
//			_size = 0;
//			_capacity = capacity;
//		}
//	}
//	~SeqList()
//	{
//		cout << "~SeqList()" << endl;
//		if (_a)	free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	SeqListDateType* _a;
//	int _size;
//	int _capacity;
//};
//class String
//{
//public:
//	String(const char* str = "Jack")
//	{
//		cout << "String(const char* str = \"Jack\")" << endl;
//		_str = (char*)malloc(strlen(str) + 1);
//		if (!_str)	exit(-1);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		if (_str)	free(_str);
//		_str = nullptr;
//	}
//private:
//	char* _str;
//};
//class Person
//{
//private:
//	String _name;
//	int _age;
//};
//int main()
//{
//	//SeqList sq;
//	Person p;
//	return 0;
//}
//#include "Date.h"
//int main()
//{
//	Date d1(2021, 2, 29);
//	d1.Print();
//	Date d2;
//	d2.Print();
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		cout << "Date(int year = 1900, int month = 1, int day = 1)" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//Date(const Date& d)//拷贝构造函数		Date d2(d1);
//	//{
//	//	cout << "Date(const Date& d)" << endl;
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class Stack
//{
//public:
//	Stack(int capacity = 10)
//	{
//		_a = (int*)malloc(capacity * sizeof(int));
//		if (_a)
//		{
//			_size = 0;
//			_capacity = capacity;
//		}
//	}
//	//Stack(const Stack& st)
//	//{
//	//	_a = (int*)malloc(st._capacity * sizeof(int));
//	//	if (_a)
//	//	{
//	//		_size = st._size;
//	//		_capacity = st._capacity;
//	//	}
//	//}
//	~Stack()
//	{
//		if (_a)	free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};
//void test()
//{
//	//cout << sizeof(Stack) << endl;
//	Stack st1;
//	Stack st2(st1);
//	//Stack st3 = st1;
//}
//class String
//{
//public:
//	String(const char* str = "Jack")
//	{
//		_str = (char*)malloc((strlen(str) + 1) * sizeof(char));
//		if (_str)	strcpy(_str, str);
//	}
//	~String()
//	{
//		if (_str)	
//			free(_str);
//		_str = nullptr;
//	}
//	String(const String& str)
//	{
//		_str = (char*)malloc((strlen(str._str) + 1) * sizeof(char));
//		if (_str)	strcpy(_str, str._str);
//	}
//private:
//	char* _str;
//};
//void test1()
//{
//	String s1("hello");
//	String s2(s1);
//}
//int main()
//{
//	//Date d1(2021, 2, 3);
//	////d2的值想跟d1一样
//	//Date d2(d1);//等价于Date d2 = d1;都是拷贝构造
//	//d1.Print();
//	//d2.Print();
//	//test();
//	test1();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		cout << "Date(int year = 1900, int month = 1, int day = 1)" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//	//Date(const Date& d)
//	//{
//	//	cout << "Date(const Date& d)" << endl;
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//	//Date& operator=(const Date& d)
//	//{
//	//	cout << "Date& operator=(const Date& d)" << endl;
//	//	if (this != &d)
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//	}
//	//	return *this;
//	//}
//	bool operator==(const Date& d)
//	{
//		cout << "bool operator==(const Date& d)" << endl;
//		return _year == d._year && _month == d._month && _day == d._day;
//	}
//	bool operator>(const Date& d)
//	{
//		return (_year > d._year) || (_year == d._year && _month > d._month) || (_year == d._year && _month == d._month && _day > d._day);
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2021, 2, 4);
//	Date d2(d1);
//	//Date d2(2021, 2, 3);
//	//d1 == d2;
//	//d1.operator==(d2);//d1.operator==(&d1, d2);
//	//cout << (d1 > d2) << endl;//d1>d2--->d1.operator>(d2)--->d1.operator>(&d1, d2);
//	Date d3(2021, 3, 1);
//	d1 = d2 = d3;
//	d1.Print();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "")
//	{
//		_str = (char*)malloc((strlen(str) + 1) * sizeof(char));
//		if (_str)	strcpy(_str, str);
//	}
//	~String()
//	{
//		if (_str)	free(_str);
//		_str = nullptr;
//	}
//	String(const String& str)
//	{
//		_str = (char*)malloc((strlen(str._str) + 1) * sizeof(char));
//		if (_str)	strcpy(_str, str._str);
//	}
//	String& operator=(const String& str)
//	{
//		if (&str != this)
//		{
//			_str = (char*)malloc((strlen(str._str) + 1) * sizeof(char));
//			if (_str)	strcpy(_str, str._str);
//		}
//		return *this;
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	String s2("world");
//	String s3, s4;
//	s3 = s1;
//	s4 = s2;
//	String s5(s1);
//	String s6 = s1;
//	return 0;
//}
//#include "Date.h"
//int main()
//{
//	//Date d1(2012, 11, 23);
//	//Date d2(2022, 2, 9);
//	//cout << (d1 - d2) << endl;
//	//cout << (d1 == d2) << endl;
//	//cout << (d1 != d2) << endl;
//	//cout << (d1 >= d2) << endl;
//	//cout << (d1 > d2) << endl;
//	//cout << (d1 < d2) << endl;
//	//cout << (d1 <= d2) << endl;
//	//d1 += 3365;
//	//d1.Print();
//	//d2 -= 3365;
//	//d2.Print();
//	//Date t = d2 - 3365;
//	//t.Print();
//	//d2.Print();
//	//Date r = d1 + 3365;
//	//r.Print();
//	//d1.Print();
//	//Date d0(2010, 12, 31);
//	//Date d1(2011, 1, 1);
//	//Date d2(2011, 2, 28);
//	//Date d3(2012, 2, 29);
//	//Date d4(2012, 3, 1);
//	//(++d0).Print();
//	//d0.Print();
//	//(++d1).Print();
//	//d1.Print();
//	//(++d2).Print();
//	//d2.Print();
//	//(++d3).Print();
//	//d3.Print();
//	//(++d4).Print();
//	//d4.Print();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	Date()
//	{
//		cout << "this:" << this << " ";
//		cout << "Date()" << endl;
//	}
//	Date(const Date&)
//	{
//		cout << "this:" << this << " ";
//		cout << "Date(const Date& d)" << endl;
//	}
//	~Date()
//	{
//		cout << "this:" << this << " ";
//		cout << "~Date()" << endl;
//	}
//	Date& operator=(const Date& d)
//	{
//		if (this != &d) {}
//		cout << "Date& operator=(const Date& d)" << endl;
//		return *this;
//	}
//private:
//	//...
//};
//void f1(Date d) {}
//void f2(const Date& d) {}
//Date f3(const Date& d)
//{
//	return d;
//}
//const Date& f4(const Date& d)
//{
//	return d;
//}
//Date f5()
//{
//	static Date d;
//	return d;
//}
//Date& f6()
//{
//	static Date d;
//	return d;
//}
//int main()
//{
//	Date d1;
//	//f1(d1);
//	//f2(d1);
//	//f3(d1);
//	//f4(d1);
//	f5();
//	f6();
//	return 0;
//}
//#define MAX(A, B) (((A) > (B))?(A):(b))
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		cout << "Date(int year = 1900, int month = 1, int day = 1)" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	Date& operator=(const Date& d)
//	{
//		cout << "Date& operator=(const Date& d)" << endl;
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//	bool operator==(const Date& d)//d1==d2--->d1.operator==(d2)--->d1.operator==(&d1, d2);
//	{
//		return _year == d._year && _month == d._month && _day == d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		cout << "Stack(int capacity = 4)" << endl;
//		_a = (int*)malloc(capacity * sizeof(int));
//		if (_a)
//		{
//			_size = 0;
//			_capacity = capacity;
//		}
//	}
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		if (_a)	free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};
//Stack st;
//void f()
//{
//	static Date d;
//}
//int main()
//{
//	//f();
//	//f();
//	//Date d1;
//	//Date d2(2021, 3, 2);
//	//Stack s;
//	Date d1(2020, 3, 2);
//	Date d2(d1);
//	Date d3 = d1;
//
//	Date d4;
//	d4 = d1;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		cout << "Date(int year = 1900, int month = 1, int day = 1)" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	Date& operator=(const Date& d)
//	{
//		cout << "Date& operator=(const Date& d)" << endl;
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//	void Print()const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	bool operator==(const Date& d)const//d1==d2--->d1.operator==(d2)--->d1.operator==(&d1, d2);
//	{
//		return _year == d._year && _month == d._month && _day == d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void func(const Date& d)
//{
//	d.Print();
//}
//int main()
//{
//	Date d1(2020, 3, 2);
//	func(d1);
//	//d1.Print();
//	Date d2;
//	d2.Print();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	void Display()
//	{
//		cout << "Display ()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//	void Display() const
//	{
//		cout << "Display () const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//void Test()
//{
//	Date d1;
//	d1.Display();
//	const Date d2;
//	d2.Display();
//}
//int main()
//{
//	Test();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	Date* operator&()
//	{
//		return this;
//	}
//	const Date* operator&()const
//	{
//		return this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	&d1;//&d1--->d1.operator&()--->d1.operator&(&d1)
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	Time(int hour, int minute, int second)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{
//		cout << "Time(int hour = 0)" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	//Date(int year, int month, int day)//函数体内初始化(实际上是赋初值)--->类似于int i; i = 2;
//	//	: _N(10)
//	//	, _rf(day)
//	//	, _t(0)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//	//_N = 2;
//	//}
//	Date(int year, int month, int day)//初始化列表初始化---可以认为是对象的每个成员变量定义初始化的地方
//		: _year(year)//类似于int i = 2;
//		, _month(month)
//		, _day(day)
//		, _N(10)
//		, _rf(day)
//		, _t(0, 0, 0)
//	{}
//private:
//	int _year;//声明
//	int _month;
//	int _day;
//	//必须在定义的时候初始化
//	const int _N;
//	int& _rf;
//	Time _t;
//};
//int main()
//{
//	Date d1(2021, 3, 4);//整个对象定义的地方
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a)
//		: _a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main() {
//	A aa(1);
//	aa.Print();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a)
//		: _a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//class Solution
//{
//public:
//	int StrToInt(string s)
//	{
//		return 0;
//	}
//private:
//};
////class Solution
////{
////public:
////	Solution(int x) {}
////	int StrToInt(string s)
////	{
////		return 0;
////	}
////private:
////};
//int main()
//{
//	A aa1(1);//aa1生命周期在main函数域
//	A(2);//匿名对象,生命周期只在这一行
//	Solution s;
//	cout << s.StrToInt("abcdefg") << endl;;
//	cout << Solution().StrToInt("abcdefg") << endl;//这个调用对象和其他地方都不同,就这一行用,那么就可以用匿名对象
//
//	//Solution s(1);
//	//cout << s.StrToInt("abcdefg") << endl;;
//	//cout << Solution(1).StrToInt("abcdefg") << endl;//这个调用对象和其他地方都不同,就这一行用,那么就可以用匿名对象
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	/*explicit*/ A(int a)//explicit明显的
//		: _a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(const A& aa)
//		: _a(aa._a)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A aa1(1);
//	A aa2 = 2;//aa2也是调用的构造函数,这里是C++支持的隐式类型转换(单参构造函数才支持)
//			  //理论上:先用2构造一个匿名的临时对象A(2),再用这个临时对象去拷贝构造aa2
//			  //但是实现上,VS编译器把这两个过程优化合并了,直接调用了构造函数构造了aa2类似于A aa2(2);
//	aa1.Print();
//	aa2.Print();
//
//	//int i = 0;
//	//const double& d = i;
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
////class string
////{
////public:
////	string(const char* str)
////	{}
////private:
////	//...
////};
//class Solution
//{
//public:
//	int StrToInt(string s)
//	{
//		return 0;
//	}
//private:
//};
//int main()
//{
//	string s1("hello");
//	string s2 = "world";
//
//	string s("123");
//	cout << Solution().StrToInt(s) << endl;
//	cout << Solution().StrToInt(string("123")) << endl;
//	cout << Solution().StrToInt("123") << endl;//推荐这种,隐式类型转换+优化
//	return 0;
//}
//#include <iostream>
//using namespace std;
////实现一个类,计算中程序中创建出了多少个类对象
//class A
//{
//public:
//	A()
//	{
//		_countA++;
//	}
//	A(const A& aa)
//	{
//		_countA++;
//	}
//	//int GetCountA()
//	//{
//	//	return _countA;
//	//}
//	static int GetCountA()//相比非静态成员函数,静态成员函数没有this指针,所以不能访问其他非静态成员变量
//	{
//		//_x = 10;
//		return _countA;
//	}
////private:
//	static int _countA;//声明
//	//静态成员变量不属于某个对象,而是属于所有对象,属于整个类,存储在静态区(数据段),在类外进行初始化
//	int _x;
//};
//int A::_countA = 0;//定义并初始化
//int main()
//{
//	//cout << sizeof(A) << endl;//1,说明_countA不属于任何一个对象
//	A a1;
//	A a2;
//	A a3;
//	A a4(a3);
//	A a5(a1);
//	A();
//	//如果没有访问限定符的限制,指定类域就可以访问静态成员,指定类域有两种方式,对象.或者类型::
//	//cout << a1._countA << endl;
//	//cout << A::_countA << endl;
//	cout << a1.GetCountA() << endl;
//	cout << A::GetCountA() << endl;
//
//	A* p = nullptr;
//	cout << p->_countA << endl;//p->_countA这里没有进行解引用,只是指定类域,因为_countA是静态成员变量,不存储在对象中,不需要到对象中去找,就不会对nullptr进行解引用导致崩溃
//	p->GetCountA();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class B
//{
//public:
//	B(int b = 0)
//		: _b(b)
//	{}
//	int _b;
//};
//class A
//{
//public:
//	A(int a = 100)
//		: _a(a)
//	{}
//	void Print()
//	{
//		cout << _a << endl;
//		cout << _b._b << endl;
//		cout << _p << endl;
//	}
//private://C++11支持非静态成员变量在成员声明的时候给缺省值,强调一下这里不是初始化,这里是给的缺省值,构造函数在没给值的情况下,就会用到这里的缺省值,弥补了C++98中的默认构造函数对内置类型默认不处理的问题
//	int _a = 10;
//	B _b = 20;
//	int* _p = (int*)malloc(4);
//
//	static int n;
//};
//int A::n = 10;
//int main()
//{
//	A a1(1000);
//	a1.Print();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	friend ostream& operator<<(ostream& out, const Date& d);
//	//friend istream& operator>>(istream& in, Date& d);
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	Date(const Date& d)
//		: _year(d._year)
//		, _month(d._month)
//		, _day(d._day)
//	{}
//	//void operator>>(istream& in)
//	//{
//	//	in >> _year >> _month >> _day;
//	//}
//	//void operator<<(ostream& out)
//	//{
//	//	out << _year << "-" << _month << "-" << _day << endl;
//	//	return;
//	//}
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& out, const Date& d)
//{
//	out << d._year << "-" << d._month << "-" << d._day << endl;
//	return out;
//}
//istream& operator>>(istream& in, Date& d)
//{
//	in >> d._year >> d._month >> d._day;
//	return in;
//}
//int main()
//{
//	Date d1;
//	Date d2(2021, 2, 3);
//	//cin >> d1;
//	//cout << d1;
//	//cout << d1;//这个重载中&d1是隐藏的this指针
//	//d1.operator<<(cout);
//	//d1 << cout;//d1.operator<<(cout);d1.operator<<(&d1, cout);
//	//operator<<(cout, d1);
//	//cout << d1 << d2;
//
//	//d1 >> cin;
//	//cout << d1;
//
//	operator>>(cin, d1);
//	cout << d1;
//	cin >> d1;
//	cout << d1;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{//友元函数
//	friend ostream& operator<<(ostream& out, const Date& d);
//	friend istream& operator>>(istream& in, Date& d);
//public:
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//	~Date() {}
//	Date(const Date& d)
//		: _year(d._year)
//		, _month(d._month)
//		, _day(d._day)
//	{}
//	Date(int year = 0, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& out, const Date& d)
//{
//	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
//	return out;
//}
//istream& operator>>(istream& in, Date& d)
//{
//	cout << "请依次输入年月日:>";
//	in >> d._year >> d._month >> d._day;
//	return in;
//}
//int main()
//{
//	Date d1(2021, 3, 9);
//	Date d2(2021, 3, 8);
//	cout << d1 << d2;
//	cin >> d1 >> d2;
//	cout << d1 << d2;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date;//前置声明
//class Time
//{
//	friend ostream& operator<<(ostream& out, const Date& d);//友元函数
//	friend class Date;//友元类
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//	friend ostream& operator<<(ostream& out, const Date& d);
//public:
//	Date(int year = 1900, int month = 1, int day = 1, int hour = 0, int minute = 0, int second = 0)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//		, _t(hour, minute, second)
//	{
//		cout << _t._hour * 3600 + _t._minute * 60 + _t._second << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//ostream& operator<<(ostream& out, const Date& d)
//{
//	out << d._year << "年" << d._month << "月" << d._day << "日" << d._t._hour << "时" << d._t._minute << "分" << d._t._second << "秒" << endl;
//	return out;
//}
//int main()
//{
//	Date d1(2021, 3, 9, 1, 1, 1);
//	cout << d1;
//	return 0;
//}
//#include <iostream>
//#include <cstdlib>
//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}
//int main()
//{
//	//Test();
//	int* p = (int*)calloc(10, sizeof(char));
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()//new/delete是操作符,不是函数
//{
//	int* p0 = (int*)malloc(1 * sizeof(int));
//	int* p1 = (int*)malloc(10 * sizeof(int));
//	free(p1);
//	free(p0);
//	int* p2 = new int[10];
//	int* p3 = new int;
//	int* p4 = new int(10);//注意这里是申请一个int空间并将其初始化为10
//	delete p4;
//	delete p3;
//	delete[] p2;
//	//针对内置类型,使用malloc和new申请空间效果是一样的
//	int* p = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	delete[] p;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int year = 1900, int month = 1, int day = 1)" << endl;
//	}
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{//针对自定义类型:malloc/free函数只负责开辟空间和释放空间,而new/delete操作符负责开辟空间+调用构造函数初始化对象/调用析构函数清理对象资源+释放空间
//	Date* p1 = (Date*)malloc(1 * sizeof(Date));
//	Date* p2 = (Date*)malloc(10 * sizeof(Date));
//	free(p1);
//	free(p2);
//	Date* p3 = new Date;
//	Date* p4 = new Date[10];
//	delete p3;
//	delete[] p4;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	class B
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << k << endl;
//			cout << a.h << endl;
//		}
//	};
//private:
//	static int k;
//	int h;
//};
//int A::k = 1;
//int main()
//{
//	A::B b;
//	b.foo(A());
//	return 0;
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Date
//{
//public:
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//	Date(const Date&d)
//		: _year(d._year)
//		, _month(d._month)
//		, _day(d._day)
//	{}
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int year = 1900, int month = 1, int day = 1)" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date* p1 = (Date*)malloc(1 * sizeof(Date));
//	free(p1), p1 = nullptr;
//	//Date* p2 = new Date(2021, 3, 11);
//	Date* p2 = new Date;
//	delete p2, p2 = nullptr;
//
//	Date* p3 = new Date[10];//数组只能调用默认的构造函数
//	delete[] p3, p3 = nullptr;
//
//	Date* p4 = new Date();//这里也是调用的默认构造函数,但是一般不建议加后面的()
//	delete p4, p4 = nullptr;
//	//Date d1();//有歧义,不知道是函数声明还是实例化对象出来
//	Date d2;
//	Date();
//	return 0;
//}
//#include <iostream>
//#include <cstdlib>
//#include <cassert>
//using namespace std;
//struct ListNode
//{
//	//struct ListNode* _next;
//	//struct ListNode* _prev;//C用法,必须带这个struct
//
////private:
//	ListNode* _next;
//	ListNode* _prev;
//	int _val;
//	ListNode(int val = 0)
//		: _next(nullptr)
//		, _prev(nullptr)
//		, _val(val)
//	{}
//	~ListNode()
//	{
//		while (_next) {
//			ListNode* cur = _next->_next;
//			delete _next;
//			_next = cur;
//		}
//	}
//};
//ListNode* BuyListNode(int val)
//{//开空间+初始化
//	ListNode* newNode = (ListNode*)malloc(1 * sizeof(ListNode));
//	assert(newNode);
//	newNode->_next = nullptr;
//	newNode->_prev = nullptr;
//	newNode->_val = val;
//	return newNode;
//}
//int main1()
//{
//	ListNode* newnode_c = BuyListNode(1);
//	ListNode* newnoe_cpp = new ListNode(1);
//	return 0;
//}
//int main()//operator new/operator delete是C++申请/释放内存的库函数,而不是new/delete操作符的重载,operator new/operator delete就是函数名,这里算是一个特殊,用法和malloc/free一样
////operator new/operator delete两个函数不会调用构造函数/析构函数,只是单纯的申请/释放空间,和malloc/free相似
////operator new和malloc的区别如下:C语言处理错误的方式一般是返回错误码,所以malloc失败返回0,C++处理错误的方式一般抛异常,所以operator new和new失败抛异常
////free是一个宏:#define free(p)	_free_dbg(p, _NORMAL_BLOCK)
////new是一个操作符,它底层实现等价于先调用operator new函数(而operator new函数等价于malloc函数申请空间和malloc申请空间失败的抛异常)申请空间再调用构造函数初始化
////delete是一个操作符,它底层实现等价于先调用析构函数清理对象成员中的资源,再调用operator delete函数(而operator delete函数基本等价于free,只是多做了一些操作而已)释放空间
////operator new/operator delete只是了解内容,实际用的很少,也可以通过调试状态查看new/delete语句的汇编代码看到call operator new/operator delete函数以及call构造函数/析构函数
//{
//	ListNode* node = (ListNode*)operator new(1 * sizeof(ListNode));
//	operator delete(node), node = nullptr;
//	void* p1 = malloc(0x7fffffff);//申请不了这么大的空间,所以返回nullptr
//	try
//	{
//		//void* p2 = operator new(0x7fffffff);//申请不了这么大的空间,所以抛异常(注意:异常必须被捕获,否则会崩溃)
//		char* p = new char[0x7fffffff];
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	ListNode* newNode = new ListNode(1);
//	delete newNode;
//	return 0;
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Test
//{
//public:
//	Test()
//		: _data(0)
//	{
//		cout << "Test():" << this << endl;
//	}
//	~Test()
//	{
//		cout << "~Test()" << this << endl;
//	}
//private:
//	int _data;
//};
//void test()//placement new	定位new表达式
//{
//	Test* p1 = new Test;
//	Test* p2 = new Test();
//	Test* p3 = (Test*)malloc(1 * sizeof(Test));//p3现在指向的只不过是与Test对象相同大小的一段空间,还不能算是一个对象,因为构造函数没有执行
//	Test* p4 = (Test*)malloc(1 * sizeof(Test));
//	new(p3)Test;//定位new相当于调用了构造函数
//	new(p4)Test();
//	delete p1, p1 = nullptr;
//	delete p2, p2 = nullptr;
//	p3->~Test();
//	p4->~Test();
//	free(p3), p3 = nullptr;
//	free(p4), p4 = nullptr;
//}
//class ListNode//池化技术:内存池,进程池,线程池,连接池...
//{
//public:
//	ListNode(int val)
//		: _next(nullptr)
//		, _prev(nullptr)
//		, _val(val)
//	{
//		cout << "ListNode(int val)" << endl;
//	}
//	~ListNode()
//	{
//		cout << "~ListNode()" << endl;
//	}
//	//void* operator new(size_t n)//重载类专属operator new/operator delete函数
//	//{
//	//	void* p = nullptr;
//	//	p = allocator<ListNode>().allocate(1);
//	//	cout << "memory pool allocate" << endl;
//	//	return p;
//	//}
//	//void operator delete(void* p)
//	//{
//	//	allocator<ListNode>().deallocate((ListNode*)p, 1);
//	//	cout << "memory pool deallocate" << endl;
//	//}
//	ListNode* _next;
//	ListNode* _prev;
//	int _val;
//};
//class List
//{
//public:
//	List()
//	{
//		_head = new ListNode(0);
//		_head->_next = _head;
//		_head->_prev = _head;
//	}
//	~List()
//	{
//		ListNode* cur = _head->_next;
//		while (cur != _head)
//		{
//			ListNode* next = cur->_next;
//			delete cur;
//			cur = next;
//		}
//		delete _head;
//		_head = nullptr;
//	}
//private:
//	ListNode* _head;
//};
//int main()
//{
//	//test();
//	//List l;
//
//	//ListNode* node = new ListNode(1);
//	//ListNode* array = new ListNode[10];
//
//	//使用operator new/operator delete函数和定位new(placement-new)模拟new/delete操作符的实现,但是实际很少这样用(STL源码中就有一些定位new的用法,空间已经开好了(比如从内存池来的),需要定位new调用构造函数初始化)
//	int n = 10;
//	ListNode* array = (ListNode*)operator new(n * sizeof(ListNode));//申请空间
//	for (int i = 0; i < n; i++)
//	{//显示调用构造函数去初始化一块已有的空间---定位new(replacenew)
//		new(array + i)ListNode(i);//定位new(replacenew)相当于调用了构造函数初始化空间
//	}
//	for (int i = 0; i < n; i++)
//	{
//		(array + i)->~ListNode();//显示调用了析构函数清理空间资源
//	}
//	operator delete(array), array = nullptr;//释放空间
//	return 0;
//}
//#include <cstdlib>
//#include <iostream>
//using namespace std;
//int main()
//{//如何一次在堆上申请4G的内存:在64位平台直接申请即可,将程序编译成x64的进程,因为这个申请的是虚拟内存可以申请出来....
//	//void* p1 = malloc(4ll * 1024 * 1024 * 1024);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//template<typename T>
//template<class T>//class和typename都可以,STL中用的是class,以后就用class
//void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()//泛型编程----->模板(函数模板+类模板)
//{
//	int a = 1, b = 2;
//	double d1 = 2.2, d2 = 4.44;
//	char ch1 = 'A', ch2 = 'B';
//	Swap(a, b);//调用时进行模板实例化
//	Swap(d1, d2);
//	Swap(ch1, ch2);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//template<class T>
//T Add(const T& a, const T& b)
//{
//	return a + b;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	//Add(a1, d2);//err:有歧义
//	Add(a1, (int)d2);//处理方式1:手动强转
//	Add<int>(a1, d2);//处理方式2:显示实例化(不再推演)
//	return 0;
//}
//int Add(int left, int right)
//{
//	return left + right;
//}
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//void test1()
//{//非模板函数可以和一个同名的函数模板同时存在,而且该函数模板还可以实例化为这个非模板函数
//	Add(1, 2);//与非模板函数相匹配,编译器不需要特化
//	Add<int>(1, 2);//显示实例化:调用编译器特化的Add版本
//	Add(1.1, 2.2);//与函数模板相匹配(如果匹配非模板函数,则会丢失精度)
//}
//int Add(int left, int right)
//{
//	return left + right;
//}
//template<class T1, class T2>
//T1 Add(const T1& left, const T2& right)
//{
//	return left + right;
//}
//void test2()
//{//对于非模板函数和同名模板函数,如果其他条件都相同,在调动时会优先调用非模板函数而不会从该函数模板产生出一个实例,如果模板可以产生一个具有更好匹配的函数,那么将选择模板
//	Add(1, 2);//与非函数模板类型完全相同,不需要函数模板实例化
//	Add(1, 2.0);//函数模板可以生成更加匹配的版本,编译器根据实参生成更加匹配的Add函数
//}
//int main()
//{//函数模板不允许自动类型转换,但普通函数可以进行自动类型转换
//	test1();
//	//test2();
//	return 0;
//}
//#include <iostream>
////typedef int STDataType;
//template<class T>
//class Stack//类模板
//{
//public:
//	Stack(int capacity = 8)
//		: _capacity(capacity)
//		, _top(0)
//		, _a(new T[_capacity])
//	{}
//	~Stack()
//	{
//		if (_a)	delete[] _a;
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//	void Push(const T& x);
//private:
//	//STDataType* _a;
//	T* _a;
//	int _top;
//	int _capacity;
//};
//template<class T>//类模板成员函数定义
//void Stack<T>::Push(const T& x)//普通类:类名就是类型,类模板:类型是类名<T>
//{
//	_a[_top++] = x;
//}
//int main()
//{
//	Stack<int> st1;//int
//	Stack<double> st2;//double
//	st1.Push(1);
//	st1.Push(2);
//	st1.Push(3);
//	return 0;
//}
//#include <iostream>
//using namespace std;
////template<class T1, class T2, ..., class Tn>
////class 类模板名
////{
////	//类内成员定义
////};
//template <class T>
//class Vector
//{
//public:
//	Vector(size_t capacity = 10)
//		: _capacity(capacity)
//		, _size(0)
//		, _a(new T[_capacity])
//	{}
//	~Vector();
//	void PushBack(const T& data);
//	void PopBack();
//	//...
//	size_t Size()
//	{
//		return _size;
//	}
//	T& operator[](size_t pos)
//	{
//		assert(pos < _size);
//		return _a[pos];
//	}
//private:
//	T* _a;
//	size_t _size;
//	size_t _capacity;
//};
//template <class T>//类模板中的函数放在类外定义时需要加模板参数列表
//Vector<T>::~Vector()
//{
//	if (_a)	delete[] _a;
//	_a = nullptr;
//	_size = _capacity = 0;
//}
//int main()
//{
//	return 0;
//}
//#include <iostream>
//using namespace std;
//template<class T1, typename T2>
//T1 Add(const T1& x1, const T2& x2)
//{
//	return x1 + x2;
//}
//int main()
//{
//	//cout << "Hello World" << endl;
//	cout << Add(1, 2.0) << endl;
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//int main()
//{
//	string s1;
//	s1.push_back('x');
//	vector<int> v;
//	v.push_back(1);
//	return 0;
//}
//#include <string>
//using std::string;
////using namespace std;
//int main()
//{
//	std::string s;
//	string s1;
//	return 0;
//}
//#include <iostream>
//#include <cassert>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//template<class T>
//class basic_string
//{
//private:
//	T* _str;
//	int _size;
//	int _capacity;
//};
//typedef basic_string<char> string;
//int main1()
//{
//	string s0;
//	string s1("hello world");
//	string s2(s1);
//	string s3(s1, 6, 10);
//	string s4(s1, 6);//等价于string s4(s1, 6, 4294967295);
//	string s5(s1, 6, 3);
//	string s6(s1, 6, std::string::npos);//std::string::npos,static const size_t npos = -1;npos就是4294967295而且还是缺省值
//	string s7(10, 'x');
//	cout << s0 << endl;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s6 << endl;
//	cout << s7 << endl;
//	return 0;
//}
//int main2()
//{
//	//string s1("hello world");
//	//cout << s1.size() << endl;//size()成员函数返回字符串有效字符长度,不包含'\0'
//	//cout << s1.length() << endl;//length()成员函数返回字符串有效字符长度,不包含'\0'
//	//cout << s1.capacity() << endl;//capacity()成员函数返回底层数组的大小-1,留一个存放字符串结束标志
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//s1.push_back('!');
//	//cout << s1 << endl;
//	//cout << s1.capacity() << endl;
//
//	int n = 100;
//	string numstr;
//	numstr.reserve(n);//reserve:储备,保留的意思,reserve成员函数可以在知道需要多少空间的场景下一定程度解决string的增容带来效率损失的缺陷		特点:改变容量空间,不插入数据
//	//numstr.resize(n);//特点:改变容量空间,同时对这段空间初始化(默认缺省初始化为'\0'),string很少使用这个,vector用的多一点
//	//numstr.resize(n, 'x');
//	int capacity = numstr.capacity();
//	cout << capacity << endl;
//	for (int i = 0; i < n; ++i)
//	{
//		numstr.push_back('0' + i);
//		if (capacity != numstr.capacity())
//		{
//			cout << "new capacity:" << numstr.capacity() << endl;
//			capacity = numstr.capacity();
//		}
//	}
//	cout << numstr << endl;
//	return 0;
//}
//C++ string使用s[i]形式访问,s.operator[](&s, i);类中大致实现如下
//char& operator[](size_t i)
//{
//	assert(i < _size);
//	return _str[i];//返回引用:出了函数作用域,返回对象还存在,可以使用引用返回,引用返回有两个用意,1.减少一次拷贝构造,2.支持外面调用的地方修改返回对象(值返回的话返回临时对象具有常性无法进行修改)
//}
//cout << s[i];	s[i] = 'l';
//template<class T>
//void Swap(T& x1, T& x2)
//{
//	T t = x1;
//	x1 = x2;
//	x2 = t;
//}
//class Solution {
//public:
//	//int StrToInt(string str) {
//	//	size_t i = 0;
//	//	int flag = 1;
//	//	while (i < str.size() && str[i] == ' ')   i++;
//	//	if (str[i] == '+')  i++;
//	//	else if (str[i] == '-') i++, flag = -1;
//	//	else if (str[i] > '9' || str[i] < '0')  return 0;
//	//	long long res = 0;
//	//	while (i < str.size() && str[i] >= '0' && str[i] <= '9') {
//	//		res = res * 10 + (str[i] - '0');
//	//		if (res * flag > INT_MAX) return INT_MAX;
//	//		if (res * flag < INT_MIN) return INT_MIN;
//	//		i++;
//	//	}
//	//	if (i < str.size()) return 0;
//	//	return (int)(flag * res);
//	//}
//	int StrToInt(string str) {
//		int num = 0;
//		string::iterator it = str.begin();
//		while (it != str.end()) {
//			num *= 10;
//			num += *it - '0';
//			it++;
//		}
//		num = 0;
//		//string::reverse_iterator rit = str.rbegin();
//		auto rit = str.rbegin();
//		while (rit != str.rend()) {
//			num *= 10;
//			num += *rit - '0';
//			++rit;
//		}
//		return num;
//	}
//	string Reverse(const string& s)
//	{
//		//for (size_t i = 0, j = s.size() - 1; i < j; ++i, --j)	swap(s[i], s.at(j));//at()和operator[]区别是前者越界抛异常,后者越界断言出错
//		//return s;
//		string::const_iterator first = s.begin();
//		string::const_iterator last = s.end() - 1;
//		while (first < last)
//		{
//			//*first = 'a';
//			//swap(*first, *last);
//			first++, last--;
//		}
//		return s;
//	}
//};
////总结一下:string遍历建议使用下标+[]或者范围for,但是也要知道迭代器的用法,因为迭代器是容器通用的遍历方式
//int main()
//{
//	//try
//	//{
//	//	cout << Solution().Reverse("1234") << endl;
//	//}
//	//catch (exception& e)
//	//{
//	//	cout << e.what() << endl;
//	//}
//	//cout << Solution().StrToInt("1234") << endl;
//
//	//vector<int> v = { 1, 2, 3, 4, 5 };
//	//vector<int>::iterator it = v.begin();
//	//while (it != v.end()) {
//	//	cout << *it << " ";
//	//	it++;
//	//}
//
//	string s("hello");//C++11范围for,STL容器都支持范围for,而范围for的底层就是迭代器
//	//for (auto e : s)	cout << e << " ";
//	//cout << endl;
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//for (auto& e : arr) e *= 2;
//	//for (auto e : arr)	cout << e << " ";
//	//cout << endl;
//	cout << s << endl;
//	cout << s.c_str() << endl;
//
//	s.push_back('\0');
//	s.push_back('x');
//	s.push_back('x');
//	s.push_back('x');
//	s.push_back('x');
//	for (auto e : s)	cout << e << " ";	cout << endl;
//	cout << s.c_str() << endl;//这种方式是类似C字符串输出,遇到\0就停止
//	cout << s << endl;//这种方式是用遍历的方式输出的,不会因为中途遇到\0而停止
//	s.append(" world");
//	cout << s << endl;
//	string s1("hello C++ STL");
//	s.append(s1);
//	cout << s << endl;
//
//	s += '!';//底层用的就是push_back()
//	cout << s << endl;
//	s += "lllllllllllllladkjfaslfla;sf";//底层用的就是append()
//	cout << s << endl;
//	return 0;
//}
//typedef basic_string<char> string;//模板类,这个和vector<char>的区别是vector<char>后面没有\0
//typedef basic_string<wchar_t> wstring;//类模板	wchar_t是宽字符,大小是2字节,常用来编码表示汉字
//template<class T>
//class basic_string//类模板
//{
//private:
//	T* _a;//vs中还会有一个静态的 char _buff[16]; 因为一般字符串不会太长,直接使用这个_buff,下面的_a,_size,_capacity浪费了,而字符串比较长超过了15个有效字符则直接使用_a,_size,_capacity前面的_buff就浪费了,这样做的本质是牺牲空间换取时间以提高效率,而且一定程度上可以减少内存碎片问题
//	size_t _size;
//	size_t _capacity;
//};
#include <iostream>
#include <string>
using namespace std;
//int main()
//{//vs中还会有一个静态的 char _buff[16]; 因为一般字符串不会太长,直接使用这个_buff,下面的_a,_size,_capacity浪费了,而字符串比较长超过了15个有效字符则直接使用_a,_size,_capacity前面的_buff就浪费了,这样做的本质是牺牲空间换取时间以提高效率,而且一定程度上可以减少内存碎片问题,下面代码通过调试监视窗口可以大致看到上述的分析内容
//	//string s1("12345678");
//	//string s2("12345678123456781234567812345678");
//
//	string url = "http://www.cplusplus.com";
//	string url_append = url;
//	string url_push_back = url;
//	url_append += "/reference/string/string/append/";
//	url_push_back += "/reference/string/string/push_back/";
//	cout << url_append << endl;
//	cout << url_push_back << endl;
//	return 0;
//}
//int main()
//{//一般情况下不推荐使用insert接口,因为头部中部insert需要挪动数据,时间复杂度O(N)效率低
//	string s("1234");
//	s.insert(s.begin(), '0');
//	cout << s << endl;
//	s.insert(0, 10, '9');
//	cout << s << endl;
//	s.insert(0, "hahaha");
//	cout << s << endl;
//	s.insert(4, "ggggg");
//	cout << s << endl;
//	s.insert(s.size() - 1, 1, 'u');
//	cout << s << endl;
//	s.insert(s.size(), 1, 't');
//	cout << s << endl;
//	return 0;
//}
//int main()
//{
//	//string file1("string.cpp.tar.zip");
//	//string file2("string.c");
//	//string file3("test.txt");
//	//size_t pos1 = file1.find('.');
//	//if (pos1 != std::string::npos)//std::string::npos这个数字是(size_t)-1,即4294967295,npos是一个string中的公有的静态成员变量
//	//{
//	//	cout << file1.substr(pos1) << endl;
//	//	//cout << file1.c_str() + pos1 << endl;
//	//	//cout << file1.substr(pos1, file1.size() - pos1) << endl;
//	//}
//	//size_t pos3 = file3.find('.');
//	//if (pos3 != std::string::npos)
//	//{
//	//	cout << file3.substr(pos3) << endl;
//	//}
//	//size_t pos = file1.rfind('.');
//	//if (pos != (size_t)-1)	cout << file1.substr(pos) << endl;
//
//	string s = "http://www.cplusplus.com/reference/string/string/find/";
//	cout << s << endl;
//	size_t pos = s.find(':');
//	if (pos != string::npos)	cout << s.substr(0, pos) << endl;
//	size_t p = s.find('/', pos + 3);
//	if (p != string::npos)	cout << s.substr(pos + 3, p - (pos + 3)) << endl;
//	cout << s.substr(p + 1) << endl;
//	cout << "----" << endl;
//	string copy(s);
//	cout << copy.erase(0, pos + 7) << endl;
//	return 0;
//}
//int main()
//{
//	string s1("腾讯");
//	string s2("腾讯");//一般而言:一个汉字占2字节,对应一张汉字表(编码方式),读音相同的汉字编码放在一起
//	cout << (s1 == s2) << endl;
//	s1[1] = -39;
//	s1[3] = -75;
//	cout << (s1 == s2) << endl;
//	cout << ("阿里"== s2) << endl;
//	cout << (s1 == "字节") << endl;
//	return 0;
//}
//int main()
//{
//	string suff("http://");
//	//suff += "baidu.com";
//	//cout << suff << endl;
//	string baidu_url = suff + "baidu.com";
//	string tengxun_url = suff + "tengxun.com";
//	cout << baidu_url << endl;
//	cout << tengxun_url << endl;
//	cout << suff << endl;
//	return 0;
//}
//#include <cctype>
//class Solution {
//public:
//	string addStrings(string num1, string num2) {
//		string res;
//		reverse(num1.begin(), num1.end());
//		reverse(num2.begin(), num2.end());
//		size_t i = 0, j = 0;
//		int carry = 0;
//		int t = 0;
//		while (i < num1.size() && j < num2.size()) {
//			t = num1[i] + num2[j] - 96 + carry;
//			res += (t + '0');
//			carry = 0;
//			if (t > 9)  carry = 1, res[i] -= 10;
//			++i, ++j;
//		}
//		while (i < num1.size()) {
//			t = num1[i] + carry - 48;
//			res += (t + '0');
//			carry = 0;
//			if (t > 9)  carry = 1, res[i] -= 10;
//			++i;
//		}
//		while (j < num2.size()) {
//			t = num2[j] + carry - 48;
//			res += (t + '0');
//			carry = 0;
//			if (t > 9)  carry = 1, res[j] -= 10;
//			++j;
//		}
//		if (carry)	res += '1';
//		reverse(res.begin(), res.end());
//		return res;
//	}
//};
//int main()
//{
//	cout << Solution().addStrings("1", "9") << endl;
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <cassert>
//#include <cstring>
//using namespace std;
////模拟实现简单的string(不包含增删查改)
//namespace tzh
//{
//	class string
//	{
//		friend ostream& operator<<(ostream& out, const tzh::string& s);
//		friend istream& operator>>(istream& in, tzh::string& s);
//	public:
//		//string()
//		//	//: _str(nullptr)//写法错误,与STL中的功能不匹配
//		//	: _str(new char[1])//这里new char[1]中[]里面只有1也要这样new,因为析构函数使用了delete[]析构,要对应起来
//		//{
//		//	_str[0] = '\0';
//		//}
//		/*explicit */string(const char* str = "")
//			: _str(new char[strlen(str) + 1])
//		{
//			strcpy(_str, str);
//		}
//		~string()
//		{
//			if (_str)	delete[] _str;
//			_str = nullptr;
//		}
//		string(const string& s)//编译器生成的默认拷贝构造函数是值拷贝(浅拷贝),日期类用默认的就可以,而类似string/vector/list这样的类默认拷贝构造函数(浅拷贝/值拷贝)会因同一段堆内存被delete两次而崩溃,只能自己实现深拷贝
//			: _str(new char[strlen(s._str) + 1])
//		{
//			strcpy(_str, s._str);
//		}
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				delete[] _str, _str = nullptr;
//				_str = new char[strlen(s._str) + 1];
//				strcpy(_str, s._str);
//			}
//			return *this;
//		}
//		char& operator[](size_t i)
//		{
//			//assert(i < _size);
//			return _str[i];
//		}
//		const char* c_str()const
//		{
//			return _str;
//		}
//	private:
//		char* _str;
//		//size_t _size;
//		//size_t _capacity;
//	};
//	ostream& operator<<(ostream& out, const string& s)
//	{
//		out << s._str << endl;
//		return out;
//	}
//	istream& operator>>(istream& in, string& s)
//	{
//		in >> s._str;
//		return in;
//	}
//}
////int main()
////{//注意free/delete/delete[]一个空指针不会有任何问题,只是无事发生而已
////	tzh::string s1("hello");
////	s1[0] = 'x';
////	//tzh::string s0 = "world";//隐式类型转换,因为类中有单参构造函数,可以加explicit关键字取消这种隐式类型转换
////	tzh::string s3;
////	cout << s1.c_str() << endl;
////	//cout << s3.c_str() << endl;//崩溃,对空地址读取,读取位置 0x00000000(nullptr) 时发生访问冲突
////	cout << s3.c_str() << endl;
////	string s4;
////	cout << s4.c_str() << endl;
////	return 0;
////}
//int main()
//{
//	tzh::string s1("hello");
//	tzh::string s2(s1);
//	s1[0] = 'x';
//	//cout << s2 << endl;
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//
//	tzh::string s3("hello bit");
//	s1 = s3;
//	cout << s1.c_str() << endl;
//	cout << s3.c_str() << endl;
//	return 0;
//}
//#include "string.h"
//int main()
//{
//	tzh::string s("hello");
//	for (size_t i = 0; i < s.size(); i++)	cout << s[i] << " ";
//	cout << endl;
//	tzh::string s1(s);
//	for (size_t i = 0; i < s1.size(); i++)	cout << s1[i] << " ";
//	cout << endl;
//	tzh::string s2 = s1;
//	for (size_t i = 0; i < s2.size(); i++)	cout << s2[i] << " ";
//	cout << endl;
//	tzh::string::iterator it = s.begin();
//	while (it != s.end())	cout << *it++ << " ";
//	cout << endl;
//	for (auto x : s1)	cout << x << " ";//自实现的容器里面写了迭代器,可以实现范围for遍历,因为C++11中范围for底层就是替换成迭代器(注意自实现的迭代器名字,函数必须和库中保持一致,否则会有错误)
//	cout << endl;
//	const tzh::string str("tzh");
//	tzh::string::const_iterator i = str.begin();
//	while (i != str.end())	cout << *i << " ", i++; cout << endl;
//	cout << s.c_str() << endl;
//	cout << s << endl;
//	//cin >> s;
//	cout << s << endl;
//	for (auto& c : s) c += 1;
//	for (auto c : s)	cout << c << endl;
//	cout << (s += "hello world");
//
//	return 0;
//}
//#include "string.h"
//int main()
//{
//	tzh::string s0("");
//	auto s1 = s0;
//	s0 = "hello";
//	s1 = " world!";
//	cout << "s0 " << s0 << endl;
//	cout << "s1 " << s1 << endl;
//
//	tzh::string s2(s0);
//	cout << "s2 " << s2 << endl;
//
//	auto s3 = s1;
//	cout << "s3 " << s3 << endl;
//	s3 += s2;
//	cout << "s3 " << s3 << endl;
//	s0 += " C++!";
//	cout << "s0 " << s0 << endl;
//
//	cout << "s0 " << (s0 + "C++") << endl;
//	cout << "s0 " << s0 << endl;
//
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//namespace tzh
//{//现代写法---实现一个简单的string
//	class string
//	{
//	public:
//		string(const char* str = "")
//			: _str(new char[strlen(str) + 1])
//		{
//			strcpy(_str, str);
//		}
//		~string()
//		{
//			if (_str)	delete[] _str;
//			_str = nullptr;
//		}
//		string(const string& s)
//			: _str(nullptr)
//		{
//			string tmp(s._str);
//			swap(_str, tmp._str);//swap在algorithm头文件中,可以交换任意类型的数据
//#if 0
//template<class T>//template <class T> void swap(T & a, T & b);
//void swap(T & x1, T & x2)
//{
//	T t = x1;
//	x1 = x2;
//	x2 = t;
//}
//#endif
//		}
//		//string& operator=(const string& s)
//		//{
//		//	if (this != &s)
//		//	{
//		//		string tmp(s._str);
//		//		swap(_str, tmp._str);
//		//	}
//		//	return *this;
//		//}
//		string& operator=(string s)//更优的赋值运算符重载写法
//		{
//			swap(_str, s._str);
//			return *this;
//		}
//		const char* c_str()const
//		{
//			return _str;
//		}
//	private:
//		char* _str;
//	};
//}
//int main()
//{
//	tzh::string s1("hello");
//	tzh::string s2(s1);
//	tzh::string s3;
//	s3 = s2;
//	cout << s3.c_str() << endl;
//	return 0;
//}
//#include "string.h"
//int main()
//{
//	std::string s1("hello");
//	std::string s2("world!");
//	swap<std::string>(s1, s2);//交换代价很大,涉及到一个拷贝构造(深拷贝),析构然后一个赋值运算符重载(深拷贝),又一个析构然后又一个赋值运算符重载(深拷贝),如果两个对象s1,s2很大那么代价是巨大的,不建议使用swap模板函数交换这样的自定义类型
//	s1.swap(s2);//交换的代价很小,只需要将s1,s2底层的指针进行交换,数据进行交换即可
//	return 0;
//}
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <string>
#include <map>
//using namespace std;
//using std::vector;//单独展开
//void Print(const std::vector<int>& v)
//{
//	//std::vector<int>::const_iterator it = v.begin();
//	//while (it != v.end())	std::cout << *it++ << " ";
//	//std::cout << std::endl;
//	for (auto x : v)	std::cout << x << " ";
//	std::cout << std::endl;
//}
//int main()
//{
//	std::vector<int> v1;
//	std::vector<int> v2(10, 3);
//	std::vector<int> copy(v1);
//	std::vector<int> v3(v2.begin(), v2.end());
//	std::list<int> lt(5, 3);
//	std::vector<int> v4(lt.begin(), lt.end());//底层实现:	while (first != last) push_back(*first), ++first;所以需要让*first和v4的元素类型一致,否则会出错
//	//容器中接口函数,凡是迭代器区间都是[first,last)左闭右开型,因为是类似于指针的形式访问容器,类模板中可以有函数模板
//	for (size_t i = 0; i < v2.size(); i++)	std::cout << v2[i] << " ";	std::cout << std::endl;
//
//	for (std::vector<int>::iterator it = v3.begin(); it != v3.end(); it++)	std::cout << *it << " ";
//	std::cout << std::endl;
//	
//	//Print(v4);
//
//	for (const auto& e : v3)	std::cout << e << " ";	std::cout << std::endl;
//	//如果不修改值使用范围for时,可以用如上方法进行遍历,以提高效率
//	std::vector<std::string> v;
//	v.push_back("peter");
//	v.push_back("jack");
//	v.push_back("lucy");
//	for (size_t i = 0; i < v.size(); i++)	std::cout << v[i] << " ";	std::cout << std::endl;
//	for (std::vector<std::string>::iterator it = v.begin(); it != v.end(); it++)	std::cout << *it << " ";	std::cout << std::endl;
//	for (const auto& e : v)	std::cout << e << " ";	std::cout << std::endl;//如果不修改值使用范围for时,可以用如上方法进行遍历,以提高效率,否则不知不觉效率会非常低(每当进入一次循环都会有一个拷贝构造带来的深拷贝,出了作用域又析构,效率很低)
//
//	std::vector<std::vector<std::string>> vv;
//	//std::vector<std::map<std::string, std::string>> tp;
//	//auto it = tp.begin();
//
//	std::vector<char> vvv;
//	std::string s;
//	char buff[128] = "";
//	strcpy(buff, s.c_str());
//	return 0;
//}
//int main()
//{
//	std::vector<int> vi;
//	std::vector<char> vch;
//	//std::cout << vi.max_size() << std::endl;
//	//std::cout << vch.max_size() << std::endl;
//
//	std::cout << vi.size() << std::endl;
//	std::cout << vi.capacity() << std::endl;
//
//	vi.reserve(10);
//	std::cout << vi.size() << std::endl;
//	std::cout << vi.capacity() << std::endl;
//	vi.resize(20, 2);
//	std::cout << vi.size() << std::endl;
//	std::cout << vi.capacity() << std::endl;
//
//	std::vector<int> v0(10, 0);//开10个空间,并将其全部初始化为0
//	std::vector<int> v1 = { 10, 0 };//开两个空间,分别初始化为10,0
//	std::vector<int> v2;
//	v2.resize(10, 0);
//	return 0;
//}
//int main()
//{
//	size_t sz;
//	std::vector<int> foo;
//	sz = foo.capacity();
//	std::cout << "making foo grow:\n";
//	foo.reserve(100);
//	for (int i = 0; i < 100; i++)
//	{
//		foo.push_back(i);
//		if (sz != foo.capacity())
//		{
//			sz = foo.capacity();
//			std::cout << "capacity changed: " << sz << std::endl;
//		}
//	}
//	std::cout << sizeof(std::string) << std::endl;
//	return 0;
//}
//int main()
//{
//	std::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	std::vector<int>::iterator pos =  find(v.begin(), v.end(), 3);
//	if (pos != v.end())	std::cout << "找到了:" << *pos << std::endl, *pos = 30;//, v.insert(pos, 300);
//	else    std::cout << "find none" << std::endl;
//	v.insert(v.begin(), 0);
//	for (const auto& e : v)	std::cout << e << " "; std::cout << std::endl;
//	v.erase(pos);//崩溃:迭代器失效类似于野指针问题
//	for (const auto& e : v)	std::cout << e << " "; std::cout << std::endl;
//	return 0;
//}
//int** generate(int numRows, int* returnSize) {
//	int** pp = (int**)malloc(numRows * sizeof(int*));
//	for (int i = 0; i < numRows; i++)
//	{
//		int t = i + 1;
//		pp[i] = (int*)calloc(t, sizeof(int));
//		pp[i][0] = 1;
//		pp[i][t - 1] = 1;
//	}
//	for (int i = 1; i < numRows; i++)
//	{
//		for (int j = 1; j < i + 1; j++)
//		{
//			if (pp[i][j] == 0)
//			{
//				pp[i][j] = pp[i - 1][j] + pp[i - 1][j - 1];
//			}
//		}
//	}
//	*returnSize = numRows;
//	return pp;
//}
//int main()
//{
//	int r = 0;
//	int** pp = generate(10, &r);
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//			printf("%d ", pp[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//using std::vector;
//using std::cout;
//using std::endl;
//class Solution {
//public:
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> vv;
//		vv.resize(numRows, vector<int>());
//		for (size_t i = 0; i < (size_t)numRows; i++)
//		{
//			vv[i].resize(i + 1, 0);
//			vv[i][0] = 1;
//			vv[i][vv[i].size() - 1] = 1;
//		}
//		for (size_t i = 1; i < (size_t)numRows; i++)
//		{
//			for (size_t j = 1; j < vv[i].size() - 1; j++)
//			{
//				vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
//			}
//		}
//		return vv;
//	}
//};
//int main()
//{
//	auto vv = Solution().generate(10);
//	for (size_t i = 0; i < 10; i++)
//		for (size_t j = 0; j < vv[i].size(); j++)	cout << vv[i][j];
//		cout << endl;
//	return 0;
//}
#endif
