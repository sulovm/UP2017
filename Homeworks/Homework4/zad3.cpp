#include <iostream>

using namespace std;

int maxElemInArray(int a[], int n)
{
    if (n == 1)
    {
        return a[0]; //The only element in the array - so it's the greatest one (as well as the least one :))
    }
    int maxWithoutLast = maxElemInArray(a, n - 1);

    if (maxWithoutLast > a[n - 1])
    {
        return maxWithoutLast;
    }
    else
    {
        return a[n - 1];
    }
}

int main()
{
    int n;
    do
    {
        cout << "Enter a positive integer number n <= 100: ";
        cin >> n;
    }
    while (n <= 0 || n > 100);

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Max: " << maxElemInArray(a, n);

    return 0;
}
