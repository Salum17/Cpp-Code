#include <iostream>
using namespace std;

int main() {
    int MagicSq[4][4];  // 4x4 array to hold user input

    // Read in user input
    cout << "Enter your 16 integer values: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> MagicSq[i][j];
        }
    }

    // Check that each number from 1 to 16 occurs in the user input
    bool InputExist = true;
    for (int Num = 1; Num <= 16; Num++) {
        bool ExistingNum = false;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (MagicSq[i][j] == Num) {
                    ExistingNum = true;
                    break;
                }
            }
            if (ExistingNum) {
                break;
            }
        }
        if (!ExistingNum) {
            InputExist = false;
            cout << "Number " << Num << " is missing from Input." << endl;
        }
    }

    if (InputExist) 
    {
        int Total = 0;
        for (int j = 0; j < 4; j++) 
        {
            Total += MagicSq[0][j];
        }
        bool SameRow = true;
        for (int i = 1; i < 4; i++) 
        {
            int RowTot = 0;
            for (int j = 0; j < 4; j++) 
            {
                RowTot += MagicSq[i][j];
            }
            if (RowTot != Total) 
            {
                SameRow = false;
                break;
            }
        }
        // Check that all columns have the same sum
        bool SameColumn = true;
        for (int j = 0; j < 4; j++) {
            int ColumnTotal = 0;
            for (int i = 0; i < 4; i++) {
                ColumnTotal += MagicSq[i][j];
            }
            if (ColumnTotal != Total) {
                SameColumn = false;
                break;
            }
        }
        // Check that the diagonal sums are equal
        bool DiagonalSame = (MagicSq[0][0] + MagicSq[1][1] + MagicSq[2][2] + MagicSq[3][3] == Total) && (MagicSq[0][3] + MagicSq[1][2] + MagicSq[2][1] + MagicSq[3][0] == Total);
        if (SameRow && SameColumn && DiagonalSame) {
            cout << "The input is a magic square!" << endl;

            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    cout << MagicSq[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << "The input is not forming a magic square." << endl;
        }
    }
}
    //Question 2

void flipDiagonal(int matrix[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
