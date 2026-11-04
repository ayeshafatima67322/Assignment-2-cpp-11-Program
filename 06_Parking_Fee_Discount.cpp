#include <iostream>
using namespace std;

int main()
{
    int hours;
    int studentID;

    cout << "Enter parking hours: ";
    cin >> hours;
    cout << "Valid student ID? (1 = Yes, 0 = No): ";
    cin >> studentID;

    if (studentID == 1 && hours >= 2)
        cout << "Student Parking Discount Applicable" << endl;
    else
        cout << "Student Parking Discount Not Applicable" << endl;

    return 0;
}
