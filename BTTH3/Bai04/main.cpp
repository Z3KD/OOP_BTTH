#include"iArray.h"

void menu();

int main() {
	menu();
	return 0;
}

void menu() {
	iArray L;
	int choice;
	do {
		do {
			cout << "1.Tao mang so nguyen ngau nhien\n";
			cout << "2.Xuat cac phan tu mang\n";
			cout << "3.Dem so lan xuat hien cua gia tri x trong mang\n";
			cout << "4.Kiem tra cac phan tu mang co tang dan hay khong\n";
			cout << "5.Tim so nguyen le nho nhat trong mang\n";
			cout << "6.Tim so nguyen to lon nhat trong mang\n";
			cout << "7.Sap xep mang tang dan\n";
			cout << "8.Sap xep mang giam dan\n";
			cout << "9.Exit\n";
			cout << "Lua chon cua ban: "; cin >> choice;
		} while (choice < 1 || choice>9);
		switch (choice) {
		case 1:
			L.taoMang();
			break;
		case 2:
			L.xuat();
			break;
		case 3:
			L.DemSoLanXuatHien();
			break;
		case 4:
			L.KiemTraTangDan();
			break;
		case 5:
			L.timSoLeNhoNhat();
			break;
		case 6:
			L.TimSoNguyenToLonNhat();
			break;
		case 7:
			L.SapXepMang(0, L.Size() - 1, 'i');
			cout << "Mang sau khi sap xep:\n";
			L.xuat();
			break;
		case 8:
			L.SapXepMang(0, L.Size() - 1, 'd');
			cout << "Mang sau khi sap xep:\n";
			L.xuat();
			break;
		default:
			cout << "GOODBYE!\n";
		}
	} while (choice != 9);
}