#include "Sach.h"
void Sach::Nhap() {
	cout << "Nhap ma sach: "; getline(cin, MaSach);
	cout << "Nhap ngay nhap sach: "; getline(cin, NgayNhap);
	cout << "Nhap nha xuat ban: "; getline(cin, NhaXuatBan);
	do {
		cout << "Nhap don gia sach: "; cin >> DonGia;
	} while (DonGia < 1);
	do {
		cout << "Nhap so luong sach: "; cin >> SoLuong;
	} while (SoLuong < 0);
	cin.ignore();
}

void Sach::Xuat() {
	cout << MaSach << "\t" << NgayNhap << "\t" << NhaXuatBan << "\t" << DonGia << "\t" << SoLuong << "\t";
}