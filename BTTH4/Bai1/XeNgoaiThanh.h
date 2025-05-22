#pragma once
#include "Xe.h"
typedef class XeNgoaiThanh : public Xe
{
private:
	string NoiDen;
	int SoNgayDi;
public:
	XeNgoaiThanh() {
		NoiDen = "";
		SoNgayDi = 0;
	}
	void Nhap() ;
	void Xuat() ;
}XeEx;