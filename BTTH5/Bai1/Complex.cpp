#include "Complex.h"
Complex Complex::operator +(const Complex temp) {
	Complex result;
	result.Ima = this->Ima + temp.Ima;
	result.Real = this->Real + temp.Real;
	return result;
}
Complex Complex::operator -(const Complex temp) {
	Complex result;
	result.Ima = this->Ima - temp.Ima;
	result.Real = this->Real - temp.Real;
	return result;
}
Complex Complex::operator *(const Complex temp) {
	Complex result;
	result.Real = this->Real * temp.Real - this->Ima * temp.Ima;
	result.Ima = this->Real * temp.Ima + this->Ima * temp.Real;
	return result;
}
Complex Complex::operator /(const Complex temp) {
	Complex result;
	double mau = temp.Real * temp.Real + temp.Ima * temp.Ima;
	result.Real = (this->Real * temp.Real + this->Ima * temp.Ima) / mau;
	result.Ima = (this->Ima * temp.Real - this->Real * temp.Ima) / mau;
	return result;
}
ostream& operator<<(ostream& os, const Complex temp) {
	if (temp.Ima == 0) os << temp.Real;
	else { // phan ao khac 0;
		if (temp.Real == 0) os << temp.Ima << "i";
		else {
			os << temp.Real;
			if (temp.Ima > 0) os << "+";
			os << temp.Ima << "i";
		}
	}
	return os;
}
istream& operator>>(istream& is, Complex& temp) {
	is >> temp.Real >> temp.Ima;
	return is;
}
bool Complex::operator == (const Complex temp) {
	if (this->Ima == temp.Ima && this->Real == temp.Real) return 1;
	return 0;
}
bool Complex::operator != (const Complex temp) {
	if (this->Ima == temp.Ima && this->Real == temp.Real) return 0;
	return 1;
}