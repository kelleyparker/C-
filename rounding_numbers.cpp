#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	float number1 = 34.789;
	float number2 = 7.0;
	double number3 = 5.789E+12;
	int number4 = 67;

	cout << setw(9) << setprecision(2) << fixed << number1 << endl;
	cout << setw(5) << setprecision(3) << fixed << showpoint << number2 << endl;
	cout << fixed << number3 << endl;
	cout << left << setw(7) << number4 << endl;
	
	return 0;
}
	
