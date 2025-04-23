#pragma once
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class iArray
{
private:
	int n;
	int* arr;
public:
	iArray() { n = 0; }
	int Size() { return n; }
	void taoMang();
	void xuat();
	void DemSoLanXuatHien();
	void KiemTraTangDan();
	void SapXepMang(int l, int r,char x);
	void timSoLeNhoNhat();
	void TimSoNguyenToLonNhat();
	~iArray() { delete[] arr; }
};