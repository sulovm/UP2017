#include <iostream>

using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Enter n: ";
        cin >> n;
    }
    while (n <= 0);

    cout << "*\n"; //row 1

    for (int i = 2; i <= n - 1; i++) //row 2 -> row n - 1
    {
        cout << "* ";

        for (int j = 1; j <= i - 2; j++)
        {
            cout << ". ";
        }

        cout << "*\n";
    }

    if (n > 1) //If n == 1, we have only 1 row and we have already printed it above
    {
        for (int i = 1; i <= n; i++) //row n (only stars)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

