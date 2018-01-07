#include<iostream>

using namespace std;

int main ()
{
    int n, x;

    do
    {
        cout << "Enter n: ";
        cin >> n;
    }
    while (n <= 0); //We need a positive n

    cout << "Enter " << n << " positive numbers:\n";

    int maxNum, minDigit = 9, onesCount = 0; //No digit greater than 9

    for (int i = 1; i <= n; i++)
    {
        cin >> x; //No validation of the numbers for more simple program

        if (i == 1 || x > maxNum) //The first condition serves to initialize maxNum with the first entered number
        {                         //The second one is the standard algorithm for finding the max element
            maxNum = x;
        }

        while (x > 0) //We assume that x is positive
        {
            int digit = x % 10;

            if (digit < minDigit)
            {
                minDigit = digit;
            }
            if (digit == 1)
            {
                onesCount++;
            }

            x /= 10;
        }
    }

    cout << "a) " << maxNum << endl;
    cout << "b) " << minDigit << endl;
    cout << "v) " << onesCount << endl;

    return 0;
}


