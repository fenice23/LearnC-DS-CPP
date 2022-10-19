#define _CRT_SECURE_NO_WARNINGS 1
//#include "Date.h"
//static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//Date::Date(int year, int month, int day)
//{
//	cout << "Date::Date(int year, int month, int day)" << endl;
//	if (year >= 0 && month > 0 && month < 13 && day > 0 && day <= GetMonthDay(year, month))
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	else
//	{
//		cout << "日期非法!" << endl;
//	}
//}
//Date::~Date()
//{
//	cout << "~Date::Date()" << endl;
//}
//void Date::Print()
//{
//	cout << _year << "-" << _month << "-" << _day << endl;
//}
//int Date::GetMonthDay(int year, int month)
//{
//	if ((month == 2) && ((year % 400 == 0) || (year % 4 == 0 && year % 100)))	return 28;
//	return days[month];
//}
#include "Date.h"
inline bool IsLeapYear(int year)
{
	return (year % 400 == 0) || (year % 4 == 0 && year % 100);
}
void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
int Date::GetMonthDay(int year, int month)
{
	static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && IsLeapYear(year))	return 29;
	return days[month];
}
Date::Date(int year, int month, int day)
{
	if (year >= 0 && month > 0 && month < 13 && day > 0 && day <= GetMonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		cout << "日期非法!" << endl;
	}
}
Date::~Date()
{
	//cout << "~Date()" << endl;
}
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}
Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}
bool Date::operator==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}
bool Date::operator>(const Date& d)
{
	return (_year > d._year) || (_year == d._year && _month > d._month) || (_year == d._year && _month == d._month && _day > d._day);
}
bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}
bool Date::operator>=(const Date& d)
{
	return (*this > d)|| (*this == d);
}
bool Date::operator<(const Date& d)
{
	return !(*this >= d);
}
Date& Date::operator+=(const int& day)
{
	Date& res = *this;
	res._day += day;
	int t = 0;
	if (day > 0)
	{
		while (res._day > (t = GetMonthDay(res._year, res._month)))
		{
			res._day -= t;
			res._month++;
			if (res._month == 13)
			{
				res._month = 1;
				res._year++;
			}
		}
	}
	else
	{
		while (res._day <= 0)
		{
			res._month--;
			if (res._month == 0)
			{
				res._month = 12;
				res._year--;
			}
			res._day += GetMonthDay(res._year, res._month);
		}
	}
	return res;
}
Date Date::operator+(const int& day)
{
	Date res(*this);
	res += day;
	return res;
	//Date tmp = *this;
	//tmp._day = _day + day;
	//int t = 0;
	//if (day > 0)
	//{
	//	while (tmp._day > (t = GetMonthDay(tmp._year, tmp._month)))
	//	{
	//		tmp._day -= t;
	//		tmp._month++;
	//		if (tmp._month == 13)
	//		{
	//			tmp._year++;
	//			tmp._month = 1;
	//		}
	//	}
	//}
	//else
	//{
	//	while (tmp._day <= 0)
	//	{
	//		tmp._month--;
	//		if (tmp._month == 0)
	//		{
	//			tmp._month = 12;
	//			tmp._year--;
	//		}
	//		tmp._day += GetMonthDay(tmp._year, tmp._month);
	//	}
	//}
	//return tmp;
}
Date Date::operator-(const int& day)
{
	Date tmp = *this;
	return tmp + (-day);
}
Date& Date::operator-=(const int& day)
{
	Date& res = *this;
	return res += (-day);
}
Date& Date::operator++()
{
	Date& res = *this;
	return res += 1;
}
Date& Date::operator--()
{
	Date& res = *this;
	return res -= 1;
}
Date Date::operator--(int)
{
	Date res(*this);
	(*this) -= 1;
	return res;
	//Date& tmp = *this;
	//Date ret = *this;
	//tmp._day--;
	//if (tmp._day == 0)
	//{
	//	tmp._month--;
	//	if (tmp._month == 0)
	//	{
	//		tmp._month = 12;
	//		tmp._year--;
	//	}
	//	tmp._day += GetMonthDay(tmp._year, tmp._month);
	//}
	//return ret;
}
Date Date::operator++(int)
{
	Date res(*this);
	(*this) += 1;
	return res;
	//Date& tmp = *this;
	//Date ret = *this;
	//tmp._day++;
	//int t = 0;
	//if (tmp._day > (t = GetMonthDay(tmp._year, tmp._month)))
	//{
	//	tmp._day -= t;
	//	tmp._month++;
	//	if (tmp._month == 13)
	//	{
	//		tmp._year++;
	//		tmp._month = 1;
	//	}
	//}
	//return ret;
}
int Date::operator-(const Date& d)
{
	int res = 0;
	int flag = 1;
	Date d1 = *this;
	Date d2 = d;
	if (d1 < d2)
	{
		flag = -1;
		Date t = d1;
		d1 = d2;
		d2 = t;
	}
	while (d1 != d2)
	{
		res++;
		d2++;
	}
	return res * flag;
}