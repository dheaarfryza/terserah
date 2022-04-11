#include <iostream>

using namespace std;

#define sam 7 // kolom
#define baw 8 // baris

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

void isiJejak(int A[][sam], int bw, int sm)
{
    //kiri ke kanan (1-8)
    for (int b = 0; b < 1; b++)
    {
        for (int k = 0; k < sm-1; k++)
        {
            A[b][k+1] = A[b][k] + 1;
        }
    }

    //atas ke bawah(9-14)
    for (int b = 0; b < bw-1; b++)
    {
        for (int k = 6; k < 7; k++)
        {
            A[b+1][k] = A[b][k] + 1;
        }
    }

    //kanan ke kiri (15-20)
    for (int b = bw-1; b < 8; b++)
    {
       for (int k = sm-1; k > 0; k--)
        {
            A[b][k-1] = A[b][k] + 1;
        }
    }

    //bawah ke atas (21-26)
    for (int b = bw-1; b > 1; b--)
    {
        for (int k = 0; k < 1; k++)
        {
            A[b-1][k] = A[b][k] + 1;
        }
    }

    //kiri ke kanan (22-31)
    for (int b = 1; b < 2; b++)
    {
        for (int k = 0; k < sm-2; k++)
        {
            A[b][k+1] = A[b][k] + 1;
        }
    }

    //atas ke bawah (32-36)
     for (int b = 1; b < bw-2; b++)
    {
        for (int k = 5; k < 6; k++)
        {
            A[b+1][k] = A[b][k] + 1;
        }
    }

    //kanan ke kiri (37-40)
    for (int b = bw-2; b < 7; b++)
    {
       for (int k = sm-2; k > 1; k--)
        {
            A[b][k-1] = A[b][k] + 1;
        }
    }

    //bawah ke atas (41-44)
     for (int b = bw-2; b > 2; b--)
    {
        for (int k = 1; k < 2; k++)
        {
            A[b-1][k] = A[b][k] + 1;
        }
    }

    //kiri ke kanan (44-47)
    for (int b = 2; b < 3; b++)
    {
        for (int k = 1; k < sm-3; k++)
        {
            A[b][k+1] = A[b][k] + 1;
        }
    }

    //atas ke bawah (48-50)
    for (int b = 2; b < bw-3; b++)
    {
        for (int k = 4; k < 5; k++)
        {
            A[b+1][k] = A[b][k] + 1;
        }
    }

    //kanan ke kiri (51-53)
    for (int b = bw-3; b < 7; b++)
    {
       for (int k = sm-3; k > 2; k--)
        {
            A[b][k-1] = A[b][k] + 1;
        }
    }

    //bawah ke atas (53-54)
    for (int b = bw-3; b > 3; b--)
    {
        for (int k = 2; k < 3; k++)
        {
            A[b-1][k] = A[b][k] + 1;
        }
    }

    //kiri ke kanan (55)
    for (int b = 3; b < 4; b++)
    {
        for (int k = 2; k < sm-4; k++)
        {
            A[b][k+1] = A[b][k] + 1;
        }
    }

    //atas ke bawah (48-50)
    for (int b = 3; b < bw-4; b++)
    {
        for (int k = 3; k < 4; k++)
        {
            A[b+1][k] = A[b][k] + 1;
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
    //bentuk array 2d
    jejak(A, baw, sam);

    isiJejak(A, baw, sam);

    tampilJejak(A, baw, sam);
}