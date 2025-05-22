#pragma once
#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;
class BatDongSan
{
protected:
	string MaGD, NgayGD;
	int DonGia;
	double DienTich;
public:
	BatDongSan() {
		MaGD = NgayGD = "";
		DienTich = DonGia = 0;
	}
	virtual void nhap();
	virtual void xuat();
	string GetNgayGD() { return NgayGD; }
	virtual long long TinhThanhTien() = 0;
};

