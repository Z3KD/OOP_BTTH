#include "NhanVienVP.h"
void NhanVienVP::nhap() {
	NhanVien::nhap();
	do {
		cout << "Nhap so ngay lam trong thang: "; cin >> SoNgayLam;
	} while (SoNgayLam < 1);
}
int NhanVienVP::getLuong() {
	return SoNgayLam * 100000;
}
void NhanVienVP::xuat() {
	NhanVien::xuat(); cout << SoNgayLam << "\t" << this->getLuong() << endl;
}