#include"SVCaoDang.h"
#include"SVDaiHoc.h"

void nhapDSSVCaoDang(SVCaoDang CDlist[], int& CDNum) {
	do {
		cout << "Nhap so luong sinh vien cao dang: "; cin >> CDNum;
	} while (CDNum < 1);
	cin.ignore();
	for (int i = 0; i < CDNum; i++) {
		CDlist[i].nhap();
		cin.ignore();
	}
}
void nhapDSSVDaiHoc(SVDaiHoc DHlist[], int& DHNum) {
	do {
		cout << "Nhap so luong sinh vien dai hoc: "; cin >> DHNum;
	} while (DHNum < 1);
	cin.ignore();
	for (int i = 0; i < DHNum; i++) {
		DHlist[i].nhap();
		cin.ignore();
	}
}
void xuatDSSVCaoDang(SVCaoDang CDlist[], int CDNum) {
	cout << "----------Sinh vien cao dang----------" << endl;
	cout << "Ma so sinh vien\tHo ten\tDia chi nha\tTong so tin chi\tDiem trung binh\tDiem tot nghiep" << endl;
	for (int i = 0; i < CDNum; i++) {
		CDlist[i].xuat();
	}
}
void xuatDSSVDaiHoc(SVDaiHoc DHlist[], int DHNum) {
	cout << "----------Sinh vien dai hoc----------" << endl;
	cout << "Ma so sinh vien\tHo ten\tDia chi nha\tTong so tin chi\tDiem trung binh\tTen luan van\tDiem luan van" << endl;
	for (int i = 0; i < DHNum; i++) {
		DHlist[i].xuat();
	}
}
void timSVDaiHocCoDiemTBCaoNhat(SVDaiHoc DHlist[], int DHNum) {
	int max_index = 0;
	double max_DTB = 0;
	for (int i = 0; i < DHNum; i++) {
		if (DHlist[i].GetDTB() > max_DTB) {
			max_DTB = DHlist[i].GetDTB();
			max_index = i;
		}
	}
	cout << "Sinh vien dai hoc co diem trung binh cao nhat la: "; DHlist[max_index].xuat();
}
void xuatDSSVDuDieuKienTotNghiep(SVCaoDang CDlist[], int CDNum, SVDaiHoc DHlist[], int DHNum) {
	cout << "----------Sinh vien du dieu kien tot nghiep----------" << endl;
	for (int i = 0; i < CDNum; i++) {
		if (CDlist[i].XetTN() == 1) CDlist[i].xuat();
	}
	for (int i = 0; i < DHNum; i++) {
		if (DHlist[i].XetTN() == 1) DHlist[i].xuat();
	}
}
void xuatDSSVKhongDuDieuKienTotNghiep(SVCaoDang CDlist[], int CDNum, SVDaiHoc DHlist[], int DHNum) {
	cout << "----------Sinh vien khong du dieu kien tot nghiep----------" << endl;
	for (int i = 0; i < CDNum; i++) {
		if (CDlist[i].XetTN() == 0) CDlist[i].xuat();
	}
	for (int i = 0; i < DHNum; i++) {
		if (DHlist[i].XetTN() == 0) DHlist[i].xuat();
	}
}

int main() {
	SVCaoDang CDlist[3]; int CDNum;
	SVDaiHoc DHlist[3]; int DHNum;
	nhapDSSVCaoDang(CDlist, CDNum);
	nhapDSSVDaiHoc(DHlist, DHNum);
	xuatDSSVCaoDang(CDlist, CDNum);
	xuatDSSVDaiHoc(DHlist, DHNum);
	cout << "--------------------" << endl;
	timSVDaiHocCoDiemTBCaoNhat(DHlist, DHNum);
	xuatDSSVDuDieuKienTotNghiep(CDlist, CDNum, DHlist, DHNum);
	xuatDSSVKhongDuDieuKienTotNghiep(CDlist, CDNum, DHlist, DHNum);
	return 0;
}