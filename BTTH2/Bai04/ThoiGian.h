#pragma once
#include<iostream>
using namespace std;

class ThoiGian
{
private:
	int hour, min, sec;
public:
	ThoiGian() { sec = min = hour = -1; }
	ThoiGian(int hour = 1, int min = 1, int sec = 1) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
	void nhap();
	void xuat();
	void CongThemMotGiay();
	~ThoiGian() { sec = min = hour = -1; }
};

