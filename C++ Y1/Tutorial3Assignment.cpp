#include<iostream> // Required for Printing (ie. cout, endl)
#include <math.h> // Math Library
#include <string> // Used for string
using namespace std;
int main()
{
// 1a) Write a C++ program to solve the quadratic equation. Compare your answer with the example above.

double a, b, c, x1, x2, numo, deno, R, IM;
cout << "Please enter your 'a', 'b', 'c' coefficients (ie. ax^2 + bx + c = 0): ";
cin >> a >> b >> c;
numo = pow(b, 2) - 4 * a * c;
deno = 2*a;
if (numo > 0) {
    x1 = (-b + sqrt(numo)) / deno;
    x2 = (-b - sqrt(numo)) / deno;
    cout << "The roots of this quadratic function are x = " << x1 << " and x = " << x2 << endl;
}
else if (numo == 0) {
    x1 = -b/ deno;
    x2 = -b/ deno;
    cout << "The roots of this quadratic function are x = " << x1 << " and x = " << x2 << endl;
}
else if (numo < 0) {
    x1 = sqrt(-1* numo)/deno;
    x2 = -b /deno;
    cout << "The roots of this quadratic function are x = " << x2 << " - " << x1 << "i and x = "<< x2 <<" + " << x1 << "i" << endl;
}

/*1b) What are the datatypes that should be used in the program to represent the formula’s coefficients? 
 For the formulas coefficients we must use double so we can get values for all real numbers when we calculate the root*/

// 2) Write a C++ program to calculate the height of the cylinder, given the surface (s) and the radius (r). 

double h, s, r, numo2, deno2;
cout << "Please enter your surface and radius values of your cylinder: ";
cin >> s >> r;
numo2 = s - 2 * M_PI * pow(r, 2);
deno2 = 2 * M_PI * r;
if (r <= 0 || numo2 <= 0){ // Or
    cout << "Error, height can not be negative (-) or zero (0)";
} 
else {
    h = numo2/deno2;
    cout << "The height of your cylinder is: " << h << "m" << endl;
}

return 0;

}