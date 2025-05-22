#include "XeNoiThanh.h"
void XeIn::Nhap() {
	Xe::Nhap();
	cin.ignore();
	do {
		cout << "Nhap so tuyen: "; cin >> SoTuyen;
	} while (SoTuyen < 1);
	do {
		cout << "Nhap tong chieu dai quang duong(km): "; cin >> SoKM;
	} while (SoKM < 0);
}

void XeIn::Xuat() {
	Xe::Xuat();
	cout << SoTuyen << "\t" << SoKM << endl;
}