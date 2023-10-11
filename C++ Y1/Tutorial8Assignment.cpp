#include <iostream>
#include <cmath>
#include <array>
#include <cstring>

using namespace std;

/*Write a program that prompts the user to enter a  message. The program should then convert 
uppercase letters to lowercase and lowercase letters to uppercase.*/

string switchCase (string phrase){
    
    for (int i = 0; i < phrase.length(); i++)
    {
        if (isupper(phrase[i])){
            phrase[i] = tolower(phrase[i]);

        }
        else if(phrase[i] == ' ' || phrase[i] == '.' || phrase[i] == ',' || phrase[i] == '?') {
            phrase[i] = phrase[i];
        }
        else {
            phrase[i] = toupper(phrase[i]);
        }
    }
    
    return phrase; 
}
const string EMPTY = "";
const string X[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
                "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
                "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
                "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };
const string Y[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
                "Sixty ", "Seventy ", "Eighty ", "Ninety " };
string convertToNum(int n, string suffix)
{
    if (n == 0) {
        return EMPTY;
    }

    if (n > 19) {
        return Y[n / 10] + X[n % 10] + suffix;
    }
    else {
        return X[n] + suffix;
    }
}
string numberToWords(unsigned long long int n)
{
    string res;

    res = convertToNum((n % 100), "");

    if (n > 100 && n % 100) {
        res = "and " + res;
    }

    res = convertToNum(((n / 100) % 10), "Hundred ") + res;

    res = convertToNum(((n / 1000) % 100), "Thousand ") + res;

    res = convertToNum(((n / 100000) % 100), "Lakh, ") + res;

    res = convertToNum((n / 10000000) % 100, "Crore, ") + res;
    return res;
}
int main(){

    string phrase;
    double money;
    cout<< "Function 1" << endl <<"Enter a phrase: ";
    cin >> phrase;
    cout << endl << switchCase(phrase);
    cout<< "Function 2" << endl;
    
    double input,in_second; //variable declare
    int in_first,in_seconds;//variable declare
     while (true)
     {
             cout<<"Please Enter Currency Input in Numeric Here: ";//variable declare
              cin>>input;//input display
             if(input<=1000000)
                 break;//break if value is correct other wise it will rotate in g
     }
     in_first=(int)input;
     in_second=input-in_first;
     in_seconds=in_second*100;
     if(in_seconds>=50)
     {
     in_seconds=in_seconds+1;
     }
     cout<<numberToWords(in_first)<<" dollars "<<numberToWords(in_seconds)<<" Cents";//output display
     return 0;
    return 0;
}