#include"SachGiaoKhoa.h"
#include"SachThamKhao.h"

void NhapDSSGK(SGK List[], int& Num) {
	do {
		cout << "Nhap so loai sach giao khoa(1-3):"; cin >> Num;
		cin.ignore();
	} while (Num < 1);
	for (int i = 0; i < Num; i++) {
		List[i].Nhap();
	}
}
void NhapDSSTK(STK List[], int& Num) {
	do {
		cout << "Nhap so loai sach tham khao(1-3):"; cin >> Num;
		cin.ignore();
	} while (Num < 1);
	for (int i = 0; i < Num; i++) {
		List[i].Nhap();
	}
}
void XuatDSSGK(SGK List[], int Num) {
	cout << "---------Sach Giao Khoa---------" << endl;
	cout << "Ma sach\tNgay nhap\tNha xuat Ban\tDon gia\tSo luong\tTinh trang" << endl;
	for (int i = 0; i < Num; i++) {
		List[i].Xuat();
	}
}
void XuatDSSTK(STK List[], int Num) {
	cout << "---------Sach Tham Khao---------" << endl;
	cout << "Ma sach\tNgay nhap\tNha xuat Ban\tDon gia\tSo luong\tThue" << endl;
	for (int i = 0; i < Num; i++) {
		List[i].Xuat();
	}
}
long long TongGiaTriSGK(SGK List[], int Num) {
	long long sum = 0;
	for (int i = 0; i < Num; i++) {
		sum += List[i].TinhThanhTien();
	}
	return sum;
}
long long TongGiaTriSTK(STK List[], int Num) {
	long long sum = 0;
	for (int i = 0; i < Num; i++) {
		sum += List[i].TinhThanhTien();
	}
	return sum;
}
void TimSGKCuaNXB(SGK List[], int Num) {
	string name;
	cin.ignore();
	cout << "Nhap ten nha xuat ban can tim: "; getline(cin, name);
	int index_found = -1;
	for (int i = 0; i < Num; i++) {
		if (List[i].getNXB() == name) index_found = i;
	}
	if (index_found != -1) {
		cout << "Tim thay!" << endl;
		List[index_found].Xuat();
	}
	else {
		cout << "Khong tim thay!" << endl;
	}
}


int main() {
	SGK sgkList[3]; int sgkNum;
	STK stkList[3]; int stkNum;
	NhapDSSGK(sgkList, sgkNum);
	NhapDSSTK(stkList, stkNum);
	XuatDSSGK(sgkList, sgkNum);
	XuatDSSTK(stkList, stkNum);
	cout << "--------------------" << endl;
	cout << "Tong gia tri sach giao khoa: " << TongGiaTriSGK(sgkList, sgkNum) << endl;
	cout << "Trung binh cong sach giao khoa: " << TongGiaTriSGK(sgkList,sgkNum) / sgkNum << endl;
	cout << "Tong gia tri sach tham khoa: " << TongGiaTriSTK(stkList, stkNum) << endl;
	TimSGKCuaNXB(sgkList, sgkNum);
	return 0;
}