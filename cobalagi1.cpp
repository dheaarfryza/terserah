#include <iostream>

using namespace std;

int main( )
{
	//mendeklarasikan variabel jenis int
	int Bil = 1, Sum = 0;
	int N;

	//menginputkan nilai N
	cout << "Masukkan nilai N :";
	cin >> N;

	//memeriksa bilangan terhadap N dengan menggunakan while
	while (Bil<= N)
	{
	Sum = Sum + Bil;
	Bil = Bil + 1;
	}
	cout << "Sum :";
	cout << Sum;

	return 0;
}