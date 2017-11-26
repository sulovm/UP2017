#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int current, previous;
    cin >> current;

    int position = 1, length = 1, maxLength = 1, maxPosition = 1;

    for (int i = 2; i <= n; i++)
    {
        previous = current; //To keep the previous one
        cin >> current;

        if (current == previous)
        {
            length++;
        }
        else
        {
            if (length > maxLength) //<, so if we meet a new sequence with length equal to the current max, the current one will remain
            {
                maxLength = length;
                maxPosition = position;
            }
            length = 1; //current != previous, so its potential start of a new sequence of equal numbers
            position = i;
        }

        //to check if the needed sequence is at the end
        if (length > maxLength)
        {
            maxLength = length;
            maxPosition = position;
        }
    }

    cout << "Length: " << maxLength << "; Position: " << maxPosition << endl; //The strings are just for better output

    return 0;
}
