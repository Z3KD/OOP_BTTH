#pragma once
#include "GiaoDich.h"
typedef class GDVang : public GiaoDich
{
private:
	string LoaiVang;
public:
	GDVang() { LoaiVang = " "; }
	void nhap() ;
	void xuat() ;
	long long TinhThanhTien() ;
}Vang;