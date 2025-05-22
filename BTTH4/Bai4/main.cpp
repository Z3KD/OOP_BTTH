#include"Dat.h"
#include"Nha.h"
#include"ChungCu.h"


void nhapDSGDDat(Dat Dlist[], int& DNum) {
	do {
		cout << "Nhap so luong giao dich dat(1-3): "; cin >> DNum;
	} while (DNum < 1||DNum > 3);
	cin.ignore();
	for (int i = 0; i < DNum; i++) {
		Dlist[i].nhap();
		cin.ignore();
	}
}
void nhapDSGDNha(Nha Nlist[], int& NNum) {
	do {
		cout << "Nhap so luong giao dich nha pho(1-3): "; cin >> NNum;
	} while (NNum < 1 || NNum > 3);
	cin.ignore();
	for (int i = 0; i < NNum; i++) {
		Nlist[i].nhap();
		cin.ignore();
	}
}
void nhapDSGDChungCu(ChungCu Clist[], int& CNum) {
	do {
		cout << "Nhap so luong giao dich can ho chung cu(1-3): "; cin >> CNum;
	} while (CNum < 1 || CNum > 3);
	cin.ignore();
	for (int i = 0; i < CNum; i++) {
		Clist[i].nhap();
		cin.ignore();
	}
}
long long TrungBinhThanhTienGDChungCu(ChungCu Clist[], int CNum) {
	long long sum = 0;
	for (int i = 0; i < CNum; i++) {
		sum += Clist[i].TinhThanhTien();
	}
	return sum / CNum;
}
void TimGDNhaCoGiaTriCaoNhat(Nha Nlist[], int NNum) {
	int iMax = 0;
	long long maxPrice = 0;
	for (int i = 0; i < NNum; i++) {
		if (Nlist[i].TinhThanhTien() > maxPrice) {
			iMax = i;
			maxPrice = Nlist[i].TinhThanhTien();
		}
	}
	cout << "Giao dich nha pho co gia tri cao nhat la: "; Nlist[iMax].xuat();
}

int main() {
	Dat Dlist[3]; int DNum;
	Nha Nlist[3]; int NNum;
	ChungCu Clist[3]; int CNum;
	nhapDSGDDat(Dlist, DNum);
	nhapDSGDNha(Nlist, NNum);
	nhapDSGDChungCu(Clist, CNum);
	cout << "-----------------------------------------" << endl;
	cout << "Trung binh thanh tien cua giao dich can ho chung cu: " << TrungBinhThanhTienGDChungCu(Clist, CNum) << endl;
	TimGDNhaCoGiaTriCaoNhat(Nlist, NNum);

	cout << "Danh sach cac giao dich trong thang 12 nam 2024: " << endl;
	for (int i = 0; i < DNum; i++) {
		string Date = Dlist[i].GetNgayGD();
		if (Date.substr(3, 2) == "12" && Date.substr(6, 4) == "2024") {
			Dlist[i].xuat();
		}
	}
	for (int i = 0; i < NNum; i++) {
		string Date = Nlist[i].GetNgayGD();
		if (Date.substr(3, 2) == "12" && Date.substr(6, 4) == "2024") {
			Nlist[i].xuat();
		}
	}
	for (int i = 0; i < CNum; i++) {
		string Date = Clist[i].GetNgayGD();
		if (Date.substr(3, 2) == "12" && Date.substr(6, 4) == "2024") {
			Clist[i].xuat();
		}
	}

	return 0;
}