// Avril Cao
// November 4, 2024
// Lab 8

#include <iostream>
#include <cmath>

// header file #include <iostream> is used to use cout and endl
// header file #include <cmath> is used to use mathematical functions 

using namespace std;

// using namespace std; is used so you don't have to use std:: in front of cout and endl

int doubleMultiply(int a, int b)
{
    int product;
    product = a * b * 2;
    return product;
}

// this is the function definition for doubleMultiply, which takes two parameters that are integers

double getSum(double decOne, double decTwo, double decThree)
{
    double result;
    result = decOne + decTwo + decThree;
    return result;
}

// this is the function definition for getSum, which takes three parameters that are doubles

int main ()
{
    double decimal;
  
    cout << "Enter a decimal number: " << endl;
    cin >> decimal;
  
    cout << "The square root of " << decimal << " is " << sqrt(decimal) << endl;
    cout << decimal << " raised to the fourth power is " << pow(decimal, 4) << endl;
    cout << "The floor of " << decimal << " is " << floor(decimal) << endl;

// the functions sqrt, pow, and floor are used to find the square root, the power, and the floor of a number, respectively
  
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the number is: "
        << doubleMultiply(num1, num2) << endl;

// the function doubleMultiply is used to find the product of two integers multiplied by 2, as stated in the function defintion
  
    double decOne, decTwo, decThree;
  
    cout << "Enter three decimal numbers: ";
    cin >> decOne >> decTwo >> decThree;
  
    double result = getSum(decOne, decTwo, decThree);

// this states that the variable result is the function getSum
  
    cout << "The sum of " << decOne << ", " << decTwo << ", and " << decThree << " is " 
      << result << endl;

// this outputs the sum of the three decimal numbers using the variable result
  
  return 0;  
}


/* Enter a decimal number:
3.56
The square root of 3.56 is 1.8868
3.56 raised to the fourth power is 160.62
The floor of 3.56 is 3
Enter two integers: 5 7
Twice the product of the number is: 70
Enter three decimal numbers: 5.9 3.2 7.4
The sum of 5.9, 3.2, and 7.4 is 16.5 */
