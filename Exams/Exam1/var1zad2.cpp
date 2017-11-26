#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int leftSide = 0; //because it's a sum
    for (int i = 1; i <= n; i++)
    {
        int product = 1; //each addent is a product
        for (int p = i; p <= i + m; p++)
        {
            product *= p;
        }
        leftSide += product;
    }

    int rightSide = 1; //because it's a product
    for (int p = n; p <= n + m + 1; p++)
    {
        rightSide *= p;
    }
    rightSide /= (m + 2); //before the deletion, rightSide is a product of m + 2 consecutive numbers,
                          //so 1 of them is divided by m + 2, thus the private will always be integer

    bool result = leftSide == rightSide;
    cout << boolalpha << result << endl;




    return 0;
}
