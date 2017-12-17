#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    double num1,num2,num3,max,min,t;
    cout<<"You have to insert 3 real numbers.\n";
    cout<<"Insert the first number: ";
    cin>>num1;

    cout<<"Insert the second number: ";
    cin>>num2;

    cout<<"Insert the third number: ";
    cin>>num3;

    if(num1-num2 >= 1e-5) //Това означава "num1 > num2", ако разликата беше по-малка от 0.00001, щяха да са равни,
                          //а от това, че разликата е положителна следва, че първото е по-голямото
    {
        t=num1;
        num1=num2;
        num2=t;
    }
    if(num2-num3 >= 1e-5)
    {
        t=num2;
        num2=num3;
        num3=t;
    }
    if(num1-num2 >= 1e-5)
    {
        t=num1;
        num1=num2;
        num2=t;
    }

    cout<<setprecision(2)<<fixed<<num1<<" "<<num2<<" "<<num3<<endl;

    return 0;
}
