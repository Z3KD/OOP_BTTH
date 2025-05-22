#pragma once
#include "BatDongSan.h"
class ChungCu : public BatDongSan
{
private:
	int SoTang;
	string SoPhong;
public:
	ChungCu() {
		SoTang = 0;
		SoPhong = "";
	}
	void nhap();
	void xuat();
	long long TinhThanhTien();
};