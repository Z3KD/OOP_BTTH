#include"GDTienTe.h"
#include"GDVang.h"

//• Nhập danh sách các giao dịch vàng
//• Nhập danh sách các giao dịch ngoại tệ
//• Cho biết giao dịch vàng nào có thành tiền cao nhất
//• Cho biết giao dịch ngoại tệ Euro nào có giá trị(thành tiền) thấp nhất
//• Xuất ra các giao dịch có thành tiền trên 1 tỷ đồng(1.000.000.000đ)

void NhapDSGDVang(Vang V[], int& SoVang) {
	do {
		cout << "Nhap so luong vang(1-3): "; cin >> SoVang;
	} while (SoVang < 1 || SoVang > 3);
	cin.ignore();
	for (int i = 0; i < SoVang; i++) {
		V[i].nhap();
	}
	cout << "--------------------" << endl;

}
void NhapDSGDTienTe(TienTe TT[], int& SoTienTe) {
	do {
		cout << "Nhap so loai tien te(1-3): "; cin >> SoTienTe;
	} while (SoTienTe < 1 || SoTienTe > 3);
	cin.ignore();
	for (int i = 0; i < SoTienTe; i++) {
		TT[i].nhap();
	}
	cout << "--------------------" << endl;
}
void XuatDSGDVang(Vang V[], int SoVang) {
	cout << "----------Giao Dich Vang----------" << endl;
	cout << "Ma giao dich\tNgay giao dich\tDon gia\tSo luong\tLoai vang" << endl;
	for (int i = 0; i < SoVang; i++) {
		V[i].xuat();
	}
}
void XuatDSGDTienTe(TienTe TT[], int SoTienTe) {
	cout << "----------Giao Dich Tien Te----------" << endl;
	cout << "Ma giao dich\tNgay giao dich\tDon gia\tSo luong\tLoai tien\tTi gia" << endl;
	for (int i = 0; i < SoTienTe; i++) {
		TT[i].xuat();
	}
}
void TimGDVangCoGiaTriCaoNhat(Vang V[], int SoVang) {
	int idx_Max = 0;
	long long maxPrice = 0;
	for (int i = 0; i < SoVang; i++) {
		if (V[i].TinhThanhTien() > maxPrice) {
			maxPrice = V[i].TinhThanhTien();
			idx_Max = i;
		}
	}
	cout << "Giao dich vang co gia tri cao nhat la:" << endl;
	V[idx_Max].xuat();
}
void TimGDEUROCoGiaTriThapNhat(TienTe TT[], int SoTienTe) {
	int idx_Min = -1;
	long long minPrice = 0;
	for (int i = 0; i < SoTienTe; i++) {
		if (TT[i].TinhThanhTien() > minPrice && TT[i].GetLoaiTien() == "EURO") {
			minPrice = TT[i].TinhThanhTien();
			idx_Min = i;
		}
	}
	if (idx_Min == -1) {
		cout << "Khong co giao dich ngoai te EURO" << endl;
	}
	else {
		cout << "Giao dich ngoai te EURO co gia tri thap nhat la:" << endl;
		TT[idx_Min].xuat();
	}
}
void XuatGDVangTren1Ty(Vang V[], int SoVang) {
	bool MotTy = false;
	cout << "----------Giao Dich Vang----------" << endl;
	cout << "Ma giao dich\tNgay giao dich\tDon gia\tSo luong\tLoai vang" << endl;
	for (int i = 0; i < SoVang; i++) {
		if (V[i].TinhThanhTien() >= 1000000000) {
			MotTy = true;
			V[i].xuat();
		}
	}
	if (!MotTy) cout << "Khong co giao dich vang co gia tri tren 1 ty!" << endl;
}
void XuatGDTienTeTren1Ty(TienTe TT[], int SoTienTe) {
	bool MotTy = false;
	cout << "----------Giao Dich Tien Te----------" << endl;
	cout << "Ma giao dich\tNgay giao dich\tDon gia\tSo luong\tLoai tien\tTi gia" << endl;
	for (int i = 0; i < SoTienTe; i++) {
		if (TT[i].TinhThanhTien() >= 1000000000) {
			MotTy = true;
			TT[i].xuat();
		}
	}
	if (!MotTy) cout << "Khong co giao dich tien te co gia tri tren 1 ty!" << endl;
}

int main() {
	Vang V[3]; int SoVang;
	TienTe TT[3]; int SoTienTe;
	NhapDSGDVang(V, SoVang);
	NhapDSGDTienTe(TT, SoTienTe);
	XuatDSGDVang(V, SoVang);
	XuatDSGDTienTe(TT, SoTienTe);
	cout << "--------------------" << endl;
	TimGDVangCoGiaTriCaoNhat(V, SoVang);
	TimGDEUROCoGiaTriThapNhat(TT, SoTienTe);
	cout << "--------------------" << endl;
	cout << "Giao dich co gia tri tren 1 Ty:" << endl;
	XuatGDVangTren1Ty(V, SoVang);
	XuatGDTienTeTren1Ty(TT, SoTienTe);
	return 0;
}