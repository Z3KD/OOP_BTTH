#include "GDTienTe.h"
void GDTienTe::nhap() {
	GiaoDich::nhap();
	do {
		cout << "Nhap loai tien te(VND/EURO/USD): "; getline(cin, LoaiTien);
	} while (LoaiTien != "USD" && LoaiTien != "VND" && LoaiTien != "EURO");
	if (LoaiTien != "VND") {
		do {
			cout << "Nhap ti gia: "; cin >> TiGia;
		} while (TiGia < 1);
	}
	cin.ignore();
}

void GDTienTe::xuat() {
	GiaoDich::xuat(); cout << LoaiTien << "\t" << TiGia << endl;
}

long long GDTienTe::TinhThanhTien() {
	if (LoaiTien == "VND") return SoLuong * DonGia;
	return SoLuong * DonGia * TiGia;
}