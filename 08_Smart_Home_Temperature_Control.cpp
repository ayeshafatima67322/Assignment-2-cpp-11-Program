#include <iostream>
using namespace std;

int main()
{
    float temperature;

    cout << "Enter room temperature in Celsius: ";
    cin >> temperature;

    if (temperature > 30)
        cout << "Turn On the Cooling System" << endl;
    else
        cout << "Cooling System Not Required" << endl;

    return 0;
}
