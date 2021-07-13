// Write a program to find day in week by inputed number in between 1 to 7.

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int day;
    cout << "Enter a number in between 1 to 7" << endl;
    cin >> day;
    if (day == 1)
    {
        cout << "Monday"<<endl;
    }
    else if (day == 2)
    {

        cout << "Tuesday"<<endl;
    }
    else if (day == 3)
    {
        cout << "WednessDay"<<endl;
    }
    else if (day == 4)

    {
        cout << "Thusday"<<endl;
    }
    else if (day == 5)
    {
        cout << "Fri Day"<<endl;
    }
    else if (day == 6)
    {
        cout << "Satur Day"<<endl;
    }
    else if (day == 7)
    {
        cout << "Sun Day"<<endl;
    }
    else
        cout << "Please enter a valid number"<<endl;

    return 0;
}
