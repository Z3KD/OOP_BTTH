#include "SachThamKhao.h"
void SachThamKhao::Nhap() {
	Sach::Nhap();
	do {
		cout << "Nhap thue sach: "; cin >> Thue;
	} while (Thue < 0);
	cin.ignore();
}

void SachThamKhao::Xuat() {
	Sach::Xuat(); cout << Thue << endl;
}

int SachThamKhao::TinhThanhTien() {
	return DonGia * SoLuong + Thue;
}