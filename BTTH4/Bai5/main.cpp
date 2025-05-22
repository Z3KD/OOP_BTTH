#include"NhanVienSX.h"
#include"NhanVienVP.h"

void nhapDSNhanVienSX(NhanVienSX SXlist[], int& SXNum) {
	do {
		cout << "Nhap so luong nhan vien san xuat(1-3): "; cin >> SXNum;
	} while (SXNum < 1);
	cin.ignore();
	for (int i = 0; i < SXNum; i++) {
		SXlist[i].nhap();
		cin.ignore();
	}
}
void nhapDSNhanVienVP(NhanVienVP VPlist[], int& VPNum) {
	do {
		cout << "Nhap so luong nhan vien van phong(1-3): "; cin >> VPNum;
	} while (VPNum < 1);
	cin.ignore();
	for (int i = 0; i < VPNum; i++) {
		VPlist[i].nhap();
		cin.ignore();
	}
}
void xuatDSNhanVienSX(NhanVienSX SXlist[], int SXNum) {
	cout << "----------Nhan Vien San Xuat----------" << endl;
	cout << "Ho ten\tNgay sinh\tLuong can ban\tSo san pham\tLuong toan phan" << endl;
	for (int i = 0; i < SXNum; i++) {
		SXlist[i].xuat();
	}
}
void xuatDSNhanVienVP(NhanVienVP VPlist[], int VPNum) {
	cout << "----------Nhan Vien Van Phong----------" << endl;
	cout << "Ho ten\tNgay sinh\tSo ngay lam\tLuong thang" << endl;
	for (int i = 0; i < VPNum; i++) {
		VPlist[i].xuat();
	}
}
long long TinhTongLuongCuaNhanVien(NhanVienSX SXlist[], int SXNum, NhanVienVP VPlist[], int VPNum) {
	long long sum = 0;
	for (int i = 0; i < SXNum; i++) {
		sum += SXlist[i].getLuong();
	}
	for (int i = 0; i < VPNum; i++) {
		sum += VPlist[i].getLuong();
	}
	return sum;
}

int main() {
	NhanVienSX SXlist[3]; int SXNum;
	NhanVienVP VPlist[3]; int VPNum;
	nhapDSNhanVienSX(SXlist, SXNum);
	nhapDSNhanVienVP(VPlist, VPNum);
	xuatDSNhanVienSX(SXlist, SXNum);
	xuatDSNhanVienVP(VPlist, VPNum);
	cout << "--------------------" << endl;
	cout << "So tien cong ty phai tra luong cho nhan vien: " << TinhTongLuongCuaNhanVien(SXlist, SXNum, VPlist, VPNum) << endl;
	return 0;
}