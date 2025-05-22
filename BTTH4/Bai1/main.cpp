#include"XeNgoaiThanh.h"
#include"XeNoiThanh.h"


void NhapDSXeIn(XeIn InList[], int& InNum) {
	do {
		cout << "Nhap so luong xe noi thanh(1-3): "; cin >> InNum;
	} while (InNum < 1);
	for (int i = 0; i < InNum; i++) {
		InList[i].Nhap();
	}
}
void NhapDSXeEx(XeEx ExList[], int& ExNum) {
	do {
		cout << "Nhap so luong xe ngoai thanh(1-3): "; cin >> ExNum;
	} while (ExNum < 1);
	for (int i = 0; i < ExNum; i++) {
		ExList[i].Nhap();
	}
}
void XuatDSXeIn(XeIn InList[], int InNum) {
	cout << "---------Xe Noi Thanh---------" << endl;
	cout << "Ma So Chuyen	Ten Tai Xe	Bien So Xe	Doanh Thu	So Tuyen	Tong Chieu Dai Quang Duong" << endl;
	for (int i = 0; i < InNum; i++) {
		InList[i].Xuat();
	}
}
void XuatDSXeEx(XeEx ExList[], int ExNum) {
	cout << "---------Xe Ngoai Thanh---------" << endl;
	cout << "Ma So Chuyen	Ten Tai Xe	Bien So Xe	Doanh Thu	Noi Den		So Ngay Di" << endl;
	for (int i = 0; i < ExNum; i++) {
		ExList[i].Xuat();
	}
}
long long TongDTXeIn(XeIn InList[], int InNum) {
	long long sum = 0;
	for (int i = 0; i < InNum; i++) {
		sum += InList[i].GetDT();
	}
	return sum;
}
long long TongDTXeEx(XeEx ExList[], int ExNum) {
	long long sum = 0;
	for (int i = 0; i < ExNum; i++) {
		sum += ExList[i].GetDT();
	}
	return sum;
}

int main() {
	XeIn InList[3]; int InNum;
	XeEx ExList[3]; int ExNum;
	NhapDSXeIn(InList, InNum);
	NhapDSXeEx(ExList, ExNum);
	XuatDSXeIn(InList, InNum);
	XuatDSXeEx(ExList, ExNum);
	cout << "Tong doanh thu xe noi thanh: " << TongDTXeIn(InList, InNum) << endl;
	cout << "Tong doanh thu xe ngoai thanh: " << TongDTXeEx(ExList, ExNum) << endl;
	return 0;
}