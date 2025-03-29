#pragma once
#include<iostream>
using namespace std;

class Date 
{
private:
	int dd, mm, yy;
public:
	Date() { dd = mm = yy = -1; }
	Date(int dd = 1,int mm = 1,int yy = 0) {
		this->dd = dd;
		this->mm = mm;
		this->yy = yy;
	}
	void nhapDate();
	void xuatDate();
	void findNextDate();
	bool checkNamNhuan();
	int getMaxDayOfMonth();
	~Date() { dd = mm = yy = -1; }
};
