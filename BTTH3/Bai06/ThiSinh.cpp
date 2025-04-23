#include "ThiSinh.h"
ThiSinh::ThiSinh() {
	ten = "khong xac dinh";
	masv = "khong xac dinh";
	ngaysinh = "khong xac dinh";
	toan = van = anh = -1;
}

void ThiSinh::nhap() {
	cin.ignore();
	cout << "Nhap ma thi sinh: "; getline(cin, masv);
	cout << "Nhap ten: "; getline(cin, ten);
	cout << "Nhap ngay sinh: "; getline(cin, ngaysinh);
	do {
		cout << "Nhap diem toan: "; cin >> toan;
	} while (toan < 0);
	do {
		cout << "Nhap diem van: "; cin >> van;
	} while (van < 0);
	do {
		cout << "Nhap diem anh: "; cin >> anh;
	} while (anh < 0);
}

void ThiSinh::xuat() {
	cout << masv << " " << ten << " " << ngaysinh << " " << toan << " " << van << " " << anh << " " << endl;
}
void ThiSinh::setTS(ThiSinh B) {
	this->masv = B.masv;
	this->ten = B.ten;
	this->ngaysinh = B.ngaysinh;
	this->toan = B.toan;
	this->van = B.van;
	this->anh = B.anh;
}
