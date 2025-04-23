#include "PSList.h"
void PSList::nhap() {
	do {
		cout << "Nhap so luong phan so(1-10): "; cin >> n;
	} while (n < 1 || n > 10);
	List = new PhanSo[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap tu va mau cua phan so thu " << i + 1 << " :"; List[i].nhap();
	}
}
void PSList::xuat() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		List[i].xuat();
	}
}

void PSList::tinhTongDS() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	PhanSo sum;
	for (int i = 0; i < n; i++) {
		sum = sum + List[i];
	}
	cout << "Tong cac phan so la: "; sum.xuat();
}
void PSList::timPSMax() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int i_max = -1;
	double PSmax = 0;
	for (int i = 0; i < n; i++) {
		if (PSmax < List[i].getSoThuc()) {
			i_max = i;
			PSmax = List[i].getSoThuc();
		}
	}
	cout << "Phan so lon nhat la: "; List[i_max].xuat();
}
void PSList::timPSMin() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int i_min = -1;
	double PSmin = 0;
	for (int i = 0; i < n; i++) {
		if (PSmin > List[i].getSoThuc()) {
			i_min = i;
			PSmin = List[i].getSoThuc();
		}
	}
	cout << "Phan so nho nhat la: "; List[i_min].xuat();
}
void PSList::tim_ps_co_tu_so_nguyen_to_lon_nhat() {
	if (n == 0) {
		cout << "Danh sach chua co san!\n";
		return;
	}
	int i_max_prime = -1;
	double tu_max_prime = 0;
	for (int i = 0; i < n; i++) {
		if (isPrime(List[i].getTu()) && tu_max_prime < List[i].getTu()) {
			i_max_prime = i;
			tu_max_prime = List[i].getTu();
		}
	}
	if (i_max_prime != -1) {
		cout << "Phan so co tu la so nguyen to lon nhat la: "; List[i_max_prime].xuat();
	}
	else cout << "Khong co phan so co tu la so nguyen to trong danh sach!\n";
}
void PSList::SapXepDS(char s) {
	if (s == 'i') {
		for (int i = 0; i < n; i++) {
			double min = List[i].getSoThuc();
			int i_min = i;
			for (int j = i; j < n; j++) {
				if (List[j].getSoThuc() < min) {
					i_min = j;
					min = List[j].getSoThuc();
				}
			}
			swap(List[i], List[i_min]);
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			double max = List[i].getSoThuc();
			int i_max = i;
			for (int j = i; j < n; j++) {
				if (List[j].getSoThuc() > max) {
					i_max = j;
					max = List[j].getSoThuc();
				}
			}
			swap(List[i], List[i_max]);
		}
	}
	xuat();
}