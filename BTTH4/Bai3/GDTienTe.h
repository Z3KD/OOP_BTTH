#pragma once
#include "GiaoDich.h"
typedef class GDTienTe : public GiaoDich
{
private:
	string LoaiTien;
	int TiGia;
public:
	GDTienTe() {
		LoaiTien = "";
		TiGia = 0;
	}
	void nhap() ;
	void xuat() ;
	long long TinhThanhTien() ;
	string GetLoaiTien() { return this->LoaiTien; }
}TienTe;