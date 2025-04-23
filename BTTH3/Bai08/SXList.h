#pragma once
#include "NhanVienSX.h"
class SXList : protected NhanVienSX
{
private:
	int n;
	NhanVienSX* List;
public:
	SXList() { n = 0; }
	void nhap();
	void xuat();
	void TimNhanVienLuongThapNhat();
	void TinhTongLuongNhanVien();
	void TimNhanVienTuoiCaoNhat();
	void SapXepTangDanTheoLuong();
	~SXList() { delete[] List; }
};