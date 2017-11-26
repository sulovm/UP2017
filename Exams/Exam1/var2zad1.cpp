#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;
    cin >> number; //No requirement for input validation

    int count1 = 0, count3 = 0, count5 = 0, count7 = 0, count9 = 0;
    int numberIter = number; //To keep the original number unchanged; not necessary for this problem

    while (numberIter > 0)
    {
        int digit = numberIter % 10;
        switch(digit)
        {
            case 1: count1++; break;
            case 3: count3++; break;
            case 5: count5++; break;
            case 7: count7++; break;
            case 9: count9++; break;
        }
        numberIter /= 10;
    }

    if (count1 > 0)
    {
        cout << setw(15) << left << '1' << setw(15) << left << count1 << endl;
    }
    if (count3 > 0)
    {
        cout << setw(15) << left << '3' << setw(15) << left << count3 << endl;
    }
    if (count5 > 0)
    {
        cout << setw(15) << left << '5' << setw(15) << left << count5 << endl;
    }
    if (count7 > 0)
    {
        cout << setw(15) << left << '7' << setw(15) << left << count7 << endl;
    }
    if (count9 > 0)
    {
        cout << setw(15) << left << '9' << setw(15) << left << count9 << endl;
    }

    return 0;
}

