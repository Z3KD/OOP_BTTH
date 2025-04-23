#pragma once
#include "PhanSo.h"
class PSList : protected PhanSo
{
private:
	int n;
	PhanSo* List;
public:
	PSList() {
		n = 0;
	}
	void nhap();
	void xuat();
	void tinhTongDS();
	void timPSMax();
	void timPSMin();
	void SapXepDS(int l, int r, char temp);
	void SapXepDS(char s);
	void tim_ps_co_tu_so_nguyen_to_lon_nhat();
	~PSList() {
		delete[] List;
	}
};