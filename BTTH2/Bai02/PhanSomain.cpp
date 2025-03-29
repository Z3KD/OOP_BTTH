#include"PhanSo.h"

int main() {
	PhanSo beta(0,0), gamma(0,0);
	cout << "Nhap phan so thu nhat: " << endl;	beta.nhap();
	beta.rutgon();
	cout << "Phan so da rut gon la: "; beta.xuat();
	cout << "Nhap phan so thu hai: " << endl;; gamma.nhap();
	gamma.rutgon();
	cout << "Phan so da rut gon la: "; gamma.xuat();
	beta.soSanh(gamma);
	cout << "Tong hai phan so la: "; (beta + gamma).xuat();
	cout << "Hieu hai phan so la: "; (beta - gamma).xuat();
	cout << "Tich hai phan so la: "; (beta * gamma).xuat();
	cout << "Thuong hai phan so la: "; (beta / gamma).xuat();
	return 0;
}