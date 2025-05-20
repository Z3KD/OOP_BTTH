#include"Complex.h"

int main() {
	Complex A, B;
	cout << "Nhap so phuc A: "; cin >> A;
	cout << "Nhap so phuc B: "; cin >> B;
	cout << "Hai so phuc da nhap: " << endl;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "Tong hai so phuc: " << A + B << endl;
	cout << "Hieu hai so phuc: " << A - B << endl;
	cout << "Tich hai so phuc: " << A * B << endl;
	cout << "Thuong hai so phuc: " << A / B << endl;
	cout << "So sanh hai so phuc: " << endl;
	if (A == B) cout << "Hai so phuc bang nhau!" << endl;
	if (A != B) cout << "Hai so phuc khac nhau!" << endl;
}