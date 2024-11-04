// Avril CaO
// November 4, 2024
// Lab 8

#include <iostream>
#include <cmath>

using namespace std;

int doubleMultiply(int a, int b)
{
    int product;
    product = a * b * 2;
    return product;
}

int main ()
{
    double decimal;

    cout << "Enter a decimal number: " << endl;
    cin >> decimal; 

    cout << "The square root of " << decimal << " is " << sqrt(decimal) << endl;
    cout << decimal << " raised to the fourth power is " << pow(decimal, 4) << endl;
    cout << "The floor of " << decimal << " is " << floor(decimal) << endl;

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the numer is: "
        << doubleMultiply(num1, num2) << endl;

    system("PAUSE");
    return 0;
}