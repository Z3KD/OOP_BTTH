#pragma once
#include"BatDongSan.h"
class Nha: public BatDongSan
{
private:
	string LoaiNha, DiaChiNha;
public:
	Nha() {
		LoaiNha = DiaChiNha = " ";
	}
	void nhap();
	void xuat();
	long long TinhThanhTien();
};