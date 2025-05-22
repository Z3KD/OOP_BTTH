#pragma once
#include "BatDongSan.h"
class Dat : public BatDongSan
{
private:
	string LoaiDat;
public:
	Dat() { LoaiDat = ""; }
	void nhap();
	void xuat();
	long long TinhThanhTien();
};