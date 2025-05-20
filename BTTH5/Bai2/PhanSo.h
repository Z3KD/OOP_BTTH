#pragma once
#include<iostream>
#include<numeric>
#include<algorithm>
#include<cmath>
using namespace std;
class PhanSo
{
private:
	int tu, mau;
public:
	PhanSo() { tu = mau = 0; }
	friend istream& operator>>(istream& is, PhanSo& temp);
	friend ostream& operator<<(ostream& os, const PhanSo temp);
	PhanSo operator+(const PhanSo temp);
	PhanSo operator-(const PhanSo temp);
	PhanSo operator*(const PhanSo temp);
	PhanSo operator/(const PhanSo temp);
	bool operator==(PhanSo temp);
	bool operator!=(PhanSo temp);
	bool operator>(PhanSo temp);
	bool operator<(PhanSo temp);
	void RutGon();
	double getSoThuc();
};