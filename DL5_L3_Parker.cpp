// Author:                      Kelley Parker
// Assignment Number:           Lab 03
// File Name:                   DL5_L3_Parker.cpp
// Course/Section:              COSC 1337 Section 005
// Due Date:                    Monday, June 13, 2016
// Instructor:                  Paul Thayer
//
// This program generates 3rd grade level math questions and a report at the end.  The user can quit the program by typing in a negative number.

#include <iostream>
#include <cstdlib>  // required for the rand() and srand() function
#include <iomanip> // required for setprecision() function

using namespace std;

int main()
{
    cout << endl;
    cout << "This program will submit an unlimited number of 3rd grade level math questions with numbers between 0 and 100." << endl;
    cout << "You can quit the program at any time by typing in a number lower than 0 as a response to a question." << endl;
    cout << "A report is generated at the end of the quiz.\n" << endl;

    int answer;
    double questionsCorrect = 0, questionsIncorrect = 0;  // Initializing variables of questions correct and incorrect at 0;

    do {
            srand(time(0)); // Necessary to randomize numbers every time the program runs instead of relying on the same random algorithm.
            int number1 = rand() % 100 + 1;     // generates a random integer between 0 and 100
            int number2 = rand() % 100 + 1;     // generates another random integer between 0 and 100
            cout << "What is " << number1 << " + " << number2 << "?\n";
            cin >> answer;
            cout << endl;  // Provides a blank line between each question.

            if (answer == number1 + number2) {      // If the answer is correct, add 1 to the number of correct questions.
                questionsCorrect++;
            }

            else if (answer != number1 + number2) {   // If the answer is incorrect, add 1 to the number of incorrect questions.
                questionsIncorrect++;
            }
        } while (answer >= 0);  // keep asking questions as long as the user submitted number is 0 or greater; a number less than 0 will end the quiz.

    questionsIncorrect--; // Must reduce questions incorrect by one, otherwise, the question with the negative number submitted counts when it shouldn't.

    cout << "You have exited the quiz.  Here is your FINAL REPORT. \n\n";
    double percentageCorrect = questionsCorrect / (questionsCorrect + questionsIncorrect) * 100; // Formula for determining percentage of correct questions
    cout << endl;  // Provides blank line for readability.
    cout << "==============FINAL REPORT=============\n\n";
    cout << "Questions Correct:               " << questionsCorrect << endl;
    cout << "Questions Incorrect:             " << questionsIncorrect << endl;
    cout << "Percentage of questions correct: " << fixed << setprecision(2) << percentageCorrect << "%\n\n";  // Display percentage to nearest hundredth.
}

/* ============================SAMPLE OUTPUT============================
This program will submit an unlimited number of 3rd grade level math questions with numbers between 0 and 100.
You can quit the program at any time by typing in a number lower than 0 as a response to a question.
A report is generated at the end of the quiz.

What is 11 + 11?
4

What is 18 + 60?
6

What is 25 + 9?
8

What is 32 + 58?
3

What is 46 + 9?
55

What is 60 + 7?
67

What is 67 + 56?
-4

You have exited the quiz.  Here is your FINAL REPORT.


==============FINAL REPORT=============

Questions Correct:               2
Questions Incorrect:             4
Percentage of questions correct: 33.33%
*/
