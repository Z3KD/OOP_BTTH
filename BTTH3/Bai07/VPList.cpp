#include "VPList.h"
void VPList::nhap() {
	do {
		cout << "Nhap so luong nhan vien: "; cin >> n;
	} while (n < 1);
	List = new NhanVienVP[n];
	for (int i = 0; i < n; i++) {
		List[i].nhap();
	}
}
void VPList::xuat() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		List[i].xuat();
	}
}
void VPList::TimNhanVienLuongCaoNhat() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int i_max = -1;
	long double luong_max = -1;
	for (int i = 0; i < n; i++) {
		if (List[i].getLuong() > luong_max) {
			i_max = i;
			luong_max = List[i].getLuong();
		}
	}
	List[i_max].xuat();
}
void VPList::TinhTongLuongNhanVien() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	long long luong_sum = 0;
	for (int i = 0; i < n; i++) {
		luong_sum += List[i].getLuong();
	}
	cout << "Tong luong cong ty phai tra cho nhan vien la: " << luong_sum << endl;
}
void VPList::TimNhanVienTuoiCaoNhat() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int i_max = -1, nam_max = -1;
	for (int i = 0; i < n; i++) {
		if (List[i].getTuoi() > nam_max) {
			i_max = i;
			nam_max = List[i].getTuoi();
		}
	}
	cout << "Nhan vien lon tuoi nhat cong ty la: "; List[i_max].xuat();
}
void swapNV(NhanVienVP& A, NhanVienVP& B) {
	NhanVienVP C;
	C.setNVVP(A);
	A.setNVVP(B);
	B.setNVVP(C);
}
void VPList::SapXepTangDanTheoLuong() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		int i_min = i;
		int luong_min = List[i].getLuong();
		for (int j = i + 1; j < n; j++) {
			if (luong_min > List[j].getLuong()) {
				i_min = j;
				luong_min = List[j].getLuong();
			}
		}
		swapNV(List[i], List[i_min]);
	}
	xuat();
}