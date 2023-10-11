#include<iostream> // Required for Printing (ie. cout, endl)
#include <math.h> // Math Library
#include <string> // Used for string
using namespace std;
int main()
{
    // Write a program to compute the area of a circle of radius r from user input.

    double a, r;
    cout << "Please enter radius: ";
    cin >> r;
    a = M_PI * r * r;
    cout << "The area of a circle with radius " << r << "m is " << a << " m^2" << endl;


   // Write a program to compute the volume of a sphere.
   
    double v, k;
    cout << "Please enter radius: ";
    cin >> r;
    k = 4.0/3.0;
    v = k* M_PI * (r * r * r);
    cout << "The volume of a sphere with radius " << r << "m is " << v << " m^3" <<endl; 


   // Write a program to compute the tension in a cord given the following values: m1 = 100, m2 = 50, g = 9.81

   double m1{100.0}, m2{50.0}, g{9.81}, tension;
   tension = (2.0 * m1 * m2 * g) / (m1 + m2);
   cout << "The Tension in the cord is: " << tension << " N"<< endl;
   return 0;



}