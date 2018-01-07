#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, an;

    do
    {
        cout << "Enter n: ";
        cin >> n;
    }
    while (n <= 0);

    int powOf2 = 1;

    for (int i = 1; i <= n; i++)
    {
        powOf2 *= 2; //hold 2^i
        int current = 2 * i + powOf2;

        sum += current;

        if (i == n)
        {
            an = current;
        }
    }

    cout << "an = " << an << endl;
    cout << "sum = " << sum << endl;

    return 0;
}
