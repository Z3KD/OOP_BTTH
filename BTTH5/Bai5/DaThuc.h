#pragma once
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class DaThuc
{
private:
	int degree;
	vector<long long> func; //func[i] = a, i la so mu, a la he so
public:
	DaThuc() { degree = 0; }
	void nhap();
	void xuat();
	DaThuc operator+(const DaThuc temp);
	DaThuc operator-(const DaThuc temp);
	long long TinhGiaTri(int x);
};