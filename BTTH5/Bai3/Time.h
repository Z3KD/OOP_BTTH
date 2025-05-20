#pragma once
#include<iostream>
using namespace std;
class Time
{
private:
	int sec, min, hour;
public:
	Time() { sec = min = hour = 0; }
	friend istream& operator>>(istream& is, Time& temp);
	friend ostream& operator<<(ostream& os, const Time temp);
	Time operator +(const Time temp);
	Time operator -(const Time temp);
	void operator ++();
	void operator --();
};