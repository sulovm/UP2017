#include <iostream>
#include <cstring>

using namespace std;

bool isValidBooleanFormula(const char* s, int &index)
{
    if (strcmp(s, "T") == 0) return true;
    if (strcmp(s, "F") == 0) return true;

    int n = strlen(s);

    if (index >= n) return true; //We have reached the end of the string
    if (s[index] == 'T' || s[index] == 'F')
    {
        index++;
        return s[index] == ',' || s[index] == ')'; //Only ',' and ')' are allowed after T or F except for
                                                   //the already handled case when the whole string is "T" or "F"
    }

    if (s[index] == 'A' || s[index] == 'O')
    {
        index++;
        if (s[index] != '(') return false;
        index++;
        if (isValidBooleanFormula(s, index) == false) return false;

        if (s[index] != ',') return false;
        index++;
        if (isValidBooleanFormula(s, index) == false) return false;

        if (s[index] != ')') return false;
        index++;

        return true;
    }

    return false;
}

bool booleanFormulaValue(const char* s, int &index)
{
    if (strcmp(s, "T") == 0) return true;
    if (strcmp(s, "F") == 0) return false;

    int n = strlen(s);

    if (s[index] == 'T')
    {
        index++;
        return true;
    }

    if (s[index] == 'F')
    {
        index++;
        return false;
    }

    char oper = s[index];
    if (oper == 'A' || oper == 'O')
    {
        index++; //move to the '('
        index++; //move to the argument and find its value
        bool arg1 = booleanFormulaValue(s, index);

        index++; //we were on the ','; move to the second argument
        bool arg2 = booleanFormulaValue(s, index);

        index++; //we were on the ')'; move to the next symbol

        if (oper == 'A') return arg1 && arg2;
        else return arg1 || arg2;
    }
}

int main()
{
    char s[1000];
    cin >> s;

    int i = 0;
//    cout << boolalpha << isValidBooleanFormula(s, i) << endl;
    cout << boolalpha << booleanFormulaValue(s, i) << endl;

    return 0;
}
