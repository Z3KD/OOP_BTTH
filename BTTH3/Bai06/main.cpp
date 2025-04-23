#include"QuanLyTS.h"

void menu();

int main() {
	menu();
	return 0;
}

void menu() {
	QuanLyTS L;
	int choice;
	do {
		do {
			cout << "1.Nhap danh sach thi sinh\n";
			cout << "2.Xuat danh sach thi sinh\n";
			cout << "3.Xuat thong tin cac thi sinh co tong diem lon hon 15\n";
			cout << "4.Cho biet thi sinh nao co tong diem cao nhat\n";
			cout << "5.Sap xep danh sach thi sinh giam dan theo tong diem\n";
			cout << "6.Exit\n";
			cout << "Lua chon cua ban: "; cin >> choice;
		} while (choice < 1 || choice>6);
		switch (choice) {
		case 1:
			L.nhap();
			break;
		case 2:
			L.xuatDS();
			break;
		case 3:
			L.xuatDS_TS_co_tong_hon_15();
			break;
		case 4:
			L.Tim_TS_co_tong_max();
			break;
		case 5:
			L.SapXepGiamDan();
			break;
		case 6:
			cout << "GOODBYE!\n";
		}
	} while (choice != 6);
}