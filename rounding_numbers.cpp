// rounding_numbers.cpp
// --------------------
// Demonstrates how the output-formatting manipulators in <iomanip> change the way
// numbers are printed. The values are the same four numbers printed with different
// settings:
//   setw(n)         - minimum field width for the NEXT item only (it does not persist).
//   setprecision(n) - with 'fixed', the number of digits after the decimal point.
//   fixed           - always show a plain decimal (never scientific notation).
//   showpoint       - always show the decimal point, even for values like 7.
//   left            - left-justify within the field (default is right-justify).
// IMPORTANT: fixed, setprecision, showpoint and left are "sticky": once set they stay
// in effect for every later cout, which explains the output of the third line below.
//
// Expected output (the leading spaces and padding matter):
//     "    34.79"           <- width 9, right-justified, 2 decimals
//     "7.000"               <- width 5, 3 decimals, point shown
//     "5789000000000.000"   <- precision 3 is still active; wider than any width, so no padding
//     "67     "             <- left-justified in a 7-wide field

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	float number1 = 34.789;  // Will be rounded to 2 decimals when printed: 34.79
	float number2 = 7.0;     // Whole number; showpoint makes it display as 7.000
	double number3 = 5.789E+12; // Scientific notation literal = 5,789,000,000,000
	int number4 = 67;        // Integer; precision does not affect integers

	// Line 1: right-justified in 9 columns with 2 digits after the decimal point.
	cout << setw(9) << setprecision(2) << fixed << number1 << endl;
	// Line 2: precision changes to 3; showpoint forces the decimal point to appear.
	cout << setw(5) << setprecision(3) << fixed << showpoint << number2 << endl;
	// Line 3: 'fixed' prevents scientific notation, so the full number is written out.
	cout << fixed << number3 << endl;
	// Line 4: left-justify the integer in a 7-character field (padded with trailing spaces).
	cout << left << setw(7) << number4 << endl;
	
	return 0;
}
	
