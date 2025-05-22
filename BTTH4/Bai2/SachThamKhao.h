#pragma once
#include"Sach.h"
typedef class SachThamKhao : public Sach
{
private:
	int Thue;
public:
	SachThamKhao() {
		Thue = 0;
	}
	void Nhap() ;
	void Xuat() ;
	int TinhThanhTien() ;
}STK;