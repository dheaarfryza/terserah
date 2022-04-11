#include <iostream>

using namespace std;

int main( )
{
	//mendeklarasikan variable yang diketahui
	int a, b, c, N, total;

	//memberikan informasi nilai a, b, c
	a=1;
	b=2;
	c=3;
	N > c;

	//menginputkan nilai N
	cout << "Masukkan nilai N bilangan bulat positif, N > c :";
	cin >> N;

	//menghitung jumlah bilangan dari a sampai N
	total=N*(N+1.0)/2.0;

	//mencetak hasil total
	cout << "Total adalah :";
	cout << total;
return 0;
}