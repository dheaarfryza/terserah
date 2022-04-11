#include <iostream>
using namespace std;

const int maxi = 100;

void jejak(int A[][maxi], int m, int n)
{
    for (int a = 0; a < m; a++)
    {
        for (int b = 0; b < n; b++)
        {
            A[a][b] = 1;
        }
    }
}

void isiJejak(int A[][maxi], int baw, int sam)
{
	int nilai = 1;
	int bar = 0;
    int ko = 0;

	while (bar < baw && ko < sam)
	{
        // atas ke bawah
        if (ko < sam)
        {
            for (int a = bar; a < baw; ++a){
			    A[a][ko] = nilai++;
            }
		    ko++;
        }

        // kiri ke kanan
        if (bar < baw)
        {
            for (int a = ko; a < sam; ++a)
            {
                A[baw-1][a] = nilai++;
            }
            baw--; 
        }

        // bawah ke atas
		
		for (int a = baw-1; a >= bar; --a)
        {
			A[a][sam-1] = nilai++;
        }
		sam--;
		
        // kanan ke kiri
		for (int a = sam-1; a >= ko; --a)
        {
			A[bar][a] = nilai++;
        }
		bar++;

	}
}

void tampilJejak(int A[][maxi], int m, int n)
{
    for (int a = 0; a < m; a++)
    {
        for (int b = 0; b < n; b++)
        {
            cout << A[a][b] << "\t";
        }
        cout << endl;
    }
}

int main()
{
	int bawah = 8, samping;
    cout << "Masukkan kolom: ";
    cin >> samping;

	int A[bawah][maxi];

    jejak(A, bawah, samping);

    isiJejak(A, bawah, samping);

    tampilJejak(A, bawah, samping);

	return 0;
}