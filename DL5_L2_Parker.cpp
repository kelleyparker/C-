// Author:                      Kelley Parker
// Assignment Number:           Lab 02
// File Name:                   DL5_L2_Parker.cpp
// Course/Section:              COSC 1337 Section 005
// Due Date:                    June 8, 2016
// Instructor:                  Paul Thayer
//
// This program creates an asterisk-filled star depending on the desired size the user types in.

#include <iostream>

using namespace std;
int main()
{

    int maxRows;  // Declare variable for number of rows to be created in diamond.

    do {
        cout << "How many rows do you want in your diamond?  Type in 0 or lower to quit.  \n\n";
        cin >> maxRows;  // User types in number of desired rows.
        for (int currentRow = 1; currentRow <= maxRows; currentRow++) {  // this outer for loop cycles through each row in the diamond
            for (int columnCount = 1; columnCount < maxRows+1; columnCount++) { // this inner for loop cycles through each column in given row
                int row = abs( columnCount - (maxRows / 2 + 1 ));
                int column = abs( currentRow - (maxRows / 2 + 1));

                if ( abs(row + column) <= (maxRows / 2)) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    } while (maxRows > 0);

    cout << "You typed in 0 or lower.  Program will now terminate.\n\n";
    return 0;
}

/* ============================SAMPLE OUTPUT============================
How many rows do you want in your diamond?  Type in 0 or lower to quit.

1
*

How many rows do you want in your diamond?  Type in 0 or lower to quit.

2
 *
***
 *
How many rows do you want in your diamond?  Type in 0 or lower to quit.

4
  *
 ***
*****
 ***
  *
How many rows do you want in your diamond?  Type in 0 or lower to quit.

5
  *
 ***
*****
 ***
  *

How many rows do you want in your diamond?  Type in 0 or lower to quit.

7
   *
  ***
 *****
*******
 *****
  ***
   *

How many rows do you want in your diamond?  Type in 0 or lower to quit.

9
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

How many rows do you want in your diamond?  Type in 0 or lower to quit.

3
 *
***
 *

How many rows do you want in your diamond?  Type in 0 or lower to quit.

0
*
You typed in 0 or lower.  Program will now terminate.


*/
