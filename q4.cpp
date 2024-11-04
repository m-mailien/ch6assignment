// Write a program that involves implicit and explicit type conversions. Explain the output in each case

#include <iostream>
using namespace std;

int main()
{
    // implicit type cast
    int num = 20;
    double f = num; // casts
    cout << f << endl; // print
    // the output is 20 because the value of f is = to num, which was originally written as an int before being cast

    // explicit type cast
    double g = 5.55; 
    int numTwo = static_cast<int>(g); // explicit cast
    cout << numTwo << endl; // output is 5 because int does not support decimals

    return 0;
}