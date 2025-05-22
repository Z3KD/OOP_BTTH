#include "Dat.h"
void Dat::nhap() {
	BatDongSan::nhap();
	do {
		cout << "Nhap loai dat(A/B/C): "; getline(cin, LoaiDat);
	} while (LoaiDat != "A" && LoaiDat != "B" && LoaiDat != "C");
}

void Dat::xuat() {
	BatDongSan::xuat(); cout << LoaiDat << endl;
}

long long Dat::TinhThanhTien() {
	if (LoaiDat == "A") return round(DonGia * DienTich * 1.5);
	return round(DonGia * DienTich);
}