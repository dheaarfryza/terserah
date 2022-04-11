#include <iostream>
using namespace std;

#define sam 7
#define baw 8

void jejak(int A[][sam], int m, int n)
{
    for (int a = 0; a < m; a++)
    {
        for (int b = 0; b < n; b++)
        {
            A[a][b] = 1;
        }
    }
}

void isiJejak(int A[][sam], int bw, int sm)
{
    // 1-8 atas ke bawah
    for (int baris = 0; baris < bw-1; baris++)
    {
        for (int kolom = 0; kolom < 1; kolom++)
        {
            A[baris+1][kolom] = A[baris][kolom] + 1;
        }    
    }
    
    // 9-14 kiri ke kanan
    for (int baris = 7; baris < 8; baris++)
    {
        for (int kolom = 0; kolom < sm-1; kolom++) // sm = 7
        {
            A[baris][kolom+1] = A[baris][kolom] + 1;
        }    
    }

    // 15-20 bawah ke atas
    for (int baris = bw-1; baris > 0; baris--) // 8 -1 = 7
    {
        for (int kolom = 6; kolom < 7; kolom++)
        {
            A[baris-1][kolom] = A[baris][kolom] + 1;
        }    
    }

    // 21-26 kanan ke kiri
    for (int baris = 0; baris < 1; baris++)
    {
        for (int kolom = sm-1; kolom > 1; kolom--)
        {
            A[baris][kolom-1] = A[baris][kolom] + 1;
        }
    }

    //27-32 atas ke bawah
    for (int baris = 0; baris < bw-2; baris++)
    {
        for (int kolom = 1; kolom < 2; kolom++)
        {
            A[baris+1][kolom] = A[baris][kolom] + 1;
        }    
    }

    //33-36 kiri ke kanan
    for (int baris = 6; baris < 7; baris++)
    {
        for (int kolom = 1; kolom < sm-2; kolom++)
        {
            A[baris][kolom+1] = A[baris][kolom] + 1;
        }    
    }

    // 37-41 bawah ke atas
    for (int baris = bw-2; baris > 1; baris--)
    {
        for (int kolom = 5; kolom < 6; kolom++)
        {
            A[baris-1][kolom] = A[baris][kolom] + 1;
        }    
    }

    // 41-44 kanan ke kiri
    for (int baris = 1; baris < 2; baris++)
    {
        for (int kolom = sm-2; kolom > 2; kolom--)
        {
            A[baris][kolom-1] = A[baris][kolom] + 1;
        }
    }

    //45-48 atas ke bawah
    for (int baris = 1; baris < bw-3; baris++)
    {
        for (int kolom = 2; kolom < 3; kolom++)
        {
            A[baris+1][kolom] = A[baris][kolom] + 1;
        }    
    }

    //49-50 kiri ke kanan
    for (int baris = 5; baris < 6; baris++)
    {
        for (int kolom = 2; kolom < sm-3; kolom++)
        {
            A[baris][kolom+1] = A[baris][kolom] + 1;
        }    
    }

    //51-53 bawah ke atas
    for (int baris = bw-3; baris > 2; baris--)
    {
        for (int kolom = 4; kolom < 5; kolom++)
        {
            A[baris-1][kolom] = A[baris][kolom] + 1;
        }    
    }

    //54 kanan ke kiri
    for (int baris = 2; baris < 3; baris++)
    {
        for (int kolom = sm-3; kolom > 3; kolom--)
        {
            A[baris][kolom-1] = A[baris][kolom] + 1;
        }
    }

    //55-56 atas ke bawah
    for (int baris = 2; baris < bw-4; baris++)
    {
        for (int kolom = 3; kolom < 4; kolom++)
        {
            A[baris+1][kolom] = A[baris][kolom] + 1;
        }    
    }
}

void tampilJejak(int A[][sam], int m, int n)
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
    int A[baw][sam];
    // bentuk array 2 dimensi
    jejak(A, baw, sam);

    isiJejak(A, baw, sam);

    tampilJejak(A, baw, sam);
}