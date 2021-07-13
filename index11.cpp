/* Write a program to find out the net fare of air ticket depending upon the age of the passenger.
        (1)if age>50 than 50% discount is allowed.
        (2)if age<20 than 20% discount is allowed.
        (3)in between those 10% discount is allowed.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age, fare;
    cout << "What is your age?" << endl;
    cin >> age;
    cout<<"Fare amount = ";
    cin>>fare;
    if (age > 50)
    {
        cout << "Your net fare is = " << fare - fare * .5 << endl;
    }

    else if (age < 20)
    {
        cout << "Your net fare is = " << fare - fare * .2 << endl;
    }
    else
        cout << "Your net fare is = " << fare - fare * .1 << endl;

    return 0;
}
