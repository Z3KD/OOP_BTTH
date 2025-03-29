#pragma once
#include<iostream>
using namespace std;
class PhanSo
{
private:
	int tu, mau;
public:
	PhanSo() { tu = mau = 1; }
	PhanSo(int tu = 1, int mau = 1) {
		this->tu = tu;
		this->mau = mau;
	}
	void nhap();
	void xuat();
	void rutgon();
	void soSanh(PhanSo);
	PhanSo operator+(PhanSo);
	PhanSo operator-(PhanSo);
	PhanSo operator*(PhanSo);
	PhanSo operator/(PhanSo);
	~PhanSo() { tu = mau = 0; }
};