#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;
    cin >> number; //No requirement for input validation

    int count0 = 0, count2 = 0, count4 = 0, count6 = 0, count8 = 0;
    int numberIter = number; //To keep the original number unchanged; not necessary for this problem

    while (numberIter > 0)
    {
        int digit = numberIter % 10;
        switch(digit)
        {
            case 0: count0++; break;
            case 2: count2++; break;
            case 4: count4++; break;
            case 6: count6++; break;
            case 8: count8++; break;
        }
        numberIter /= 10;
    }

    if (count0 > 0)
    {
        cout << setw(15) << left << '0' << setw(15) << left << count0 << endl;
    }
    if (count2 > 0)
    {
        cout << setw(15) << left << '2' << setw(15) << left << count2 << endl;
    }
    if (count4 > 0)
    {
        cout << setw(15) << left << '4' << setw(15) << left << count4 << endl;
    }
    if (count6 > 0)
    {
        cout << setw(15) << left << '6' << setw(15) << left << count6 << endl;
    }
    if (count8 > 0)
    {
        cout << setw(15) << left << '8' << setw(15) << left << count8 << endl;
    }

    return 0;
}
