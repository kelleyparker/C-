// Author:                      Kelley Parker
// Assignment Number:           Lab 04
// File Name:                   DL5_L4_Parker.cpp
// Course/Section:              COSC 1337 Section 005
// Due Date:                    Monday, June 13, 2016
// Instructor:                  Paul Thayer
//
// This program computers the time in seconds for sound to travel X feet through either air, water, or steel.

#include <iostream>

using namespace std;

int main()
{

    double distanceFeet, timeInSeconds;
    int speed;
    char letterSelection;
    enum material {air = 'a', water = 'w', steel = 's', quit = 'q'};

    do {
        cout << "Select an material for measuring the speed of sound:\n";
        cout << "---------------------\n";
        cout << "a)ir\n";
        cout << "w)ater\n";
        cout << "s)teel\n";
        cout << "q)uit\n";
        cin >> letterSelection;

        switch(tolower(letterSelection)) { // If user types in capital letter, this will bring it to lower case.

            case quit:
                cout << "\nYou typed in Q.  The program will now terminate.\n";
                return 0;

            case air:
                speed = 1100;
                break;

            case water:
                speed = 4900;
                break;

            case steel:
                speed = 16400;
                break;

            default:
                cout << "Invalid choice.  Please choose an available material: \n" << endl;
                continue;
        }

        do {

            cout << "What is the distance in feet?\n";
            cin >> distanceFeet;

            if (distanceFeet >= 0) {
                timeInSeconds =  distanceFeet / speed;  // Formula for time per the selected material is calculated.
                cout << timeInSeconds << " seconds\n\n";
            }
            else {
                cout << "Invalid entry, please type in a number greater than 0.\n\n"; // Allows program to keep asking for a non-negative value of feet.
            }

        } while (distanceFeet < 0);

    } while (true); // allows loop to continue infinitely, at least until the user types in q to quit the program.

}

/* ============================SAMPLE OUTPUT============================
Select an material for measuring the speed of sound:
---------------------
a)ir
w)ater
s)teel
q)uit
a
What is the distance in feet?
36000
32.7273 seconds

Select an material for measuring the speed of sound:
---------------------
a)ir
w)ater
s)teel
q)uit
w
What is the distance in feet?
36000
7.34694 seconds

Select an material for measuring the speed of sound:
---------------------
a)ir
w)ater
s)teel
q)uit
s
What is the distance in feet?
36000
2.19512 seconds

Select an material for measuring the speed of sound:
---------------------
a)ir
w)ater
s)teel
q)uit
f
Invalid choice.  Please choose an available material:

Select an material for measuring the speed of sound:
---------------------
a)ir
w)ater
s)teel
q)uit
s
What is the distance in feet?
-36000
Invalid entry, please type in a number greater than 0.

What is the distance in feet?
39000
2.37805 seconds

Select an material for measuring the speed of sound:
---------------------
a)ir
w)ater
s)teel
q)uit
q

You typed in Q.  The program will now terminate.
*/
