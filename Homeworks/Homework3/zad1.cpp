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

    int k;
    cout << "Enter an integer number k: ";
    cin >> k;

    cout << "Indexes: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
