#include "PhanSo.h"
void PhanSo::nhap() {
	do {
		cin >> tu >> mau;
	} while (mau == 0);
	rutgon();
}
void PhanSo::xuat() {
	if (mau == 0) cout << "Phan so chua co san!\n";
	else {
		if (mau == 1) cout << tu << endl;
		else if (tu == 0) cout << 0 << endl;
		else cout << tu << "/" << mau << endl;
	}
}
bool isPrime(int a) {
	if (a < 2) return 0;
	if (a == 2 || a == 3) return 1;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) return 0;
	}
	return 1;
}
double PhanSo::getSoThuc() {
	return (double)tu / mau;
}
void PhanSo::rutgon() {
	int m = gcd(tu, mau);
	tu /= m;
	mau /= m;
	if (mau < 0) {
		tu *= -1;
		mau *= -1;
	}
}
PhanSo operator+(PhanSo A, PhanSo B) {
	PhanSo C;
	C.tu = A.tu * B.mau + A.mau * B.tu;
	C.mau = A.mau * B.mau;
	C.rutgon();
	return C;
}