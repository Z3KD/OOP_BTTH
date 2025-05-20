#include "Time.h"
istream& operator>>(istream& is, Time& temp) {
	do {
		is >> temp.hour >> temp.min >> temp.sec;
	} while (temp.hour < 0 || temp.hour>24 || temp.min < 0 || temp.min>60 || temp.sec < 0 || temp.sec>60);
	return is;
}
ostream& operator<<(ostream& os, const Time temp) {
	os << temp.hour << ":" << temp.min << "." << temp.sec;
	return os;
}
Time Time::operator +(const Time temp) {
	Time result;
	result.sec = this->sec + temp.sec;
	result.min = this->min + temp.min;
	result.hour = this->hour + temp.hour;
	while (result.sec >= 60) {
		result.min += 1;
		result.sec -= 60;
	}
	while (result.min >= 60) {
		result.hour += 1;
		result.min -= 60;
	}
	return result;
}
Time Time::operator -(const Time temp) {
	Time result;
	result.sec = this->sec - temp.sec;
	result.min = this->min - temp.min;
	result.hour = this->hour - temp.hour;
	while (result.min < 0) {
		result.hour -= 1;
		result.min += 60;
	}
	while (result.sec < 0) {
		result.min -= 1;
		result.sec += 60;
	}
	return result;
}
void Time::operator ++() {
	this->sec += 1;
	while (this->sec >= 60) {
		this->min += 1;
		this->sec -= 60;
	}
	while (this->min >= 60) {
		this->hour += 1;
		this->min -= 60;
	}
}
void Time::operator --() {
	this->sec -= 1;
	while (this->sec < 0) {
		this->min -= 1;
		this->sec += 60;
	}
	while (this->min < 0) {
		this->hour -= 1;
		this->min += 60;
	}
}