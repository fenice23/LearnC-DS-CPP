#pragma once
//#include <iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1);
//	void Print();
//	int GetMonthDay(int year, int month);
//	~Date();
//private:
//	int _year;
//	int _month;
//	int _day;
//};
#include <iostream>
using namespace std;
class Date
{
public:
	void Print();
	int GetMonthDay(int year, int month);
	Date(int year = 1900, int month = 1, int day = 1);
	~Date();
	Date(const Date& d);
	Date& operator=(const Date& d);
	bool operator==(const Date& d);
	bool operator!=(const Date& d);
	bool operator>(const Date& d);
	bool operator<(const Date& d);
	bool operator>=(const Date& d);
	bool operator<=(const Date& d);
	Date operator+(const int& day);
	Date& operator+=(const int& day);
	Date operator-(const int& day);
	Date& operator-=(const int& day);
	Date& operator++();//前置++   ++d1;	d1.operator++(&d1);
	Date operator++(int);//后置++ d1++; d1.operator(&d1, 0);
	Date& operator--();//前置--
	Date operator--(int);//后置--
	int operator-(const Date& d);//日期-日期
private:
	int _year;
	int _month;
	int _day;
};