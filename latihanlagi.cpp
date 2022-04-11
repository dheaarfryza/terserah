#include <stdio.h>
#include <iostream>


using namespace std;

//mendeklarasikan suatu function yang bernama hitung_rataRata ( )
//dengan parameter berupa int array dan int jumlah elemen array
//serta mengembalikan nilai bertipe float

float hitung_rataRata (int A[], int n)
{
	float hasil;
	hasil = 0;
	//menjumlah seluruh nilai
	for (int i = 0: i < 10; i++)
	{
		hasil = hasil + A [i]
	}

	hasil = hasil/n;

	return hasil;
}

int main( )
{
	//membuat program yang memanfaatkan variabel aray
	//untuk menyimpan nilai patp
	int nilai [10]; //mendeklarasikan variabel nilai yang berjenis int yang memiliki anggota sebanyak 10 buah

	//memasukkan nilai sebanyak 10 kali
	for (int i = 0; i < 10; i++)
	{
		cout << "masukkan nilai ke-" << i << ":";
		cin >> nilai [i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "nilai ke-" << i << " adalah " << nilai [i] << "\n";
	}

	//mencari rata-rata nilai
	float rataRata;
	rataRata = hitung_rataRata (nilai, 10);
	cout << "rataRata nilai adalah " << rataRata <<"\n;

	return 0;
}