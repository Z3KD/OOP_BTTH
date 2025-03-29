#include "SoPhuc.h"

void SoPhuc::nhap() {
	cout << "Nhap phan thuc: "; cin >> pThuc;
	cout << "Nhap phan ao: "; cin >> pAo;
}

void SoPhuc::xuat() {
	if (pAo == 0) cout << pThuc << endl;
	else {
		if (pThuc == 0) cout << pAo << "i" << endl;
		else {
			if (pAo > 0) cout << pThuc << "+" << pAo << "i" << endl;
			else cout << pThuc << pAo << "i" << endl;
		}
	}
}

SoPhuc SoPhuc::operator+(SoPhuc A) {
	SoPhuc temp(0,0);
	temp.pThuc = this->pThuc + A.pThuc;
	temp.pAo = this->pAo + A.pAo;
	return temp;
}
SoPhuc SoPhuc::operator-(SoPhuc A) {
	SoPhuc temp(0, 0);
	temp.pThuc = this->pThuc - A.pThuc;
	temp.pAo = this->pAo - A.pAo;
	return temp;
}
SoPhuc SoPhuc::operator*(SoPhuc A) {
	SoPhuc temp(0, 0);
	temp.pThuc = this->pThuc * A.pThuc - this->pAo * A.pAo;
	temp.pAo = this->pThuc * A.pAo + this->pAo * A.pThuc;
	return temp;
}
SoPhuc SoPhuc::operator/(SoPhuc A) {
	SoPhuc temp(0, 0);
	double mau = A.pThuc * A.pThuc + A.pAo * A.pAo;
	temp.pThuc = (this->pThuc * A.pAo + this->pAo * A.pThuc) / mau;
	temp.pAo = (this->pThuc * A.pThuc - this->pAo * A.pAo) / mau;
	return temp;
}