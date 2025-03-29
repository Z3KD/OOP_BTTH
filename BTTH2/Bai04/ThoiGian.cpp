#include "ThoiGian.h"

void ThoiGian::nhap() {
	do {
		cout << "Nhap gio phut giay: "; cin >> hour >> min >> sec;
		if (sec >= 60 || min >= 60) cout << "Vui long nhap thoi gian trong khoang 0:0.0 - 23:59.59" << endl;
	} while (hour < 0 || min < 0 || sec < 0|| hour > 24 || min > 59 || sec > 59);
}
void ThoiGian :: xuat() {
	cout << "Thoi gian: " << hour << " : " << min << " . " << sec << endl;
}
void ThoiGian::CongThemMotGiay() {
	if (sec < 58) {
		sec++;
	}
	else { // sec == 59
		sec = 0;
		min++;
		if (min == 60) {
			hour++;
			min = 0;
			if (hour == 24) {
				hour = 0;
				cout << "Qua ngay moi! \n";
			}
		}
	}
	xuat();
}