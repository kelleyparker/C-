// Author:                      Kelley Parker
// Assignment Number:           Lab 02
// File Name:                   DL5_L2_Parker.cpp
// Course/Section:              COSC 1337 Section 005
// Due Date:                    June 8, 2016
// Instructor:                  Paul Thayer
//
// This program creates an asterisk-filled star depending on the desired size the user types in.
//
// DETAILED OVERVIEW
// -----------------
// Despite the "star" wording above, the shape drawn is a DIAMOND made of asterisks.
// The user types in a number N and the program prints an N x N grid in which a '*'
// is printed wherever a cell is "close enough" to the center of the grid, and a space
// is printed everywhere else. The prompt repeats until the user enters 0 or a
// negative number.
//
// HOW THE SHAPE IS DECIDED
// For every cell (currentRow, columnCount) we measure how far it is from the center
// row and the center column:
//     center      = N / 2 + 1            (integer division; middle line for odd N)
//     rowDistance = |columnCount - center|
//     colDistance = |currentRow  - center|
//     print '*' if rowDistance + colDistance <= N / 2
// Adding the two distances is a "Manhattan distance" test, and the set of cells within
// a fixed Manhattan distance of a point is exactly a diamond.
// Odd N gives a perfectly symmetric diamond (1,3,5,3,1 stars per line for N = 5).
// Even N has no single center line, so the result is slightly lopsided
// (1,3,4,3 for N = 4) - see the sample output at the bottom of the file.

#include <iostream>

using namespace std;
int main()
{

    int maxRows;  // Declare variable for number of rows to be created in diamond.
                  // The grid is maxRows tall AND maxRows wide.

    do {
        cout << "How many rows do you want in your diamond?  Type in 0 or lower to quit.  \n\n";
        cin >> maxRows;  // User types in number of desired rows.
        for (int currentRow = 1; currentRow <= maxRows; currentRow++) {  // this outer for loop cycles through each row in the diamond
            for (int columnCount = 1; columnCount < maxRows+1; columnCount++) { // this inner for loop cycles through each column in given row
                // Distance of this cell from the center COLUMN (despite the variable name "row").
                int row = abs (columnCount - (maxRows / 2 + 1 ));
                // Distance of this cell from the center ROW (despite the variable name "column").
                int column = abs (currentRow - (maxRows / 2 + 1 ));

                if (abs(row + column) <= (maxRows / 2)) {
                    cout << "*";  // insert a star if the absolute value of the sum of the row and column counters are less than or equal to the user's desired rows divided by 2
                }
                else {
                    cout << " ";
                }
            }
            cout << endl; // Finished one row of the grid - move to the next line.
        }
    } while (maxRows > 0); // Repeat until the user enters 0 or a negative number.
                           // (For those values the for loop above simply does not run.)

    cout << "You typed in 0 or lower.  Program will now terminate.\n\n";
    return 0;
}

/* ============================SAMPLE OUTPUT============================
How many rows do you want in your diamond?  Type in 0 or lower to quit.  

5
  *  
 *** 
*****
 *** 
  *  
How many rows do you want in your diamond?  Type in 0 or lower to quit.  

4
  * 
 ***
****
 ***
How many rows do you want in your diamond?  Type in 0 or lower to quit.  

3
 * 
***
 * 
How many rows do you want in your diamond?  Type in 0 or lower to quit.  

1
*
How many rows do you want in your diamond?  Type in 0 or lower to quit.  

4
  * 
 ***
****
 ***
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

0
You typed in 0 or lower.  Program will now terminate.
*/
