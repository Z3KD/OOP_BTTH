#pragma once
#include<iostream>
#include<numeric>
using namespace std;
class PhanSo
{
private:
	int tu, mau;
public:
	PhanSo() {
		tu = mau = 0;
	}
	PhanSo(int x, int y) {
		tu = x;
		mau = y;
	}
	friend PhanSo operator+(PhanSo A, PhanSo B);
	void rutgon();
	void nhap();
	void xuat();
	double getSoThuc();
	int getTu() {
		return tu;
	}
};
bool isPrime(int);
