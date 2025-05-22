#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class SinhVien
{
protected:
	string MSSV, HoTen, DiaChiNha;
	int TongTC;
	double DiemTB;
public:
	SinhVien() {
		MSSV = HoTen = DiaChiNha = "";
		DiemTB = TongTC = 0;
	}
	virtual void nhap();
	virtual void xuat();
	int GetTongTC() { return this->TongTC; }
	double GetDTB() { return this->DiemTB; }
	virtual bool XetTN() = 0;
};