#include "SXList.h"
void SXList::nhap() {
	do {
		cout << "Nhap so luong nhan vien: "; cin >> n;
	} while (n < 1);
	List = new NhanVienSX[n];
	for (int i = 0; i < n; i++) {
		List[i].nhap();
	}
}
void SXList::xuat() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		List[i].xuat();
	}
}
void SXList::TimNhanVienLuongThapNhat() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int i_min = 0, salary_min = List[0].getLuong();
	for (int i = 0; i < n; i++) {
		if (salary_min > List[i].getLuong()) {
			salary_min = List[i].getLuong();
			i_min = i;
		}
	}
	List[i_min].xuat();
}
void SXList::TinhTongLuongNhanVien() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int salary_sum = 0;
	for (int i = 0; i < n; i++) {
		salary_sum += List[i].getLuong();
	}
	cout << "Tong luong cong ty phai tra cho nhan vien la: " << salary_sum << endl;
}
void SXList::TimNhanVienTuoiCaoNhat() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int i_max = -1, max_year = -1;
	for (int i = 0; i < n; i++) {
		if (max_year < List[i].getTuoi()) {
			i_max = i;
			max_year = List[i].getTuoi();
		}
	}
	cout << "Nhan vien lon tuoi nhat trong cong ty la:\n";
	List[i_max].xuat();
}
void swapNV(NhanVienSX& A, NhanVienSX& B) {
	NhanVienSX C;
	C.setNVSX(A);
	A.setNVSX(B);
	B.setNVSX(C);
}
void SXList::SapXepTangDanTheoLuong() {
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