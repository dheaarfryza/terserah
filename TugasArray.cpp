#include <iostream>
using namespace std;

#define sam 7
#define baw 8

void jejak(int A[][sam], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 1;
        }
    }
}

void isiJejak(int A[][sam], int bwh, int smp)
{
    //1-8 atas ke bawah
    for (int b = 7; b < 8; b++)
    {
        for (int k = 0; k < smp-1; k++)
        {
            A[b+1][k] = A[b][k] + 1;
        }
    }
    //9-14 kiri ke kanan
    for (int b = bwh-1; b > 0; b--)
    {
        for (int k = 6; k < 7; k++)
        {
            A[b-1][k] = A[b][k] + 1;
        }
    }
    //21-26 kanan ke kiri
    for (int b = 0; b < 1; b++)
    {
        for (int k = smp-1; k > 1; k--)
        {
            A[b][k-1] = A[b][k] + 1;
        }
    }
    //27-32 atas ke bawah
    for (int b = 0; b < bwh-2; b++)
    {
        for (int k = 1; k < 2; k++)
        {
            A[b+1][k] = A[b][k] = 1;
        }
    }
    //33-36 kiri ke kanan
    for (int k = 6; k < 7; k++)
    {
        for (int b = 1; b < smp-2; b++)
        {
            A[k][b+1] = A[k][b] + 1;
        }    
    }

    // bawah ke atas
    for (int k = bwh-2; k > 1; k--)
    {
        for (int b = 5; b < 6; b++)
        {
            A[k-1][b] = A[k][b] + 1;
        }    
    }

    // kanan ke kiri
    for (int k = 1; k < 2; k++)
    {
        for (int b = smp-2; b > 2; b--)
        {
            A[k][b-1] = A[k][b] + 1;
        }
    }

    // atas ke bawah
    for (int k = 1; k < bwh-3; k++)
    {
        for (int b = 2; b < 3; b++)
        {
            A[k+1][b] = A[k][b] + 1;
        }    
    }

    // kiri ke kanan
    for (int k = 5; k < 6; k++)
    {
        for (int b = 2; b < smp-3; b++)
        {
            A[k][b+1] = A[k][b] + 1;
        }    
    }

    // bawah ke atas
    for (int k = bwh-3; k > 2; k--)
    {
        for (int b = 4; b < 5; b++)
        {
            A[k-1][b] = A[k][b] + 1;
        }    
    }

    // kanan ke kiri
    for (int k = 2; k < 3; k++)
    {
        for (int b = smp-3; b > 3; b--)
        {
            A[k][b-1] = A[k][b] + 1;
        }
    }

    // atas ke bawah
    for (int k = 2; k < bwh-4; k++)
    {
        for (int b = 3; b < 4; b++)
        {
            A[k+1][b] = A[k][b] + 1;
        }    
    }
}

void tampilJejak(int A[][sam], int m, int n)
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
    int A[baw][sam];
    // bentuk array 2 dimensi
    jejak(A, baw, sam);

    isiJejak(A, baw, sam);

    tampilJejak(A, baw, sam);
}