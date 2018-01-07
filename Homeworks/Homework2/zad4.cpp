#include<iostream>

using namespace std;

int main ()
{
    int year, day, month;

    cin >> day >> month >> year;

    bool answer;

    if (day < 1 || day > 31 || month < 1 || month > 12) //Directly invalid
    {
        answer = false;
    }
    else if (month == 2)
    {
        bool isLeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

        if (isLeapYear == true && day > 29)  //"Leap" February with more than 29 days - NOT valid
        {
            answer = false;
        }
        else if (isLeapYear == false && day > 28) //"Normal" February with more than 28 days - NOT valid
        {
            answer = false;
        }
        else //Valid February
        {
            answer = true;
        }
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) //30-days month with more than 30 days
    {
        answer = false;
    }
    else //All other cases are valid (no validation for year)
    {
        answer = true;
    }

    cout << boolalpha << answer << endl;

    return 0;
}
