#include "iArray.h"
void iArray::taoMang() {
	do {
		cout << "Nhap so luong phan tu mang(1-100): "; cin >> n;
	} while (n < 1);
	arr = new int[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}
void iArray::xuat() {
	if (n == 0) {
		cout << "Mang chua co san!\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void iArray::DemSoLanXuatHien() {
	if (n == 0) {
		cout << "Mang chua co san!\n";
		return;
	}
	int x;
	do {
		cout << "Nhap so nguyen khong am can dem: "; cin >> x;
	} while (x < 0);
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) count++;
	}
	cout << "So lan xuat hien cua " << x << " la: " << count << endl;
}
void iArray::KiemTraTangDan() {
	if (n == 0) {
		cout << "Mang chua co san!\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] >= arr[i + 1]) {
			cout << "Mang khong tang dan!\n";
			return;
		}
	}
	cout << "Mang tang dan!\n";
}
void iArray::SapXepMang(int l, int r, char x) {
	if (n == 0) {
		cout << "Mang chua co san!\n";
		return;
	}
	if (x == 'i') {
		int i = l, j = r, mid = arr[(i + j) / 2];
		while (i <= j) {
			while (arr[i] < mid) i++;
			while (arr[j] > mid) j--;
			if (i <= j) {
				swap(arr[i], arr[j]);
				i++;
				j--;
			}
		}
		if (l < j) SapXepMang(l, j, x);
		if (i < r) SapXepMang(i, r, x);
	}
	else {
		int i = l, j = r, mid = arr[(i + j) / 2];
		while (i <= j) {
			while (arr[i] > mid) i++;
			while (arr[j] < mid) j--;
			if (i <= j) {
				swap(arr[i], arr[j]);
				i++;
				j--;
			}
		}
		if (l < j) SapXepMang(l, j, x);
		if (i < r) SapXepMang(i, r, x);
	}
}
void iArray::timSoLeNhoNhat() {
	if (n == 0) {
		cout << "Mang chua co san!\n";
		return;
	}
	int odd_min = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			if (odd_min == -1) odd_min == arr[i];
			else if (odd_min > arr[i]) odd_min = arr[i];
		}
	}
	if (odd_min = -1) cout << "Mang khong co so le!\n";
	else cout << "So le nho nhat mang la: " << odd_min << endl;
}
int isPrime(int x) {
	if (x < 2) return 0;
	else if (x == 2 || x == 3) return 1;
	else {
		for (int i = 2; i * i <= x; i++) {
			if (x % i == 0) return 0;
		}
	}
	return 1;
}
void iArray::TimSoNguyenToLonNhat() {
	if (n == 0) {
		cout << "Mang chua co san!\n";
		return;
	}
	int prime_max = - 1;
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i]) == 1 && prime_max < arr[i]) {
			prime_max = arr[i];
		}
	}
	if (prime_max == -1) cout << "Mang khong chua so nguyen to!\n";
	else cout << "So nguyen to lon nhat mang la: " << prime_max << endl;
}