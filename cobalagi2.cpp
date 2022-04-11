#include <iostream>

using namespace std;

int main( )
{
	//mendeklarasikan variabel yang dibutuhkan
	string nama;
	int umur;
	float uang;
	int urutan;
	int selisihUmur;

	//menginputkan nama, umur, uang dan urutan
	cout << "ketikkan nama :";
	cin >> nama;
	cout << "ketikkan umur :";
	cin >> umur;
	cout << "ketikkan uang yang dibawa :";
	cin >> uang;

	if (umur<13) {
	cout << "Umur tidak mencukupi \n";
	selisihUmur = 13-umur;
	cout << "Silahkan kesini "<<selisihUmur<<" tahun lagi \n";
	}
	else {
		if (uang<25000) {
		cout << "Silahkan ambil uang terlebih dahulu";
		}
		else {
	cout << "Selamat datang, saudara "+nama+" di bioskop mitra";
			}
	}

return 0;
}