#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    double leftSide = 0; //because it's a sum
    for (int i = 1; i <= n; i++)
    {
        int product = 1; //each addent's denominator is a product
        for (int p = i; p <= i + m; p++)
        {
            product *= p;
        }
        leftSide += 1.0 / product; //1.0 for real division
    }

    int factorial = 1;            //products
    int rightSideLastDenom = 1;
    for (int p = 1; p <= m; p++) //One loop since both multiplications have m multipliers
    {
        factorial *= p;
        rightSideLastDenom *= n + p;
    }

    double rightSide = 1.0 / m * (1.0 / factorial - 1.0 / rightSideLastDenom);
    //We can also reduce the division computing mutual denominator:
    //double rightSide = (double)(rightSideLastDenom - factorial) / (m * factorial * rightSideLastDenom);

    const double EPS = 1e-014; //1*(10^-14)
    bool result = fabs(leftSide - rightSide) < EPS; //Only == is dangerous
                                                    //Example: For n = 2 m = 2 the result is true.
                                                    //However, leftSide == rightSide is false (probably because there is too much division for rightSide

    cout << boolalpha << result << endl;

    return 0;
}
