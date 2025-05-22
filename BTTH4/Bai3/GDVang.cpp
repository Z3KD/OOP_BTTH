#include "GDVang.h"
void GDVang::nhap() {
	GiaoDich::nhap();
	cout << "Nhap loai vang: "; getline(cin, LoaiVang);
}

void GDVang::xuat() {
	GiaoDich::xuat(); cout << LoaiVang << endl;
}

long long GDVang::TinhThanhTien() {
	return SoLuong * DonGia;
}