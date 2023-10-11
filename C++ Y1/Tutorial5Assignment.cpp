#include<iostream> // Required for Printing (ie. cout, endl)
#include <math.h> // Math Library
#include <string> // Used for string
#include <iomanip>
using namespace std;
int main()
{

/*Write a C++ program that calculates and displays the area of a triangle, such as the one in Figure 1. 
The area is given by this formula: Area = 1⁄2 (base) × (height). 
Note that the program must prompt the user to enter the values for base and height in inches. */

double b, h;
cout << "Enter a value for your base and height:"<< endl;
cin >> b >> h;

double areaT = 0.5 * b * h;
cout << "The Area of your triangle is " << areaT << endl;

//Write a C++ program to calculate the sum of the integers between two numbers.

double a, n;
bool con;
cout << "Enter a value for your first and second number:"<< endl;
cin >> a>>n;
double d = 1;
double sum = (n/2)*(2*a + (n-1)*d);
cout << "The sum of the numbers between " << a << " and " << n << " is " << sum  << endl;

/*Write a C++ program that computes the maximum load in lbs that can be placed at the end of an 8-foot 2” × 4” wooden beam so that the stress on 
the fixed end is 3000 lb/in2. */

double S(3000), I, C(2), D(8), numo, deno, load, b2, h2 ;
cout << "Enter the base and height of your beam"<< endl;
cin >> b2 >> h2;
I = (b2* pow(h2, 3)) / 12;
numo = S * I;
deno = D * C;
load = numo / deno;
cout <<"The maximum stress load for this beam is "<< load << endl; 

}