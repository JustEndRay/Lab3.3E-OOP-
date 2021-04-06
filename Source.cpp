#include <iostream>
#include "Bus.h"

int main()
{
    Bus a;
    cin >> a;
    cout << a;
    cout << "Re:" << endl;
    a.Re_assignment_Brand();
    a.Re_assignment_Number_of_passenger_seats();
    a.Re_assignment_Power();
    cout << a;
    cout << "Change:" << endl;
    a.Change_Brand();
    a.Change_Number_of_passenger_seats();
    a.Change_Power();
    cout << a;
    cout << "a++" << endl;
    cout << a++ << endl;

    cout << "a--" << endl;
    cout << a-- << endl;

    cout << "++a" << endl;
    cout << ++a << endl;

    cout << "--a" << endl;
    cout << --a << endl;

    cout << "Size of class is equal to " << sizeof(Bus) << endl;
    return 0;
}