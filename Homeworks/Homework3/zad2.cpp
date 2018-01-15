#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int a[10] = {0}, b[10] = {0}, result[10];

    do
    {
        cout << "Enter the degree of the first polynomial: ";
        cin >> n;
    }
    while (n < 0 || n > 9);

    cout << "Enter the coefficients of the first polynomial:\n";
    for (int i = 0; i <= n; i++) //one more iteration than usual because a polynomial has both degree 0 and degree n
    {
        cin >> a[i];
    }

    do
    {
        cout << "Enter the degree of the second polynomial: ";
        cin >> m;
    }
    while (m < 0 || m > 9);

    cout << "Enter the coefficients of the second polynomial:\n";
    for (int i = 0; i <= m; i++) //one more iteration than usual because a polynomial has both degree 0 and degree m
    {
        cin >> b[i];
    }

    int maxDegree;
    if (n >= m)
    {
        maxDegree = n;
    }
    else
    {
        maxDegree = m;
    }

    for (int i = 0; i <= maxDegree; i++)
    {
        result[i] = a[i] + b[i];
    }

    for (int i = 0; i <= maxDegree; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
