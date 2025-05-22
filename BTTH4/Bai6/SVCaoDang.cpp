#include "SVCaoDang.h"
void SVCaoDang::nhap() {
	SinhVien::nhap();
	do {
		cout << "Nhap diem thi tot nghiep: "; cin >> DiemTN;
	} while (DiemTN < 0);
}

void SVCaoDang::xuat() {
	SinhVien::xuat(); cout << DiemTN << endl;
}

bool SVCaoDang::XetTN() {
	if (TongTC >= 110 && DiemTB >= 5 && DiemTN >= 5) return 1;
	return 0;
}