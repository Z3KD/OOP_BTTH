#include "NhanVienSX.h"
void NhanVienSX::nhap() {
	NhanVien::nhap();
	do {
		cout << "Nhap luong can ban: "; cin >> LuongCanBan;
	} while (LuongCanBan < 1);
	do {
		cout << "Nhap so san pham: "; cin >> SoSanPham;
	} while (SoSanPham < 0);
}
int NhanVienSX::getLuong() {
	return LuongCanBan + SoSanPham * 5000;
}
void NhanVienSX::xuat() {
	NhanVien::xuat(); cout << LuongCanBan << "\t" << SoSanPham << "\t" << this->getLuong() << endl;
}