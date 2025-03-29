#include "Date.h"

bool Date::checkNamNhuan() {
	if ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0) return 1;
	return 0;
}
int Date::getMaxDayOfMonth() {
	int getMaxDayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (checkNamNhuan() && mm == 2)
		return 29;
	return getMaxDayOfMonth[mm];
}

void Date::nhapDate() {
	do {
		cout << "Nhap ngay thang nam: "; cin >> dd >> mm >> yy;
	} while (dd < 1 || dd>31 || mm < 1 || mm>12);
}
void Date::xuatDate() {
	if (dd == 0 || mm == 0) cout << "Ngay thang nam chua co san!" << endl;
	else {
		if (yy>=0)
			cout << dd << "/" << mm << "/" << yy << endl;
		else {
			cout << dd << "/" << mm << "/" << (-1)*yy << " TCN" << endl;
		}
	}
}
void Date::findNextDate() {
	int maxDay = getMaxDayOfMonth();
	Date nextDate(this->dd, this->mm, this->yy);
	if (nextDate.dd < maxDay) {
		nextDate.dd++;
	}
	else {
		if (nextDate.mm == 12) {
			nextDate.dd = nextDate.mm = 1;
			nextDate.yy++;
		}
		else {
			nextDate.dd = 1;
			nextDate.mm++;
		}
	}
	cout << "Ngay ke tiep la: "; nextDate.xuatDate();
}