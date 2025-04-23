#include "NhanVienVP.h"
void NhanVienVP::nhap() {
	cin.ignore();
	cout << "Nhap ma nhan vien: "; getline(cin, id);
	cout << "Nhap ho va ten nhan vien: "; getline(cin, name);
	do {
		cout << "Nhap nam sinh(1975-2007): "; cin >> nam_sinh;
	} while (nam_sinh < 1975 || nam_sinh>2007);
	do {
		cout << "Nhap luong cua nhan vien: "; cin >> salary;
	} while (salary < 1);
}
void NhanVienVP::xuat() {
	cout << setw(15) << left << id << setw(15) << left << name << setw(15) << left << nam_sinh << setw(15) << left << salary << endl;
}
void NhanVienVP::setNVVP(NhanVienVP B) {
	this->id = B.id;
	this->name = B.name;
	this->nam_sinh = B.nam_sinh;
	this->salary = B.salary;
}