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
#include <ctime> // required for time() function

using namespace std;

int main()
{
    cout << endl;
    cout << "This program will submit an unlimited number of 3rd grade level math questions with numbers between 0 and 100." << endl;
    cout << "You can quit the program at any time by typing in a number lower than 0 as a response to a question." << endl;
    cout << "A report is generated at the end of the quiz.\n" << endl;

    srand(time(NULL)); // Seed the random number generator only once at the beginning of the program.

    double questionsCorrect = 0, questionsIncorrect = 0;

    while (true) { // Use a while loop and break statements for better readability and control flow.

        int number1 = rand() % 100 + 1;     
        int number2 = rand() % 100 + 1;     
        cout << "What is " << number1 << " + " << number2 << "?\n";
        
        int answer;
        cin >> answer;
        cout << endl;

        if (answer < 0) { // Check for negative input before processing the question.
            break;
        }

        if (answer == number1 + number2) {      
            questionsCorrect++;
        }

        else {   
            questionsIncorrect++;
        }
    }

    cout << "You have exited the quiz.  Here is your FINAL REPORT. \n\n";
    double percentageCorrect = questionsCorrect / (questionsCorrect + questionsIncorrect) * 100; 
    cout << endl;  
    cout << "==============FINAL REPORT=============\n\n";
    cout << "Questions Correct:               " << questionsCorrect << endl;
    cout << "Questions Incorrect:             " << questionsIncorrect << endl;
    cout << "Percentage of questions correct: " << fixed << setprecision(2) << percentageCorrect << "%\n\n";
}
