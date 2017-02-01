/***************************
 * Alex Hoffmann
 * 1/31/17
 * Chapter 2, Program 1
 ****************************/

#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, average;

    num1 = 115;
    num2 = 29;
    num3 = -15;
    average = (num1 + num2 + num3) / 3;

    cout << "Num 1, 2, and 3 = " << num1 << ", " << num2 << ", " << num3 << "."
         << " Average = " << average << endl;

    return 0;
}