#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int main() {
//	cout << "hello world!" << endl;
//	return 0;
//}
//#include <stdio.h>
////�����ռ� --- ��
//namespace N
//{
//	int scanf = 0;//�����scanf����ȫ�ֱ���,�ŵ�N�����ռ�������
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
////using bit::b;//2.�൱�ڰ�b����չ����ȫ������
//using namespace bit;//3.ȫ��չ��
////�Ƽ�����Ŀ��,������Ҫȫ��չ��,���ʹ��1��2�ķ�ʽ
//int main()
//{
//	printf("%d\n", bit::a);//1.ֱ��ָ����
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//#include <iostream>
//using namespace std;
////C++������Ķ���������std��������ռ���
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
//using std::cout;//���԰������ռ��г��õ����ͻ��߱���չ��
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
//#include <iostream.h> vc6.0֧��,�µı�����һ�㲻֧��,û�������ռ�
//#include <iostream>
//using namespace std;
//int main()
//{
//	//1.cout/cin���printf/scanf,�����Զ�ʶ������,���������ʽ
//	//2.һ��֧���������
//	//3.endl���з��ȼ���'\n'
//	//�Զ�ʶ��ԭ��,cout,cin������ʲô?�漰����Ͷ���,���������,��������
//	cout << "Hello World!" << endl;
//	int i = 50;
//	char ch = 48;
//	double d = 2.222;
//	cout << i << endl;
//	cout << d << endl;
//	cout << ch << endl;
//	cout << &i << endl;//int* ��ʮ���������
//	cout << &ch << endl;//char* �ַ���
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
//	//ʵ��ʹ�ýǶ�,cin/cout��scanf/printf������,���Ǹ�������,�ĸ��������ĸ�,����һ������û�������
//	int i;
//	double d;
//	//cin >> i >> d;//CPP����
//	//cout << i << d << endl;
//	Student s = { "Peter", 18 };
//	printf("name:%s, age:%d\n", s._name, s._age);//C����
//	cout << "name:" << s._name << ", age:" << s._age << endl;
//	d = 10.0 / 3.0;//����С�������λ
//	printf("%.2lf\n", d);
//	cout << d << endl;
//	cout.unsetf(ios::fixed);
//	cout << setprecision(3) << d << endl;
//	return 0;
//}
//#include <iostream>
//#include "test.h"
//using namespace std;
//void TestFunc(int a = 0)//ȱʡ����
//{
//	cout << a << endl;
//}
//void testfunc(int a = 10, int b = 20, int c = 30)//ȫȱʡ����
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//void test(int a, int b = 10, int c = 20)//��ȱʡ����,��ȱʡ�����������������������,�������Ÿ�,ȱʡ���������ں��������ͺ���������ͬʱ����,һ�����Ƿ��ں���������
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int d = 20;//ȱʡֵ�����ǳ�������ȫ�ֱ���
//void Test(int a, int b, int c = d/*int c = 10*/)//��ȱʡ����
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
//	TestFunc();//û�д���ʱ,ʹ�ò�����Ĭ��ֵ
//	TestFunc(10);//����ʱ,ʹ��ָ����ʵ��
//	Func(1, 1);
//	return 0;
//}
#if 0
void StackInit(Stack* pst, int num = 8)
{
	pst->_a = malloc(sizeof(int) * num);
	//..
}//ȱʡ������һ��ʹ�ó���
StackInit(&st);
StackInit(&st, 100);
#endif
//�����C���Բ�֧��ͬ������,��C++Ϊ�˽���������,֧��ͬ������,������Ҫ��:ͬһ��������,��������ͬ,�����ĸ���,����,˳��ͬ���ܹ��ɺ�������,������ֵ���Ͳ�ͬ����Ϊ���ɺ������ص�����
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