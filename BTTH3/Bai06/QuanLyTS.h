#pragma once
#include "ThiSinh.h"
class QuanLyTS : protected ThiSinh
{
private:
	int n;
	ThiSinh* List;
public:
	QuanLyTS() { n = 0; }
	void nhap();
	void xuatDS();
	void xuatDS_TS_co_tong_hon_15();
	void Tim_TS_co_tong_max();
	void SapXepGiamDan();
	~QuanLyTS() { delete[] List; }
};