#include "DaThuc.h"
void DaThuc::nhap() {
	do {
		cout << "Nhap bac cua da thuc: "; cin >> degree;
	} while (degree < 0);
	func = vector<long long>(degree + 1, 0);
	for (int i = degree; i >= 0; i--) {
		if (i == 0) {
			cout << "Nhap he so tu do: "; cin >> func[i];
		}
		else {
			if (i == degree) {
				do {
					cout << "Nhap he so cua x^" << i << " : "; cin >> func[i];
				} while (func[i] == 0);
			}
			else {
				cout << "Nhap he so cua x^" << i << " : "; cin >> func[i];
			}
		}
	}
}
void DaThuc::xuat() {
	cout << func[degree] << "x^" << degree;
	for (int i = degree - 1; i >= 0; i--) {
		if (func[i] == 0) continue;
		if (i == 0) {
			if (func[i] > 0) cout << "+" << func[i];
			else {
				cout << func[i];
			}
		}
		else {
			if (func[i] > 0) cout << "+" << func[i] << "x^" << i;
			else {
				cout << func[i] << "x^" << i;
			}
		}
	}
	cout << endl;
}
DaThuc DaThuc::operator+(const DaThuc temp) {
	DaThuc result;
	int maxDeg = max(this->degree, temp.degree);
	result.func = vector<long long>(maxDeg + 1, 0);
	for (int i = 0; i <= this->degree; i++) {
		result.func[i] = this->func[i];
	}
	for (int i = 0; i <= temp.degree; i++) {
		result.func[i] += temp.func[i];
	}
	result.degree = maxDeg;
	return result;
}
DaThuc DaThuc::operator-(const DaThuc temp) {
	DaThuc result;
	int maxDeg = max(this->degree, temp.degree);
	result.func = vector<long long>(maxDeg + 1, 0);
	for (int i = 0; i <= this->degree; i++) {
		result.func[i] = this->func[i];
	}
	for (int i = 0; i <= temp.degree; i++) {
		result.func[i] -= temp.func[i];
	}
	result.degree = maxDeg;
	return result;
}
long long DaThuc::TinhGiaTri(int x) {
	long long ketqua = 0;
	for (int i = 0; i <= this->degree; i++) {
		ketqua += func[i] * pow(x, i);
	}
	return ketqua;
}