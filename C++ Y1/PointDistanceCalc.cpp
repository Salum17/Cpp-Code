#include<iostream> // Required for Printing (ie. cout, endl)
#include <cmath> // Math Library
using namespace std;
int main()
{
//declare variables
double x1{5}, y1{2}, x2{4}, y2{7}, side1, side2, distance;
//Compute
side1 = x2-x1;
side2 = y2-y1;
//Chaniging Variables 
side1 = 7;
distance = sqrt(side1*side1 + side2*side2);
//Print distance
cout <<"The Distance between the two points is " <<distance << endl;
//Exit program
return 0;
}