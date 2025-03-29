#include"SoPhuc.h"

int main() {
	SoPhuc A(0,0), B(0,0);
	cout << "Nhap so phuc A: \n";
	A.nhap();
	cout << "Nhap so phuc B: \n";
	B.nhap();
	cout << "So phuc A da nhap: "; A.xuat();
	cout << "So phuc B da nhap: "; B.xuat();
	cout << "Tong hai so phuc la: "; (A + B).xuat();
	cout << "Hieu hai so phuc la: "; (A - B).xuat();
	cout << "Tich hai so phuc la: "; (A * B).xuat();
	cout << "Thuong hai so phuc la: "; (A / B).xuat();
}