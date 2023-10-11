#include <iostream>
#include <cstring>
#include <array>

using namespace std;

int main(){
    //Creating 2-d Array
    double scoreMatrix[5][4];

    //Filling Array with values

    cout << "This program will accept data through user input and determine if papers are 'Accepted', 'Borderline', or 'Rejected'."
    << endl << "Please start entering scores"<< endl;
    for (int j = 0; j < 4; j++) //column
    {
        for (int i = 0; i < 5; i++) //row
        {
           cin >> scoreMatrix[i][j];
        
        }
    
    }
    // Needed variables
    double sum;
    double totalSum;
    int n = 0;
    double average[4];
    double totalAve;

    while (n < 4){ //Loop to check each reviewer and calc average
        for (int k = 0; k < 5; k++)
        {
            sum = sum + scoreMatrix[k][n];
        }
            average[n] = sum / 5;
            if (average[n] < 5){
                cout << "A single reviewer has scored this paper less than a 5; Rejected!" << endl;
                return 0;
            }
            else {
                sum = 0;
                n++;
            }
            
    }

    for (int m = 0; m < 4; m++) // Calcs the total sum for the final average
        {
            totalSum = totalSum + average[m];
        }
        totalAve = totalSum / 4;
        if (totalAve > 7){
            cout << "Your Score: " << totalAve << "; Accepted!" << endl << "Thank you!";
        }
        else if (totalAve < 7 && totalAve >= 6){
            cout << "Your Score: " << totalAve << "; Borderline!" << endl << "Thank you!";
        }
        else if (totalAve < 6){
            cout << "Your Score: " << totalAve << "; Rejected!" << endl << "Thank you!";
        }
}