// cowboys_star_players.cpp
// ------------------------
// Practice with formatted, column-aligned console output. The program prints a small
// table (title, header row, divider lines, and ten player rows) of Dallas Cowboys
// players with their position and jersey number. All data is hard-coded text.
//
// How the alignment works:
//   * setw(n)  - reserves a field n characters wide for the NEXT item printed.
//   * left     - left-justifies text inside that field (default is right-justified).
//   Using the same three widths on every row makes the columns line up.
//   The widths are stored in variables so they can be changed in one place.

#include <iostream>
#include <iomanip> // header file needed to use setprecision
using namespace std;

int main() {

	int x = 25; // setwWidth, first one  - width of the "Player Name" column
	int y = 15; // setwWidth, second one - width of the "Position" column
	int z = 18; // setwWidth, third  one - width of the "Jersey Number" column

	cout << "Dallas Cowboys' Player Stats for 2025" << endl;
	cout << "======================================================" << endl;
	// Header row: column titles, padded to the same widths as the data rows below.
	cout << left << setw(x) << "Player Name"  << setw(y) << "Position" << setw(z) << "Jersey Number" << endl;
	cout << "------------------------------------------------------" << endl;
	// One row per player: name (x wide), position (y wide), jersey number (z wide).
	// Jersey numbers are strings (in quotes) because they are only displayed, never used in math.
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
