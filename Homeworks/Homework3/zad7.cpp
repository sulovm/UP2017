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

    //Check
    int sumOfPrimDiag = 0;
    int sum = 0; //for all other sums
    bool magic = true;

    for (int i = 0; i < n; i++)
    {
        sumOfPrimDiag += a[i][i];
        sum += a[i][n - i - 1];
    }

    if (sum != sumOfPrimDiag)
    {
        magic = false;
    }
    else
    {
        //Rows
        for (int i = 0; i < n && magic; i++)
        {
            sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += a[i][j];
            }

            if (sum != sumOfPrimDiag)
            {
                magic = false;
            }
        }

        //Columns
        for (int i = 0; i < n && magic; i++)
        {
            sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += a[j][i];
            }

            if (sum != sumOfPrimDiag)
            {
                magic = false;
            }
        }
    }

    if (magic)
    {
        cout << "The matrix is a magic square!\n";
    }
    else
    {
        cout << "The matrix is NOT a magic square!\n";
    }

    return 0;
}
