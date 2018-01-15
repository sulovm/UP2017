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

    bool noZerosInDiagonal = true;
    for (int i = 0; i < n && noZerosInDiagonal; i++)
    {
        if (a[i][i] == 0)
        {
            noZerosInDiagonal = false;
        }
    }

    bool noZerosAboveDiag = true;
    bool onlyZerosAboveDiag = true;
    bool noZerosUnderDiag = true;
    bool onlyZerosUnderDiag = true;

    //In the loops above we want to cover multiple cases so we will not break the cycles prematurely
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i][j] == 0)
            {
                noZerosUnderDiag = false;
            }
            else
            {
                onlyZerosUnderDiag = false;
            }
        }

        for (int j = i + 1; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                noZerosAboveDiag = false;
            }
            else
            {
                onlyZerosAboveDiag = false;
            }
        }
    }

    bool triangular = noZerosInDiagonal && (onlyZerosAboveDiag && noZerosUnderDiag || onlyZerosUnderDiag && noZerosAboveDiag);

    if (triangular)
    {
        cout << "The matrix is triangular!\n";
    }
    else
    {
        cout << "The matrix is NOT triangular!\n";
    }

    return 0;
}
