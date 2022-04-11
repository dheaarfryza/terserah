#include <iostream>

using namespace std;

int main( )
{
	//mendeklarasikan variabel yang dibutuhkan
	int n, a, b, c, total;

	//menginputkan nilai n
	cout << "masukkan nilai n :";
	cin >> n;

	//mengisi nilai awal variabel
	a=0;
	b=1;
	c=0;
	total=0;

	//membuat while look dengan syarat c<2*n
	cout << "akan masuk loop while";
	while (c<2*n)
	{
		//memeriksa apakah sisa pembagian c mod 2 = 1
	if (c%2==1);
	{
			//jika iya maka jumlahkan total
	total = total+c;
	}
	//mengupdate nilai c, a dan b
	c=a+b;
	a=b;
	b=c;
	cout << c << " ";
	}
	//cetak hasil total
	cout << "total= : ";
	cout << total;

return 0;
}