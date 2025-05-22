#include "BatDongSan.h"
void BatDongSan::nhap() {
	cout << "Nhap ma giao dich: "; getline(cin, MaGD);
	cout << "Nhap ngay giao dich theo dinh dang dd/mm/yyyy :"; getline(cin, NgayGD);
	do {
		cout << "Nhap don gia:"; cin >> DonGia;
	} while (DonGia < 1);
	do {
		cout << "Nhap dien tich: "; cin >> DienTich;
	} while (DienTich <= 0);
	cin.ignore();
}

void BatDongSan::xuat() {
	cout << MaGD << "\t" << NgayGD << "\t" << DonGia << "\t" << DienTich << "\t";
}