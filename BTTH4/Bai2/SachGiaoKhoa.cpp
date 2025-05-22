#include "SachGiaoKhoa.h"
void SachGiaoKhoa::Nhap() {
	Sach::Nhap();
	cout << "Nhap tinh trang sach(moi/cu): "; getline(cin, TinhTrang);
}

void SachGiaoKhoa::Xuat() {
	Sach::Xuat(); cout << TinhTrang << endl;
}

int SachGiaoKhoa::TinhThanhTien() {
	if (TinhTrang == "MOI" || TinhTrang == "Moi" || TinhTrang == "moi") {
		return DonGia * SoLuong;
	}
	else return (DonGia * SoLuong) / 2;
}