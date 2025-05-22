#include "Nha.h"
void Nha::nhap() {
	BatDongSan::nhap();
	do {
		cout << "Nhap loai nha(thuong/cao cap): "; getline(cin, LoaiNha);
	} while (LoaiNha != "thuong" && LoaiNha != "cao cap");
	cout << "Nhap dia chi nha: "; getline(cin, DiaChiNha);
}

void Nha::xuat() {
	BatDongSan::xuat(); cout << LoaiNha << "\t" << DiaChiNha << endl;
}
long long Nha::TinhThanhTien() {
	if (LoaiNha == "thuong") return round(DonGia * DienTich * 0.9);
	return round(DonGia * DienTich);
}