#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Enter a positive integer number n: ";
        cin >> n;
    }
    while (n <= 0);

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = a[0];
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }

    int secondMin;
    if (minIndex == 0 && n > 1)
    {
        secondMin = a[1];
    }
    else
    {
        secondMin = a[0];
    }

    for (int i = 0; i < n; i++)
    {
        if (i != minIndex && a[i] < secondMin)
        {
            secondMin = a[i];
        }
    }

    if (n == 1)
    {
        cout << "The only element which is minimal: " << min << endl;
    }
    else
    {
        cout << "The two minimal: " << min << " " << secondMin << endl;
    }

    return 0;
}
