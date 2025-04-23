#include"VPList.h"

void menu();

int main() {
	menu();
	return 0;
}

void menu() {
	VPList L;
	int choice;
	do {
		do {
			cout << "1.Nhap danh sach nhan vien\n";
			cout << "2.Xuat danh sach nhan vien\n";
			cout << "3.Cho biet nhan vien co luong cao nhat\n";
			cout << "4.Tinh tong luong ma cong ty phai tra cho nhan vien\n";
			cout << "5.Cho biet nhan vien co tuoi cao nhat\n";
			cout << "6.Sap xep danh sach nhan vien tang dan theo luong\n";
			cout << "7.Exit\n";
			cout << "Lua chon cua ban:"; cin >> choice;
		} while (choice < 1 || choice>7);
		switch (choice) {
		case 1:
			L.nhap();
			break;
		case 2:
			L.xuat();
			break;
		case 3:
			L.TimNhanVienLuongCaoNhat();
			break;
		case 4:
			L.TinhTongLuongNhanVien();
			break;
		case 5:
			L.TimNhanVienTuoiCaoNhat();
			break;
		case 6:
			L.SapXepTangDanTheoLuong();
			break;
		case 7:
			cout << "GOODBYE!";
		}
	} while (choice != 7);
}