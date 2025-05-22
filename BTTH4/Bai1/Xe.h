#pragma once
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class Xe
{
protected:
	string MaSoChuyen, TenTaiXe, BienSoXe;
	int DoanhThu;
public:
	Xe() {
		MaSoChuyen = TenTaiXe = BienSoXe = " ";
		DoanhThu = 0;
	}
	virtual void Nhap();
	virtual void Xuat();
	int GetDT() { return this->DoanhThu; }
};