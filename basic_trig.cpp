// basic_trig.cpp
// --------------
// A short practice program for the trigonometric functions in <cmath>.
// It computes   sin(36 degrees) + cos(72 degrees)   and prints the result (about 0.8968).
//
// Key idea: sin() and cos() in C++ expect angles in RADIANS, not degrees. So each angle
// is first converted using   radians = degrees * (pi / 180).
//
// Note: <cstdlib> and <ctime> are included but not used by this program (leftovers from
// a random-number exercise).

#include <iostream>
#include <cstdlib> /// header file required to use rand and srand
#include <ctime> // header file needed to use time
#include <cmath>

// Defines pi manually. M_PI is not part of standard C++, and some compilers (e.g. Visual
// Studio) do not provide it unless asked. On compilers that DO define it, this line may
// produce a "redefined" warning.
#define M_PI 3.14159265358979323846


using namespace std;

int main() {

	double angle1 = 36; // Angle in degrees for the sine calculation.
	double angle2 = 72; // Angle in degrees for the cosine calculation.
	
	// Convert both angles from degrees to radians (180 degrees = pi radians).
	angle1 = angle1 * (M_PI / 180);
	angle2 = angle2 * (M_PI / 180);
	
	// sin(36 deg) ~= 0.5878 and cos(72 deg) ~= 0.3090, so x ~= 0.8968.
	double x = sin(angle1) + cos(angle2);
		
	cout << x; // Prints with cout's default precision (6 significant digits), e.g. 0.896802

	return 0;

}
	
