#include<iostream>
#include <string> // Used for String inputs
using namespace std;
int main()
{
    string phrase = "Hello World";

    // How to use substring
    string sub = phrase.substr(0, 5);
    string sub2 = phrase.substr(6, 11);

    // Concatination svaed in a variable
    string phrase2 = sub + " " + sub2;

    // Length of string
    int n = phrase.length();

    int x = 10, sum = 55;
    cout<<x-sum<< endl;

    // Printing
    cout<< phrase << endl;
    cout<< sub << " " << sub2 << endl;
    cout<< phrase2 << endl;
    cout<< n;

    int x= 5,y = 6;
    int z = x++ + ++y;
    cout << z<< endl;
    return 0;
}