#include "Date.h"
bool isNamNhuan(const Date temp) {
	if (temp.yy % 4 == 0 && temp.yy % 100 != 0) return 1;
	if (temp.yy % 400 == 0) return 1;
	return 0;
}
int GetMaxDayOfMonth(const Date temp) {
	int maxDays[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isNamNhuan(temp) && temp.mm == 2) return 29;
	return maxDays[temp.mm];
}
istream& operator>>(istream& is, Date& temp) {
	do {
		is >> temp.dd >> temp.mm >> temp.yy;
	} while (temp.dd < 1 || temp.dd > GetMaxDayOfMonth(temp) || temp.mm < 1 || temp.mm > 12);
	return is;
}
ostream& operator<<(ostream& os, const Date temp) {
	os << temp.dd << "/" << temp.mm << "/" << temp.yy;
	return os;
}
Date Date::operator+(const Date temp) {
	Date result;
	result.dd = this->dd + temp.dd;
	result.mm = this->mm + temp.mm;
	result.yy = this->yy + temp.yy;
	while (result.mm > 12) {
		result.yy += 1;
		result.mm -= 12;
	}
	while (result.dd > GetMaxDayOfMonth(result)) {
		result.dd -= GetMaxDayOfMonth(result);
		result.mm += 1;
	}
	return result;
}
Date Date::operator-(const Date temp) {
	Date result;
	result.dd = this->dd - temp.dd;
	result.mm = this->mm - temp.mm;
	result.yy = this->yy - temp.yy;
	while (result.dd < 1 ) {
		result.dd += GetMaxDayOfMonth(result);
		result.mm -= 1;
	}
	while (result.mm < 1) {
		result.yy -= 1;
		result.mm += 12;
	}
	return result;
}
void Date::operator++() {
	this->dd += 1;
	while (this->dd > GetMaxDayOfMonth(*this)) {
		this->dd -= GetMaxDayOfMonth(*this);
		this->mm += 1;
	}
	while (this->mm > 12) {
		this->yy += 1;
		this->mm -= 12;
	}
}
void Date::operator--() {
	this->dd -= 1;
	while (this->dd < 1 ) {
		this->dd += GetMaxDayOfMonth(*this);
		this->mm -= 1;
	}
	while (this->mm < 1) {
		this->yy -= 1;
		this->mm += 12;
	}
}