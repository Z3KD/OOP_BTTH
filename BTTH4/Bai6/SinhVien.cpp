#include "SinhVien.h"
void SinhVien::nhap() {
	cout << "Nhap ma so sinh vien: "; getline(cin, MSSV);
	cout << "Nhap ho ten sinh vien: "; getline(cin, HoTen);
	cout << "Nhap dia chi nha: "; getline(cin, DiaChiNha);
	do {
		cout << "Nhap tong so tin chi: "; cin >> TongTC;
	} while (TongTC < 1);
	do {
		cout << "Nhap diem trung binh: "; cin >> DiemTB;
	} while (DiemTB < 0);
	cin.ignore();
}
void SinhVien::xuat() {
	cout << MSSV << "\t" << HoTen << "\t" << DiaChiNha << "\t" << TongTC << "\t" << DiemTB << "\t";
}