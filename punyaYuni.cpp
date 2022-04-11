#include <iostream>
using namespace std;

const int maxi = 100;

void jejak(int A[][maxi], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 1;
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
            for (int i = bar; i < baw; ++i){
			    A[i][ko] = nilai++;
            }
		    ko++;
        }

        // kiri ke kanan
        if (bar < baw)
        {
            for (int i = ko; i < sam; ++i)
            {
                A[baw-1][i] = nilai++;
            }
            baw--; 
        }

        // bawah ke atas
		
		for (int i = baw-1; i >= bar; --i)
        {
			A[i][sam-1] = nilai++;
        }
		sam--;
		
        // kanan ke kiri
		for (int i = sam-1; i >= ko; --i)
        {
			A[bar][i] = nilai++;
        }
		bar++;

	}
}

void tampilJejak(int A[][maxi], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << "\t";
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