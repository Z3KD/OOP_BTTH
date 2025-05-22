#include "Xe.h"
void Xe::Nhap() {
	cin.ignore();
	cout << "Nhap ma so chuyen: "; getline(cin, MaSoChuyen);
	cout << "Nhap ten tai xe: "; getline(cin, TenTaiXe);
	cout << "Nhap bien so xe: "; getline(cin, BienSoXe);
	do {
		cout << "Nhap doanh thu: "; cin >> DoanhThu;
	} while (DoanhThu < 0);
}

void Xe::Xuat() {
	cout << MaSoChuyen << "\t" << TenTaiXe << "\t" << BienSoXe << "\t" << DoanhThu << "\t";
}