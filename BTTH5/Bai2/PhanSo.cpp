#include "PhanSo.h"
istream& operator>>(istream& is, PhanSo& temp) {
	do {
		is >> temp.tu >> temp.mau;
		if (temp.mau == 0) cout << "Vui long nhap phan so hop le ";
	} while (temp.mau == 0);
	return is;
}
ostream& operator<<(ostream& os, const PhanSo temp) {
	if (temp.tu == 0) os << 0;
	else {
		if (temp.mau == 1) os << temp.tu;
		else {
			os << temp.tu << "/" << temp.mau;
		}
	}
	return os;
}
double PhanSo::getSoThuc() {
	return (double)this->tu / this->mau;
}
void PhanSo::RutGon() {
	int temp = gcd(this->mau, this->tu);
	this->tu /= temp;
	this->mau /= temp;
	if (mau < 0) {
		this->tu *= -1;
		this->mau *= -1;
	}
}
PhanSo PhanSo::operator+(const PhanSo temp) {
	PhanSo result;
	result.tu = this->tu * temp.mau + this->mau * temp.tu;
	result.mau = this->mau * temp.mau;
	result.RutGon();
	return result;
}
PhanSo PhanSo::operator-(const PhanSo temp) {
	PhanSo result;
	result.tu = this->tu * temp.mau - this->mau * temp.tu;
	result.mau = this->mau * temp.mau;
	result.RutGon();
	return result;
}
PhanSo PhanSo::operator*(const PhanSo temp) {
	PhanSo result;
	result.tu = this->tu * temp.tu;
	result.mau = this->mau * temp.mau;
	result.RutGon();
	return result;
}
PhanSo PhanSo::operator/(const PhanSo temp) {
	PhanSo result;
	result.tu = this->tu * temp.mau;
	result.mau = this->mau * temp.tu;
	result.RutGon();
	return result;
}
bool PhanSo::operator==(PhanSo temp) {
	if (this->getSoThuc() == temp.getSoThuc()) return 1;
	return 0;
}
bool PhanSo::operator!=(PhanSo temp) {
	if (this->getSoThuc() == temp.getSoThuc()) return 0;
	return 1;
}
bool PhanSo::operator>(PhanSo temp) {
	if (this->getSoThuc() > temp.getSoThuc()) return 1;
	return 0;
}
bool PhanSo::operator<(PhanSo temp) {
	if (this->getSoThuc() < temp.getSoThuc()) return 1;
	return 0;
}