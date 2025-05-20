#include"Time.h"

int main() {
	Time A, B;
	cout << "Nhap thoi gian A: "; cin >> A;
	cout << "Nhap thoi gian B: "; cin >> B;
	cout << "Thoi gian da nhap: A = " << A << " , B = " << B << endl;
	cout << "A + B = " << A + B << endl;
	cout << "A - B = " << A - B << endl;
	++A;
	cout << "A++ = " << A << endl;
	++B;
	cout << "B++ = " << B << endl;
}