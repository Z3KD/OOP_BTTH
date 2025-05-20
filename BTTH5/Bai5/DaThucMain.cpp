#include"DaThuc.h"

int main() {
	DaThuc A, B;
	int x;
	A.nhap();
	B.nhap();
	cout << "A = "; A.xuat();
	cout << "B = "; B.xuat();
	cout << "A + B = "; (A + B).xuat();
	cout << "A - B = "; (A - B).xuat();
	cout << "Nhap gia tri x: "; cin >> x;
	cout << "A(" << x << ") = " << A.TinhGiaTri(x) << endl;
	cout << "B(" << x << ") = " << B.TinhGiaTri(x) << endl;
	return 0;
}