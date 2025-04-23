#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class NhanVienSX
{
protected:
	string id, name;
	int nam_sinh, SoSanPham, DonGia;
public:
	NhanVienSX() {
		id = name = "Khong xac dinh";
		nam_sinh = SoSanPham = DonGia = -1;
	}
	void nhap();
	void xuat();
	int getTuoi() { return 2025 - nam_sinh; }
	int getLuong() { return SoSanPham * DonGia; }
	void setNVSX(NhanVienSX B);
};