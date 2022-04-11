#include <iostream>

using namespace std;

int main( )
{
	//variabel yang dibutuhkan
	double n, a, b, c, jumlah;

	//input nilai n (suku terakhir)
	cout << "Masukkan nilai n:";
	cin >> n;

	//isi nilai variable yang sudah diketahui
	a=1;
	b=2;

	//cari nilai c (urutan suku n)
	c=(n-a+b)/b;

	//cari nilai jumlah
	jumlah=(c/2)*(a+n);

	//cetak hasil jumlah
	cout << "jumlah =:";
	cout << jumlah;

return 0;
}