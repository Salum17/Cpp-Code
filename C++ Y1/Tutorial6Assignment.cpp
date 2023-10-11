#include<iostream> // Required for Printing (ie. cout, endl)
#include <math.h> // Math Library
#include <string> // Used for string
#include <iomanip>
using namespace std;
int main()
{
    /* 1) Write a program to determine the cost of coffee based on the size entered by a user. 
    Your program should support 3 different sizes. A large coffee costs 5.99, a medium coffee costs 4.99, and a small coffee costs 3.99. */
 

    char size;
    double total, subtotal;

    cout<< "Welcome to Jim Hortons" << endl;

    cout<< "What size coffee would you like (S,M,L)? " << endl;
    cin>> size;

    if (size == 'S'){
        subtotal = 3.99;
        total = subtotal * 1.13;
        cout << " Your Small coffee is $"<< subtotal << " and $" << total << " after tax" <<endl;
    }
    else if (size == 'M'){
        subtotal = 4.99;
        total = subtotal * 1.13;
        cout << " Your Medium coffee is $"<< subtotal << " and $" << total << " after tax" <<endl;
    }
    else if (size == 'L'){
        subtotal = 5.99;
        total = subtotal * 1.13;
        cout << " Your Large coffee is $"<< subtotal << " and $" << total << " after tax" <<endl;
    }

    // 2) Write a program to calculate the result of the following step function: 𝑓(𝑥)={2−3𝑥, 𝑥 ≤0 ln(𝑥)+10, 𝑥 >0 }

    double x, y;
    cout<< "Enter an x value"<< endl;
    cin>> x;
    if (x < 0 ){
        y = pow(2, -3*x);
        cout << "the function at " << x << " is equal to " << y << endl;
    }
    else if (x >= 0 ){
        y = log(x) + 10;
        cout << "the function at " << x << " is equal to " << y << endl;
    }
}