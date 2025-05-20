#include"Date.h"

int main() {
	Date A, B;
	cout << "Nhap ngay thang nam A: "; cin >> A;
	cout << "Nhap ngay thang nam B: "; cin >> B;
	cout << "Ngay thang nam da nhap: A = " << A << " , B = " << B << endl;
	cout << "A + B = " << A + B << endl;
	cout << "A - B = " << A - B << endl;
	++A;
	cout << "A++ = " << A << endl;
	++B;
	cout << "B++ = " << B << endl;
}