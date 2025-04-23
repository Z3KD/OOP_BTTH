#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class NhanVienVP
{
protected:
	string id, name;
	int nam_sinh, salary;
public:
	NhanVienVP() {
		id = name = "Khong xac dinh";
		nam_sinh = salary = -1;
	}
	void setNVVP(NhanVienVP B);
	void nhap();
	void xuat();
	int getTuoi() { return 2025 - nam_sinh; }
	int getLuong() { return salary; }
};

