#include "ChungCu.h"
void ChungCu::nhap() {
	BatDongSan::nhap();
	do {
		cout << "Nhap vi tri tang: "; cin >> SoTang;
	} while (SoTang < 1 || SoTang>100);
	cin.ignore();
	cout << "Nhap so phong: "; getline(cin, SoPhong);
}

void ChungCu::xuat() {
	BatDongSan::xuat(); cout << SoTang << "\t" << SoPhong << endl;
}

long long ChungCu::TinhThanhTien() {
	if (SoTang == 1) return round(DonGia * DienTich * 2);
	else if (SoTang >= 15) return round(DonGia * DienTich * 1.2);
	return round(DonGia * DienTich);
}