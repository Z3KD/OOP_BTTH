#include"PSList.h"

void menu();

int main() {
	menu();
	return 0;
}


void menu() {
	PSList L;
	int choice;
	do {
		do {
			cout << "1.Nhap danh sach phan so\n";
			cout << "2.Xuat danh sach phan so\n";
			cout << "3.Tinh tong cac phan so\n";
			cout << "4.Tim phan so lon nhat\n";
			cout << "5.Tim phan so nho nhat\n";
			cout << "6.Tim phan so co tu la so nguyen to lon nhat\n";
			cout << "7.Sap xep danh sach phan so tang dan\n";
			cout << "8.Sap xep danh sach phan so giam dan\n";
			cout << "9.Exit\n";
			cout << "Lua chon cua ban: "; cin >> choice;
		} while (choice < 1 || choice>9);
		switch (choice) {
		case 1:
			L.nhap();
			break;
		case 2:
			L.xuat();
			break;
		case 3:
			L.tinhTongDS();
			break;
		case 4:
			L.timPSMax();
			break;
		case 5:
			L.timPSMin();
			break;
		case 6:
			L.tim_ps_co_tu_so_nguyen_to_lon_nhat();
			break;
		case 7:
			L.SapXepDS('i');
			break;
		case 8:
			L.SapXepDS('d');
			break;
		default:
			cout << "GOODBYE!\n";
		}
	} while (choice != 9);
}