// Author:                      Kelley Parker
// Assignment Number:           Lab 04
// File Name:                   DL5_L4_Parker.cpp
// Course/Section:              COSC 1337 Section 005
// Due Date:                    Monday, June 13, 2016
// Instructor:                  Paul Thayer
//
// This program computers the time in seconds for sound to travel X feet through either air, water, or steel.
//
// DETAILED OVERVIEW
// -----------------
// Sound travels at a different speed in each material, so the time it takes to cover
// a distance depends on the material:
//     time (seconds) = distance (feet) / speed (feet per second)
// The speeds used by this program are:
//     air   = 1100 ft/s     water = 4900 ft/s     steel = 16400 ft/s
// Program flow:
//   1. Show a menu: a)ir, w)ater, s)teel, q)uit (upper or lower case both work).
//   2. A switch statement stores the speed for the chosen material. An invalid letter
//      prints an error and returns to the menu.
//   3. Ask for a distance in feet. Negative distances are rejected and the question is
//      asked again until a non-negative value is entered.
//   4. Print the travel time, then return to the menu. Only 'q' ends the program.
// Concepts practiced: enum with character values, switch / case, nested do/while loops,
// and 'continue' to jump back to the top of a loop.

#include <iostream>

using namespace std;

int main()
{

    double distanceFeet, timeInSeconds; // Input distance and the calculated result.
    int speed;                          // Speed of sound (ft/s) for the chosen material.
    char letterSelection;               // The menu letter the user typed.
    // Each enum name is assigned a character code, so the case labels in the switch below
    // can be written as words (air, water, ...) instead of raw characters ('a', 'w', ...).
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
                return 0; // Leaves main, which ends the program.

            case air:
                speed = 1100;  // feet per second in air
                break;

            case water:
                speed = 4900;  // feet per second in water
                break;

            case steel:
                speed = 16400; // feet per second in steel
                break;

            default:
                cout << "Invalid choice.  Please choose an available material: \n" << endl;
                continue; // Skip the distance question and go back to the menu.
                          // In a do/while, continue jumps to the loop condition (true), so it repeats.
        }

        // Inner loop: keeps asking for a distance until the user gives a valid (non-negative) one.
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
