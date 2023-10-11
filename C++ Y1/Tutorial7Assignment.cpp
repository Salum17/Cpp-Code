/*Question 1) What is the output of the following C++ code? 
a) i = 5 and temp = 120
b) -1, 1, 3, 5, 7, 6
c) 24, 26, 28, 30, 32
*/

#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int main(){
    /*Write a program which allows a teacher to determine the min, max, and average grade from grades entered. 
    The teacher will continuously enter grades until the sentinel is specified. 
    For this example, a grade of -1 will be used to denote grading is completed. 
    The min, max, and average grade should then be displayed to the teacher. 
    This program should not accept invalid grades to be used [0, 100]. */
    cout<<"Question 1"<<endl;
    double min, max, ave, grade, total;
    int i = 0;

    do
    {

        cout << "Enter grade: ";
        cin >> grade;
        if (grade >= 0 && grade <= 100){
            total = total + grade;
            if (i == 0){
                min = grade;
                max = grade;
            }

            if (grade > max){
                max = grade;

            }
            if (grade < min){
                min = grade;

            } 
            i++;
        }
        else if (grade == -1){
            break;
        }
        else {
            cout << "Please enter a grade between 0 and 100" << endl;
        }

    } while (grade != -1);
        ave = total/i;

        cout << "You have entered " << i << " marks, " << endl << "The highest grade was " << max << ", the lowest grade was " << min << ", the average was " << ave <<endl; 

/*Write a program which outputs prime numbers up to a specified number. 
For example, if a user entered the number 25, the program would output the prime numbers between 1 and 25. */
cout<<"Question 2"<<endl;
  int num;
  int count = 0;
  cout << "Enter the number";
  cin >> num;
  if (num >= 2)
    cout << 2 << " ";
  for (int j = 3; j <= num; j++)
    {
      count = 0;
      for (int k = 2; k < j; k++)
    {
      if (j % k == 0)
        {
          count = 1;
          break;
        }
    }
      if (count == 0)
    {
      cout << j << " ";
    }
    }
    

/*Write a program which converts a sum of currency into the highest available denominations in terms of coins. 
For example, the user inputs the number 4.25. The program would output that it takes 2 Toonies and 1 Quarter. 
Ensure that the result uses the least amount of coins possible. 
This can be solved mathematically or using loops. */
    cout<<"Question 3"<<endl;
    double amount ,diff;
    int amt1;
    double coins[]={2,1,0.5,0.25,0.10,0.5};
    int toonies,loonies,half,quarters,dime,nickel;
    cout<<"\n Enter amount : ";
    cin>>amount;
    total=0;

    amt1= (int)amount;
    diff = amount-amt1;
    toonies = amt1/2;
    amt1 %= 2;
    loonies = amt1;

    amt1 = diff*100; // to convert decimal point to integer part
    half=amt1/50;
    amt1%=50;

    quarters=amt1/25;
    amt1%=25;

    dime=amt1/10;
    amt1%=10;

    nickel=amt1/5;
    amt1%=5;


    if(toonies!=0)
    {
        cout<<"\n "<<toonies<<" tooniess  2$";
        total+=toonies;
    }
    if(loonies!=0)
    {
        cout<<"\n "<<loonies<<" loonies 1$";
        total+=loonies;
    }
    if(half!=0)
    {
        cout<<"\n "<<half<<" half loonies 0.50c";
        total+=half;
    }
    if(quarters!=0)
    {

        cout<<"\n "<<quarters<<" quarters 0.25c";
        total+=quarters;
    }
    if(dime!=0)
    {

        cout<<"\n "<<dime<<" dimes  0.10c";
        total+=dime;
    }
    if(nickel!=0)
    {
        cout<<"\n "<<nickel<<" nickel 0.05c";
        total+=nickel;
    }

    if(amt1!=0)
    {
        cout<<"\n "<<amt1<<" 1c coins  0.01c";
        total+=amt1;
    }

    cout<<"\n Total minimum coins count : "<<total;

}
