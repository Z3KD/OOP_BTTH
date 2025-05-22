#pragma once
#include"NhanVien.h"
class NhanVienSX : public NhanVien
{
private:
	int LuongCanBan, SoSanPham;
public:
	NhanVienSX() { LuongCanBan = SoSanPham = 0; }
	void nhap();
	void xuat();
	int getLuong();
};