#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Enter a positive integer number n <= 20: ";
        cin >> n;
    }
    while (n <= 0 || n > 20);

    int a[20][20];
    cout << "Enter the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    bool symmetric = true;
    for (int i = 0; i < n && symmetric; i++)
    {
        for (int j = 0; j < n && symmetric; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = false;
            }
        }
    }

    if (symmetric)
    {
        cout << "The matrix is symmetric!\n";
    }
    else
    {
        cout << "The matrix is NOT symmetric!\n";
    }

    return 0;
}
