#include "PhanSo.h"

int gcd(int a, int b) {
	int r = a % b;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void PhanSo::rutgon() {
	int ucln = gcd(tu, mau);
	tu /= ucln;
	mau /= ucln;
	if (mau < 0) {
		tu *= -1;
		mau *= -1;
	}
}

void PhanSo::nhap() {
	do {
		cout << "Nhap tu cua phan so: "; cin >> tu;
		cout << "Nhap mau cua phan so: "; cin >> mau;
		if (mau == 0) cout << "Vui long nhap phan so hop le!" << endl;
	} while (mau == 0);
}

void PhanSo::xuat() {
	if (mau == 1) cout << tu << endl;
	else if (tu == 0) cout << 0 << endl;
	else cout << tu << "/" << mau << endl;
}

void PhanSo::soSanh(PhanSo temp) {
	double a = (double)this->tu / this->mau;
	double b = (double)temp.tu / temp.mau;
	if (a == b) cout << "Hai phan so bang nhau" << endl;
	else {
		if (a > b) {
			cout << "Phan so lon hon la: "; this->xuat();
		}
		else {
			cout << "Phan so lon hon la: "; temp.xuat();
		}
	}
}
PhanSo PhanSo::operator+(PhanSo A) {
	PhanSo temp(0,0);
	temp.tu = A.tu * this->mau + A.mau * this->tu;
	temp.mau = A.mau * this->mau;
	temp.rutgon();
	return temp;
}
PhanSo PhanSo::operator-(PhanSo A) {
	PhanSo temp(0,0);
	temp.tu = A.mau * this->tu - A.tu * this->mau;
	temp.mau = A.mau * this->mau;
	temp.rutgon();
	return temp;
}
PhanSo PhanSo::operator*(PhanSo A) {
	PhanSo temp(0,0);
	temp.tu = A.tu * this->tu;
	temp.mau = A.mau * this->mau;
	temp.rutgon();
	return temp;
}
PhanSo PhanSo::operator/(PhanSo A) {
	PhanSo temp(0,0);
	temp.tu = A.tu * this->mau;
	temp.mau = A.mau * this->tu;
	temp.rutgon();
	return temp;
}