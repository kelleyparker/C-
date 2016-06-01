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
			double food_Cost; // Total cost of the meal
			double tip_Percentage; // Percentage of the cost of the meal to be tipped
			double total_Cost_Before_Tip; // Cost of meal plus the tax rate
			double total_Cost_After_Tip; // Cost of meal plus tax plus tip.
			const double TAX_RATE = 0.0825; // The standard tax rate of 8.25%.
			cout << "Please enter the cost of the food.\n";
			cin >> food_Cost;
			cout << "Please enter the tip percentage.\n";
			cin >> tip_Percentage;
			total_Cost_Before_Tip = food_Cost + (TAX_RATE * food_Cost);
			total_Cost_After_Tip = total_Cost_Before_Tip + ((tip_Percentage/100) * total_Cost_Before_Tip);
			cout << "The total cost is $";
			printf("%.2f",total_Cost_After_Tip); // Prints the amount with two decimal places.
			cout << "\n\n";
		} // End of total cost calculation.
		
		else if (choice == 'B') {
			// Section for calculating body mass index. (BMI)
			int weight_Pounds; // Weight in pounds.
			int height_Feet; // Type in the number of feet in one's height.
			int height_Inches; // Type in the number of inches in one's height minus the aforementioned feet.
			cout << "Please provide the weight in pounds.\n";
			cin >> weight_Pounds;
			cout << "Please provide the height in feet.\n";
			cin >> height_Feet;
			cout << "Please provide the height in inches (number should be lower than 12).\n";
			cin >> height_Inches;
			height_Inches = (height_Feet * 12) + height_Inches;
			double BMI = ((static_cast<double>(weight_Pounds) 
				/ (static_cast<double>(height_Inches * static_cast<double>(height_Inches))) * 703));
				// This is the formula to calculate the body mass index.
			cout << "The BMI is ";
			printf("%.2f",BMI);  // Prints the BMI with two decimal places.
			cout << "\n\n\n";
		} // End of BMI calculation. 
		
		else if (choice == 'Q'){
			cout << "The program will now terminate.";
			return 0;
		} // Program will terminate.
		
		else {
			cout << "Invalid option entered.  Please resubmit your choice. \n\n\n";
		} // This will give the user another chance to type in an appropriate menu letter. 
		
	} while (choice != 'Q');
	
/* ============================SAMPLE OUTPUT============================
Select one of the following letters for the desired function.
A) Calculate the total cost for the meal.
B) Calculate the body mass index (BMI)
Q) This option will terminate the program.
a

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
Process exited after 11.57 seconds with return value 0
Press any key to continue . . .
============================================================================
*/
}
