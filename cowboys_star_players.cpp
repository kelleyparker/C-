#include <iostream>
#include <iomanip> // header file needed to use setprecision
using namespace std;

int main() {

	int x = 25; // setwWidth, first one
	int y = 15; // setwWidth, second one
	int z = 18; // setwWidth, third  one

	cout << "Dallas Cowboys' Player Stats for 2025" << endl;
	cout << "======================================================" << endl;
	cout << left << setw(x) << "Player Name"  << setw(y) << "Position" << setw(z) << "Jersey Number" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << left << setw(x) << "Dak Prescott" << setw(y) << "QB" << setw(z) << "4" << endl;
	cout << left << setw(x) << "Micah Parsons " << setw(y) << "LB" << setw(z) << "11" << endl;
	cout << left << setw(x) << "CeeDee Lamb" << setw(y) << "WR" << setw(z) << "88" << endl;
	cout << left << setw(x) << "Tony Pollard" << setw(y) << "RB" << setw(z) << "20" << endl;
	cout << left << setw(x) << "Demarcus Lawrence" << setw(y) << "DE" << setw(z) << "90" << endl;
	cout << left << setw(x) << "Trevon Diggs" << setw(y) << "CB" << setw(z) << "7" << endl;
	cout << left << setw(x) << "Zack Martin" << setw(y) << "G" << setw(z) << "70" << endl;
	cout << left << setw(x) << "Leighton Vander Esch" << setw(y) << "LB" << setw(z) << "55" << endl;
	cout << left << setw(x) << "Tyron Smith" << setw(y) << "T" << setw(z) << "77" << endl;
	cout << left << setw(x) << "Brandin Cooks" << setw(y) << "WR" << setw(z) << "3" << endl;
	

	return 0;
}
