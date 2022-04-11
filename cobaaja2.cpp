//membuat program konversi suhu dari celcius ke fahrenheit
#include <stdio.h>
#include <iostream>

using namespace std;

int main( )
{
	//mendeklarasikan variable yang diperlukan
	double C, F;
	char msg[80];

	//menginputkan suhu dalam celcius
	cout << "masukkan suhu dalam celcius :";
	cin >> C;

	//menghitung suhu ke fahrenheit
	F=(9.0/5.0*C)+32.0;

	//menampilkan suhu
	sprintf(msg,"suhu dalam fahrenheit adalah %.3f",F);
	cout << msg;
	//cout << "suhu dalam fahrenheit adalah :";
	//cout << F;
 
return 0;
}