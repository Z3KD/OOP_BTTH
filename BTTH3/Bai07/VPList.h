#pragma once
#include "NhanVienVP.h"
class VPList : protected NhanVienVP
{
private:
	int n;
	NhanVienVP* List;
public:
	VPList() { n = 0; }
	void nhap();
	void xuat();
	void TimNhanVienLuongCaoNhat();
	void TinhTongLuongNhanVien();
	void TimNhanVienTuoiCaoNhat();
	void SapXepTangDanTheoLuong();
	~VPList() { delete[] List; }
};