#include <iostream>

using namespace std;

int hitung_soal_1B (int n) {
	int hasil = 0;


	for (int bil = 1; bil <= n; bil += 2) {
		//hasil = hasil + bil
		hasil += bil;
	}
	return hasil;
}

int main ()
{
	//Membuat program untuk menjumlah bilangan 1, 3, 5, 7,...n
	//Asumsikan n adalah ganjil
	
	int n;
	cout << "Masukkan nilai n:";
	cin >> n;

	int hasil = hitung_soal_1B (n);
	cout <<"Hasilnya adalah "<< hasil;

	return 0;
}