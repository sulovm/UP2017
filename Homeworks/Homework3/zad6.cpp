#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    do
    {
        cout << "Enter a positive integer number n <= 20: ";
        cin >> n;
    }
    while (n <= 0 || n > 20);
    do
    {
        cout << "Enter a positive integer number m <= 20: ";
        cin >> m;
    }
    while (m <= 0 || m > 20);
    do
    {
        cout << "Enter a positive integer number k <= 20: ";
        cin >> k;
    }
    while (k <= 0 || k > 20);

    int a[20][20];
    cout << "Enter matrix A:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int b[20][20];
    cout << "Enter matrix B:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> b[i][j];
        }
    }

    //Computing the multiplication
    int c[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            c[i][j] = 0;

            for (int p = 0; p < m; p++)
            {
                c[i][j] += a[i][p] * b[p][j];
            }
        }
    }

    cout << "Result:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

