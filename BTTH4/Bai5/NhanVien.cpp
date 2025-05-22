#include "NhanVien.h"
void NhanVien::nhap() {
	cout << "Nhap ho va ten nhan vien: "; getline(cin, HoTen);
	cout << "Nhap ngay thang nam sinh: "; getline(cin, NgaySinh);
}

void NhanVien::xuat() {
	cout << HoTen << "\t" << NgaySinh << "\t";
}