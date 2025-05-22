#include "SVDaiHoc.h"
void SVDaiHoc::nhap() {
	SinhVien::nhap();
	cout << "Nhap ten luan van: "; getline(cin, TenLuanVan);
	do {
		cout << "Nhap diem luan van: "; cin >> DiemLV;
	} while (DiemLV < 0);
}
void SVDaiHoc::xuat() {
	SinhVien::xuat(); cout << TenLuanVan << "\t" << DiemLV << endl;
}
bool SVDaiHoc::XetTN() {
	if (TongTC >= 145 && DiemTB >= 5 && DiemLV >= 5) return 1;
	return 0;
}