#include <iostream>

using namespace std;

int main()
{
    double x, sum = 0;
    int n;

    do
    {
        cout << "Enter n: ";
        cin >> n;
    }
    while (n <= 0);

    cout << "Enter x: ";
    cin >> x;

    double numerator = x;
    double increment = x*x;
    int denominator = 1;
    int factHelper = 1;
    int sign = 1;

    for(int i=0; i<=n; ++i)
    {
        sum += sign * numerator / denominator; // in the first iteration sum is equal to x/1
        sign = -sign;                          //in the next one the sign changes and
        numerator *= increment;                //x becomes x on third power
        denominator *= (factHelper + 1) * (factHelper + 2); //for the denominator we have 3! = 2 * 3
                                                            //this works for every factorial number, for example 5! = 3! * 4 * 5
        factHelper += 2;
    }

    cout << sum << endl;

    return 0;
}
