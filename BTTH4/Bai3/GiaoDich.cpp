#include "GiaoDich.h"
void GiaoDich::nhap() {
	cout << "Nhap ma giao dich: "; getline(cin, MaGD);
	cout << "Nhap ngay giao dich: "; getline(cin, NgayGD);
	do {
		cout << "Nhap don gia: "; cin >> DonGia;
	} while (DonGia < 1);
	do {
		cout << "Nhap so luong: "; cin >> SoLuong;
	} while (SoLuong < 1);
	cin.ignore();
}

void GiaoDich::xuat() {
	cout << MaGD << "\t" << NgayGD << "\t" << DonGia << "\t" << SoLuong << "\t";
}
