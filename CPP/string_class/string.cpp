#define _CRT_SECURE_NO_WARNINGS 1
#include "string.h"
void Test1()
{
	tzh::string s0;
	cout << s0.size() << endl;
	cout << s0.c_str() << endl;
	tzh::string s1("hello");
	cout << s1.size() << endl;
	cout << s1.c_str() << endl;
	tzh::string s2(s1);
	cout << s2.size() << endl;
	cout << s2.c_str() << endl;
	s0 = s1;
	cout << s0.size() << endl;
	cout << s0.c_str() << endl;
}
void Print(const tzh::string& s)
{
	tzh::string::const_iterator it = s.begin();
	while (it != s.end())	cout << *it++/*, *it = 'x' err*/;	cout << endl;
}
void Test2()
{
	tzh::string s0("hello");
	for (auto x : s0)	cout << x;
	cout << endl;
	for (auto x : s0)	x += 1;
	for (auto x : s0)	cout << x;
	cout << endl;
	for (auto& x : s0)	x += 1;
	for (auto x : s0)	cout << x;
	cout << endl;
	cout << endl;
	//cout << s0 << endl;
	//Print(s0);
	//cout << s0.c_str() << endl;
	//tzh::string::iterator it = s0.begin();
	//while (it != s0.end())	cout << *it++ << endl;
	////cout << s0;
	//s0.clear();
	//cout << s0.c_str() << endl;
	//cout << s0 << endl;
}
int main()
{
	//Test1();
	//Test2();
	return 0;
}