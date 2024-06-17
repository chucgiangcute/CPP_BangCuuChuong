// CPP_BangCuuChuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
using namespace std;
int main() {
	cout << "BANG CUU CHUONG";
	int so;
	cout << "Nhap so";
	cin >> so;
	int n = 10;
	int m = 10;
	for (int i= 1; i <= n; i++)
	{ cout << so << "x" <<  i << "=" << so * i << endl; }
	
	
	


}*/
#include <iostream>
using namespace std;
int main() {
	cout << "BANG CUU CHUONG";
	for (int n = 2; n <= 9; n ++)
    for (int i =1; i<= 10; i ++)
	{
		cout << n << "x" << i << "=" << n * i << endl;
	}
