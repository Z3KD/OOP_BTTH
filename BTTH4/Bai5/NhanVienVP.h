#pragma once
#include "NhanVien.h"
class NhanVienVP : public NhanVien
{
private:
	int SoNgayLam;
public:
	NhanVienVP() { SoNgayLam = 0; }
	void nhap();
	void xuat();
	int getLuong();
};
