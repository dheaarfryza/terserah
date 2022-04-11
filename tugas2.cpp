#include <iostream>
/*
NRP GANJIL 5027211013
Dhea Arfryza Ananda Prasetyo
Input Batas
-1, 3, -5 = -3
Input 5
*/
using namespace std;

int main( )
{
	int a, i, n, total;

	i = 0;
	a = 1;
	total = 0;

	cout << "Masukkan nilai n :";
	cin >> n;

	while (i < n)
	{
		if (i %  2 == 0)
		{
			total += -1*(a + 2*i);
		}
		else
		{
		total += a + 2*i;
		}
		i++;
	}
	cout << "total : " << total;
}