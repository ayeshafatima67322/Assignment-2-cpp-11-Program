#include <iostream>
using namespace std;

int main()
{
    float speed;
    float speedLimit;

    cout << "Enter vehicle speed: ";
    cin >> speed;
    cout << "Enter speed limit: ";
    cin >> speedLimit;

    if (speed > speedLimit)
        cout << "Speed Limit Violated" << endl;
    else
        cout << "Speed is Within Limit" << endl;

    return 0;
}
