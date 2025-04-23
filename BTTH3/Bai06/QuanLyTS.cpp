#include "QuanLyTS.h"
void QuanLyTS::nhap() {
	do {
		cout << "Nhap so luong thi sinh: "; cin >> n;
	} while (n < 1);
	List = new ThiSinh[n];
	for (int i = 0; i < n; i++) {
		List[i].nhap();
	}
}
void QuanLyTS::xuatDS() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		List[i].xuat();
	}
}
void QuanLyTS::xuatDS_TS_co_tong_hon_15() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n"; 
		return;
	}
	for (int i = 0; i < n; i++) {
		if (List[i].getTong() > 15) List[i].xuat();
	}
}
void QuanLyTS::Tim_TS_co_tong_max() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int i_max = -1;
	float tong_max = -1;
	for (int i = 0; i < n; i++) {
		if (List[i].getTong() > tong_max) {
			tong_max = List[i].getTong();
			i_max = i;
		}
	}
	if (i_max == -1) cout << "Danh sach chua co san!\n";
	else {
		List[i_max].xuat();
	}
}
void swapTS(ThiSinh& A,ThiSinh& B) {
	ThiSinh C;
	C.setTS(A);
	A.setTS(B);
	B.setTS(C);
}
void QuanLyTS::SapXepGiamDan() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		float tong_max = List[i].getTong();
		int i_max = i;
		for (int j = i + 1; j < n; j++) {
			if (tong_max < List[j].getTong()) {
				i_max = j;
				tong_max = List[j].getTong();
			}
		}
		swapTS(List[i], List[i_max]);
	}
	xuatDS();
}