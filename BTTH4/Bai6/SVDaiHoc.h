#pragma once
#include "SinhVien.h"
class SVDaiHoc :public SinhVien
{
private:
	string TenLuanVan;
	double DiemLV;
public:
	SVDaiHoc() {
		TenLuanVan = "";
		DiemLV = 0;
	}
	void nhap();
	void xuat();
	bool XetTN();
};