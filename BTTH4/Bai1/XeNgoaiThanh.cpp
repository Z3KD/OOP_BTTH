#include "XeNgoaiThanh.h"
void XeEx::Nhap() {
	Xe::Nhap();
	cin.ignore();
	cout << "Nhap noi den: "; getline(cin, NoiDen);
	do {
		cout << "Nhap so ngay di: "; cin >> SoNgayDi;
	} while (SoNgayDi < 0);
}

void XeEx::Xuat() {
	Xe::Xuat(); cout << NoiDen << "\t" << SoNgayDi << endl;
}