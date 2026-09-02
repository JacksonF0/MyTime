#include <iostream>
#include "MyTime.h"

using namespace std;

int check()
{
    int value;

    while (!(cin >> value))
    {
        cin.clear();
        //ignores characters
        cin.ignore(1000, '\n');
        cout << "Whoops Please enter an integer: ";
    }

    return value;
}

int main()
{
    MyTime time1, time2;
    int hours, minutes;
    int num;

    // First!
    cout << "First time:" << endl;

    cout << "Number of Hours: ";
    hours = check();

    cout << "Number of Minutes: ";
    minutes = check();

    time1.Reset(hours, minutes);

    // Second!
    cout << endl;
    cout << "Second time:" << endl;

    cout << "Number of Hours: ";
    hours = check();

    cout << "Number of Minutes: ";
    minutes = check();

    time2.Reset(hours, minutes);

   // number Thirrrd!
    cout << endl;
    cout << "Enter an integer that's not zero: ";
   // cannot divide by zero therefore cannot use zero as num
    while (num == 0){
    cout << "nuh uh";
    num = check();}

    num = check();
    cout << endl;
    // operator checks
    
    cout << "Time1 + Time2 " << time1 + time2 << endl;
    cout << "Time1 - Time2 " << time1 - time2 << endl;
    cout << "Time1 times number " << time1 * num << endl;
    cout << "Time1 divided by number " << time1 / num << endl;

    // Boolean!
    cout << endl;
    cout << "Boolean comparison:" << endl;
    //had to google boolalpha
    cout << boolalpha;
    cout << "Is the first time less than the second time? "
         << (time1 < time2) << endl;

    cout << " **Finished, ready to grade. run-tests**"  << endl;
}