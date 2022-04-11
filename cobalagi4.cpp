#include <iostream>

using namespace std;

int hitung_dengan_while (int n) 
{
    int total = 0;
    int bil = 1;

    while (bil <= n){
        total = total + bil;
        bil = bil + 1 ;

    }

    return total;
}

int hitung_dengan_for (int n) {
	int total = 0;

	for ( int bil = 1; bil <= n; bil++ ) {
		total = total = bil;
	}

	return total;
}

int main()
{
    //membuat program untuk menghitung jumlah bilangan 1,2,3,.. N
    int n;
    int hasil;

    //memasukkan nilai n
    cout << "Memasukkan nilai n :";
    cin >> n;

    //perhitungan dilakukan dengan memanfaatkan function
    //function ini menghasilkan jumlah bilangan 1,.. n, dengan sebagai parameter
    hasil = hitung_dengan_while (n);
    cout << "hasil perhitungan = " << hasil;


    return 0;
}