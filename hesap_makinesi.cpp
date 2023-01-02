#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number1, number2;

    cout << "Enter 2 numbers" << endl;
    cin >> number1 >> number2;

    int multiplication = number1 * number2;
    int subtraction = number1 - number2;
    double division = number1 / number2;
    int modulus = number1 % number2;

    cout << "multiplication:" << multiplication << endl;
    cout << "subtraction:" << subtraction << endl;
    cout << "division:" << division << endl;
    cout << "modulus:" << modulus << endl;
    return 0;
}
