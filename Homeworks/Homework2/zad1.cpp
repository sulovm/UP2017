#include <iostream>

using namespace std;

int main()
{
    int n;

    int units;
    int tens;
    int hundreds;

    do
    {
        cout << "Enter n: ";
        cin >> n;

        units = n % 10;
        tens = n / 10 % 10;
        hundreds = n / 100;
    }
    while (n < 100 || n > 999 || units == 0 || tens == 0); //No need to check hundreds == 0 since we check if n has 3 digits

    bool flag = n % units == 0 && n % tens == 0 && n % hundreds == 0;

    if(flag)
    {
        cout << "Yes" << endl;
        cout << units + tens + hundreds << endl;
    }else
    {
        cout << "No" << endl;
        cout << units * tens * hundreds << endl;
    }

	return 0;
}
