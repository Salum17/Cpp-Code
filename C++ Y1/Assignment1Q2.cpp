#include<iostream> // Required for Printing (ie. cout, endl)
#include <math.h> // Math Library
#include <string> // Used for string
using namespace std;
int main() {
    //naming variables
    int num;
    double divisor;
    int i;
    char cont;
    cout <<"This code allows you to enter any positive integer and returns all positive integer divisors in decreasing order."<< endl;
    cout <<"To terminate the program enter zero or negative number when prompted." << endl;
    
    // loop to calculate divisors
    do{
    
        cout << "Enter any positive interger into the terminal: ";
        cin >> num;
        i = 1;
        cont = 'y';
        
        if (num > 0){ //condition to see if input is a positive integer
                while (i <= num){ // condition to stop calculations once we get the smallest divisor
                if (num % i == 0){
                    divisor = num/i;
                    cout << divisor << endl;
                    i++;
                    
                }
                else {
                    i++;
                }
            
            }
        cout << "These are all the divisors for your value" << endl;
        }
        else { // condition for when non posistive integers are entered
            cout << num << " is not a postive integer!" << endl;
            cout << "Would you like to terminate the program? (y/n)"<< endl; // asking if user wants o terminate program
            cin >> cont;
            if (cont == 'y' || cont == 'Y'){
                break;
            }
            else if (cont == 'n' || cont == 'N'){
                cont = 'y';
            }
            else {
                while(cont!='y' && cont!='Y' && cont!='n' && cont!='N') { // loop for when user inputs wrong answer
                cout <<"Please respond with Y (or y) for yes and N (or n) for no. ";
                cin >> cont;
                }
            }

        }
        cout << "Would you like to see the divisors of another integer? (y/n)" << endl; // prompt to calculate a new set of divisors
        cin >> cont;
        while(cont!='y' && cont!='Y' && cont!='n' && cont!='N') {
            cout <<"Please respond with Y (or y) for yes and N (or n) for no. ";
            cin >> cont;
            }
    } while (cont == 'y'); // do loop condition to terminate program
}
    

