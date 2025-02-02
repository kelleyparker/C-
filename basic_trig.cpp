#include <iostream>
#include <cstdlib> /// header file required to use rand and srand
#include <ctime> // header file needed to use time
#include <cmath>

#define M_PI 3.14159265358979323846


using namespace std;

int main() {

	double angle1 = 36;
	double angle2 = 72;
	
	angle1 = angle1 * (M_PI / 180);
	angle2 = angle2 * (M_PI / 180);
	
	double x = sin(angle1) + cos(angle2);
		
	cout << x;

	return 0;

}
	
