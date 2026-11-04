#include <iostream>
using namespace std;

int main()
{
    int overdueDays;

    cout << "Enter number of overdue days: ";
    cin >> overdueDays;

    if (overdueDays > 0)
        cout << "Late Return: Fine Applicable" << endl;
    else
        cout << "Book Returned On Time" << endl;

    return 0;
}
