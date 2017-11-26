#include <iostream>
using namespace std;

int main()
{
    int current, previous;
    cin >> current;
    if (!cin || current <= 0)
    {
        cerr << "Wrong input!\n";
        return 1;
    }

    int maxNum = 1; //If no numbers are powers of 2, maxNum will stay 1, which is what we desire

    do
    {
        //Operate with the current number
        bool flag = true; //indicates if the current number is a power of 2
        int currentIter = current; //To keep the original untouched
        while (currentIter > 1 && flag)
        {
            if (currentIter % 2 != 0)
            {
                flag = false;
            }
            else
            {
                currentIter /= 2;
            }
        };

        if (flag && current > maxNum)
        {
            maxNum = current;
        }

        //Keep the current number in previous and enter the next one
        previous = current;
        cin >> current;
        if (!cin || current <= 0)
        {
            cerr << "Wrong input!\n";
            return 1;
        }
    }
    while (current != previous); //We won't operate with the very last number but it's the same as the previous

    cout << maxNum << endl;

    return 0;
}
