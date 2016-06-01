// Author:                      Kelley Parker
// Assignment Number:           Lab 01
// File Name:                   DL5_L1_Parker.cpp
// Course/Section:              COSC 1337 Section 005
// Due Date:                    June 8, 2016
// Instructor:                  Paul Thayer
//
// This program calculates your restaurant bill and your body max index (BMI).

#include <iostream>
using namespace std;

int main()
{
	char choice;

	do {
		cout << "Select one of the following letters for the desired function.\n";
		cout << "A) Calculate the total cost for the meal.\n";
		cout << "B) Calculate the body mass index (BMI)\n";
		cout << "Q) This option will terminate the program.\n";
		cin >> choice;
		choice = toupper(choice);
		cout << "\n";
		
		if (choice == 'A') {
			// Section for calculating total cost of food.
			double foodCost, tipPercentage, totalCostBeforeTip, totalCostAfterTip;
			const double tax_rate = 0.0825;
			cout << "Please enter the cost of the food.\n";
			cin >> foodCost;
			cout << "Please enter the tip percentage.\n";
			cin >> tipPercentage;
			totalCostBeforeTip = foodCost + (tax_rate * foodCost);
			totalCostAfterTip = totalCostBeforeTip + ((tipPercentage/100) * totalCostBeforeTip);
			cout << "The total cost is $";
			printf("%.2f",totalCostAfterTip);
			cout << "\n\n";
		}
		
		else if (choice == 'B') {
			// Section for calculating body mass index. (BMI)
			int weightPounds, heightFeet, heightInches;
			cout << "Please provide the weight in pounds.\n";
			cin >> weightPounds;
			cout << "Please provide the height in feet.\n";
			cin >> heightFeet;
			cout << "Please provide the height in inches (number should be lower than 12).\n";
			cin >> heightInches;
			heightInches = (heightFeet * 12) + heightInches;
			double BMI = ((static_cast<double>(weightPounds) / (static_cast<double>(heightInches * static_cast<double>(heightInches))) * 703));
			cout << "The BMI is ";
			printf("%.2f",BMI);
			cout << "\n\n\n";
		}
		
		else if (choice == 'Q'){
			cout << "The program will now terminate.";
			return 0;
		}
		
		else {
			cout << "Invalid option entered.  Please resubmit your choice. \n\n\n";
			
		}
	} while (choice != 'Q');
	
/* ============================SAMPLE OUTPUT============================
Select one of the following letters for the desired function.
A) Calculate the total cost for the meal.
B) Calculate the body mass index (BMI)
Q) This option will terminate the program.
A

Please enter the cost of the food.
100
Please enter the tip percentage.
20
The total cost is $129.90

Select one of the following letters for the desired function.
A) Calculate the total cost for the meal.
B) Calculate the body mass index (BMI)
Q) This option will terminate the program.
b

Please provide the weight in pounds.
192
Please provide the height in feet.
5
Please provide the height in inches (number should be lower than 12).
9
The BMI is 28.35


Select one of the following letters for the desired function.
A) Calculate the total cost for the meal.
B) Calculate the body mass index (BMI)
Q) This option will terminate the program.
q

The program will now terminate.
--------------------------------
Process exited after 22.71 seconds with return value 0
Press any key to continue . . .
============================================================================
*/
}
