#pragma once
#include<iostream>
using namespace std;
class Complex
{
private:
	double Real, Ima;
public:
	Complex() { Real = Ima = 0; }
	Complex operator +(const Complex temp);
	Complex operator -(const Complex temp);
	Complex operator *(const Complex temp);
	Complex operator /(const Complex temp);
	friend ostream& operator<<(ostream& os, Complex temp);
	friend istream& operator>>(istream & is, Complex & temp);
	bool operator == (const Complex temp);
	bool operator != (const Complex temp);
};