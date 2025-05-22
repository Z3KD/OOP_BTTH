#pragma once
#include<string>
#include<iomanip>
#include<iostream>
using namespace std;

class GiaoDich
{
protected:
	string MaGD, NgayGD;
	int DonGia, SoLuong;
public:
	GiaoDich() {
		MaGD = NgayGD = "";
		DonGia = SoLuong = 0;
	}
	virtual void nhap();
	virtual void xuat();
	virtual long long TinhThanhTien() = 0;
};