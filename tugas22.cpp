#include <iostream>
#include <math.h>
/*
NRP GANJIL 5027211013
Dhea Arfryza Ananda Prasetyo
Input suku ke
-1, 3, 5 = -3
Suku ke 3
*/
using namespace std;

int main ( )
{
	int num, total = 0;
	cout << "Masukkan angka :";
	cin >> num;

	total = num*pow(-1, num);

	cout << "Total = " << total;
}