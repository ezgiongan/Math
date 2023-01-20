#include <iostream>
using namespace std;

float MakeFahrenheit(float t)
{
    return ((t * 9 / 5) + 32);
}
int main()
{
    float celcius, fahrenheit;
    cout << "enter temp in celcius: ";
    cin >> celcius;
    fahrenheit = MakeFahrenheit(celcius);

    cout << fahrenheit;
    return 0;

}

