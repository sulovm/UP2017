#include <iostream>
#include <cstring>

using namespace std;

int countMutualChar(const char* s1, const char* s2)
{
    const int MASK_SIZE = 256; //It can be optimized but it's OK by now
    bool charMask1[MASK_SIZE] = {false}, charMask2[MASK_SIZE] = {false};

    int n1 = strlen(s1);
    for (int i = 0; i < n1; i++)
    {
        charMask1[(int)s1[i]] = true;
    }

    int n2 = strlen(s2);
    for (int i = 0; i < n2; i++)
    {
        charMask2[(int)s2[i]] = true;
    }

    int counter = 0;

    for (int i = 0; i < MASK_SIZE; i++)
    {
        if (charMask1[i] == true && charMask2[i] == true)
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    char s1[100], s2[100]; //Max 99 characters
    cin >> s1 >> s2;
    cout << countMutualChar(s1, s2) << endl;

    return 0;
}
