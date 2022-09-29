#define _CRT_SECURE_NO_WARNINGS 1
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
int addint(int i, int j)
{
	return i + j;
}
double adddouble(double i, double j)
{
	return i + j;
}
void f(int i, double d) {}
void f(double d, int i) {}
int main()
{

	return 0;
}