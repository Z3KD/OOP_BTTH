#pragma once
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


class Sach
{
protected:
	string MaSach, NgayNhap, NhaXuatBan;
	int DonGia, SoLuong;
public:
	Sach() {
		MaSach = NgayNhap = NhaXuatBan = " ";
		DonGia = SoLuong = 0;
	}
	virtual void Nhap();
	virtual void Xuat();
	virtual int TinhThanhTien() = 0;
	string getNXB() { return this->NhaXuatBan; }
};