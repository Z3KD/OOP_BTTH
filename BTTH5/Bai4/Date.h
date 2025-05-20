#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
	int dd, mm, yy;
public:
	Date() { dd = mm = yy = 0; }
	friend istream& operator>>(istream& is, Date& temp);
	friend ostream& operator<<(ostream& os, const Date temp);
	Date operator+(const Date temp);
	Date operator-(const Date temp);
	void operator++();
	void operator--();
	friend int GetMaxDayOfMonth(const Date temp);
	friend bool isNamNhuan(const Date temp);
};