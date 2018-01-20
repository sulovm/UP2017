#include <iostream>

using namespace std;

bool pathMatrix(int a[][100], int n, int x1, int y1, int x2, int y2)
{
    if (x1 < 0 || x1 >= n || y1 < 0 || y1 >= n || x2 < 0 || x2 >= n || y2 < 0 || y2 >= n) //All coordinates are in the borders of the matrix
    { //If the input is correct, x2 and y2 will never be out of the matrix but x1 and y1 can be sometimes
        return false;
    }

    if (x1 == x2 && y1 == y2) //We have reached the end field successfully
    {
        return true;
    }

    if (a[x1][y1] == 1) //We cannot enter this field
    {
        return false;
    }

    a[x1][y1] = 1; //Otherwise it will produce an endless cycle

    //The four directions; it's enough if one of them returns true
    return
    pathMatrix(a, n, x1 - 1, y1, x2, y2) ||
    pathMatrix(a, n, x1 + 1, y1, x2, y2) ||
    pathMatrix(a, n, x1, y1 - 1, x2, y2) ||
    pathMatrix(a, n, x1, y1 + 1, x2, y2);
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

    int a[100][100];
    cout << "Enter the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int x1, y1, x2, y2;
    do
    {
        cout << "Enter the coordinates of the first field (both between 0 and 99): ";
        cin >> x1 >> y1;
    }
    while (x1 < 0 || x1 > 99 || y1 < 0 || y1 > 99);
    do
    {
        cout << "Enter the coordinates of the second field (both between 0 and 99): ";
        cin >> x2 >> y2;
    }
    while (x2 < 0 || x2 > 99 || y2 < 0 || y2 > 99);

    cout << "Path? " << boolalpha << pathMatrix(a, n, x1, y1, x2, y2) << endl;

    return 0;
}
