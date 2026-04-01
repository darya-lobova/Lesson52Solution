#include "logic.h"

int main() {

	cout << "Is the power of three?: " << (is_power_of_three(-1) ? "Yes" : "No") << endl;
	cout << "Is the power of three?: " << (is_power_of_three(0) ? "Yes" : "No")<< endl;
	cout << "Is the power of three?: " << (is_power_of_three(1) ? "Yes" : "No")<< endl;
	cout << "Is the power of three?: " << (is_power_of_three(3) ? "Yes" : "No")<< endl;
	cout << "Is the power of three?: " << (is_power_of_three(243) ? "Yes" : "No") << endl;
	cout << "Is the power of three?: " << (is_power_of_three(54) ? "Yes" : "No") << endl;

	return 0;
}