#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Enter a positive integer number n between 10 and 20: ";
        cin >> n;
    }
    while (n < 10 || n > 20);

    char a[20][16]; //at most 20 strings, each with at most 15 symbols + '\0'
    char b[20][16]; //for the sorting
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; //Enter each string
        strcpy(b[i], a[i]);
    }

    //a)
    char min[16];
    for (int i = 0; i < n - 1; i++)
    {
        strcpy(min, b[i]);
        int minInd = i;

        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(b[j], min) < 0) //a[j] < min
            {
                strcpy(min, b[j]);
                minInd = j;
            }
        }

        strcpy(min, b[i]); //We will use min as a helper string for the swapping
        strcpy(b[i], b[minInd]);
        strcpy(b[minInd], min);
    }

    cout << "a) ";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    //b)
    cout << "b) ";
    for (int i = 0; i < n; i++)
    {
        if (strlen(a[i]) > i)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    //v)
    char concat[151] = ""; //At least 10 (half of 20) strings with at most 15 symbols + one '\0' for the whole concatenation

    for (int i = 0; i < n; i += 2) //0, 2, ... -> only the even indexes
    {
        strcat(concat, a[i]);
    }

    cout << "v) " << concat << endl;

    //g)
    char concat1[151] = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            strcat(concat1, a[i]);
        }
    }

    cout << "g) " << concat1 << endl;


    return 0;
}
