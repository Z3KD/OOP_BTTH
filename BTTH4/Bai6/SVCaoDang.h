#pragma once
#include "SinhVien.h"
class SVCaoDang : public SinhVien
{
private:
	double DiemTN;
public:
	SVCaoDang() { DiemTN = 0; }
	void nhap();
	void xuat();
	bool XetTN();
};