#include "NhanVienSX.h"
void NhanVienSX::nhap() {
	cin.ignore();
	cout << "Nhap ma nhan vien: "; getline(cin, id);
	cout << "Nhap ho ten nhan vien: "; getline(cin, name);
	do {
		cout << "Nhap nam sinh cua nhan vien(1975-2007): "; cin >> nam_sinh;
	} while (nam_sinh < 1975 || nam_sinh>2007);
	do {
		cout << "Nhap so luong san pham gia cong: "; cin >> SoSanPham;
	} while (SoSanPham < 1);
	do {
		cout << "Nhap don gia san pham gia cong: "; cin >> DonGia;
	} while (DonGia < 1);
}
void NhanVienSX::xuat() {
	cout << setw(15) << left << id << setw(15) << left << name << setw(15) << left << nam_sinh << setw(15) << left << SoSanPham << setw(15) << left << DonGia <<setw(15) << left << getLuong() << endl;
}
void NhanVienSX::setNVSX(NhanVienSX B) {
	this->id = B.id;
	this->name = B.name;
	this->nam_sinh = B.nam_sinh;
	this->SoSanPham = B.SoSanPham;
	this->DonGia = B.DonGia;
}