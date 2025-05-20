#include"PhanSo.h"

int main() {
	PhanSo A, B;
	cout << "Nhap phan so A: "; cin >> A;
	cout << "Nhap phan so B: "; cin >> B;
	cout << "Phan so da nhap: " << endl;
	cout << "A = " << A << " ; B = " << B << endl;
	cout << "Tong hai phan so: " << A + B << endl;
	cout << "Hieu hai phan so: " << A - B << endl;
	cout << "Tich hai phan so: " << A * B << endl;
	cout << "Thuong hai phan so: " << A / B << endl;
	if (A == B) cout << "Hai phan so bang nhau!" << endl;
	if (A != B) {
		cout << "Hai phan so khac nhau!" << endl;
		if (A > B) cout << "A la phan so lon hon!" << endl;
		if (A < B) cout << "B la phan so lon hon!" << endl;
	}
}