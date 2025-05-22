#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class NhanVien
{
protected:
	string HoTen, NgaySinh;
public:
	NhanVien() { HoTen = NgaySinh = " "; }
	virtual void nhap();
	virtual void xuat();
	virtual int getLuong() = 0;
};

