#pragma once
#include<iostream>
using namespace std;

class SoPhuc
{
private:
	double pThuc, pAo;
public:
	SoPhuc() { pThuc = pAo = 0; }
	SoPhuc(double pThuc = 0, double pAo = 0) {
		this->pThuc = pThuc;
		this->pAo = pAo;
	}
	void nhap();
	void xuat();
	SoPhuc operator+(SoPhuc);
	SoPhuc operator-(SoPhuc);
	SoPhuc operator*(SoPhuc);
	SoPhuc operator/(SoPhuc);
	~SoPhuc() { pThuc = pAo = 0; }
};

