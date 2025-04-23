#pragma once
#include<iostream>
#include<string>
using namespace std;
class ThiSinh
{
protected:
	string ten, masv, ngaysinh;
	float toan, van, anh;
public:
	ThiSinh();
	void nhap();
	float getTong() { return toan + van + anh; }
	void xuat();
	void setTS(ThiSinh B);
};