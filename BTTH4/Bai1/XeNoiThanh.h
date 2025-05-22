#pragma once
#include "Xe.h"
typedef class XeNoiThanh : public Xe
{
private:
	int SoTuyen, SoKM;
public:
	XeNoiThanh() {
		SoTuyen = SoKM = 0;
	}
	void Nhap();
	void Xuat();
}XeIn;