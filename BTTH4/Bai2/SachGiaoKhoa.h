#pragma once
#include"Sach.h"
typedef class SachGiaoKhoa : public Sach
{
private:
	string TinhTrang;
public:
	SachGiaoKhoa() { TinhTrang = " "; }
	void Nhap() ;
	void Xuat() ;
	int TinhThanhTien() ;
}SGK;