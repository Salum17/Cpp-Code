#include <iostream> //Required for cin, cout, cerr
#include <fstream> //Required for ifstream, ofstream.
using namespace std;
int main()
{

//open input file
ifstream fin;
string filename;
cout << "Enter file name:";//prompt for file name
cin >> filename;
fin.open(filename);

if(fin.fail()){ //Error checking
cerr << "Error opening input file\n";
exit(1);
}

//Create output files
ofstream goodDesign("goodDesign.txt");
if(goodDesign.fail()){
cerr << "Error opening output file\n";
exit(1);
}
ofstream badDesign("badDesign.txt");
if(badDesign.fail()){
cerr << "Error opening output file\n";
exit(1);
}
//Creating variables
double numo, deno;
float r1, r2, r3, r4, r5 ,r6;
double cond;

//loop to read and sort data
while (!fin.eof()){
    fin >> r1 >> r2 >> r3 >> r4 >> r5 >> r6;  //read in first line
    numo = (r1 + r2)* r4 * r6;
    deno = (r3 + r4)* r1 * r5;
    cond = numo / deno;
    if (cond == 7.5) { //checking data
        goodDesign << r1 << " " << r2  << " " << r3 << " " << r4 << " " << r5 << " " << r6 << endl; // Saving to file called goodDesign.txt =)
        cout << "Good Design: "  << r1 << " " << r2  << " " << r3 << " " << r4 << " " << r5 << " " << r6 << endl;// Prints to the terminal
    }
    else {
        badDesign << r1 << " " << r2  << " " << r3 << " " << r4 << " " << r5 << " " << r6 << endl; // Saving to file called badDesign.txt =)
        cout << "Bad Design: "  << r1 << " " << r2  << " " << r3 << " " << r4 << " " << r5 << " " << r6 << endl;// Prints to the terminal
    }
}

//closing files
fin.close(); // or exit(0);
goodDesign.close();
badDesign.close();
cout << "Resistance values for good and bad circuit designs have been printed on screen and saved to external .txt files" << endl;
return 0;
}