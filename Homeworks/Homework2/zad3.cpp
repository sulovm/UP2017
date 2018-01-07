#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int xCoord, yCoord, horseXCoord, horseYCoord;

    do
    {
        cout << "Enter the coordinates of the horse: ";
        cin >> horseXCoord >> horseYCoord;
    }
    while (horseXCoord < 1 || horseXCoord > 8 || horseYCoord < 1 || horseYCoord > 8);

    do
    {
        cout << "Enter the coordinates of the other field: ";
        cin >> xCoord >> yCoord;
    }
    while (xCoord < 1 || xCoord > 8 || yCoord < 1 || yCoord > 8);

    bool flag = abs(horseXCoord - xCoord) == 2 && abs(horseYCoord - yCoord) == 1 ||
                abs(horseXCoord - xCoord) == 1 && abs(horseYCoord - yCoord) == 2;

    cout << boolalpha << flag << endl;

	return 0;
}
