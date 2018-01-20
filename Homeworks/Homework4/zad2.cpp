#include <iostream>
#include <cstring>

using namespace std;

bool moreLettersThanOthers(const char* s, int &numOfLetters)
{
    numOfLetters = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            numOfLetters++;
        }
    }

    return numOfLetters > n - numOfLetters;
}

int main()
{
    char s[100];
    int numOfLett;
    cin >> s;

    cout << boolalpha << moreLettersThanOthers(s, numOfLett) << endl;
    cout << "Number of letters: " << numOfLett << endl;

    return 0;
}
