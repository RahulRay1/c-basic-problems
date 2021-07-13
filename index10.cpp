/* Write a program to find out the net salary of the employee if basic>=18000, than 15% 
tax is applicable, if basic >=10000 than 10% tax is applicable and if basic<10000, no tax
is applicable.*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float basic, net;
    cout << "Enter your basic salary" << endl;
    cin >> basic;
    if (basic >= 18000)
    {
        net = basic - basic * .15;
    }
    else if (basic >= 10000)

    {
        net = basic - basic * .1;
    }
    else if (basic < 10000)
    {
        net = basic;
    }
    cout << " your net salary after substrating tax = " << net << endl;

    return 0;
}
