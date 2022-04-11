#include <iostream>
using namespace std;

#define maks 100

void jejak(int A[][maks], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            A[i][j];
        }
    }
}

void isiJejak(int A[][maks], int xx, int yy)
{
    int nilai = 1; 
    int X = 0; 
    int Y = 0; 

    while(X < xx && Y < yy)
    {
        //atas ke bawah 
        if (Y < yy)
        {
            for(int i = X; i < xx; ++i)
            {
                A[i][Y] = nilai++;
            }
            Y++;
        }

        // if (bar < baw)
        // {
        //     for (int i = ko; i < sam; ++i)
        //     {
        //         A[bar][i] = nilai++;
        //     }
        //     bar++; 
        // }

        //kiri ke kanan
        if (X < xx)
        {
            for(int i = Y; i < yy; ++i)
            {
                A[xx-1][i] = nilai++;
            }
            xx--;
        }

        //bawah ke atas
        for(int i = xx-1; i >= X; --i)
        {
            A[i][yy-1] = nilai++;
        }
        yy--;

        //kanan ke kiri
        for(int i = yy-1; i >= Y; --i)
        {
            A[X][i] = nilai++;
        }
        X++;
    }
}

void tampilJejak(int A[][maks], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int baris = 8, kolom;
    cout << "Masukkan kolom:";
    cin >> kolom;

    int A[baris][maks];

    jejak(A, baris, kolom);

    isiJejak(A, baris, kolom);

    tampilJejak(A, baris, kolom);

    return 0;
}
