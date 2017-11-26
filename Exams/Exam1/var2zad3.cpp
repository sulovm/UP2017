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

    int minNum;
    bool found = false;
    bool firstFound = false;

    do
    {
        //Operate with the current number
        bool flag = true; //indicates if the current number is a power of 3
        int currentIter = current; //To keep the original untouched
        while (currentIter > 1 && flag)
        {
            if (currentIter % 3 != 0)
            {
                flag = false;
            }
            else
            {
                currentIter /= 3;
            }
        };

        if (flag && !firstFound)
        {
            minNum = current; //To initialize minNum with the first number which is a power of 3 (if any)
            firstFound = true;
            found = true;
        }
        else if (flag && current < minNum)
        {
            minNum = current;
            found = true;
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

    if (found)
    {
        cout << minNum << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}

