#include "logic.h"

int main() {

	cout <<  (equals(-12,1) ? "Yes" : "No") << endl;
	cout <<  (equals(1223476, -123) ? "Yes" : "No") << endl;
	cout <<  (equals(-176, 1) ? "Yes" : "No") << endl;
	cout <<  (equals(1234567, 28) ? "Yes" : "No") << endl;
	cout << (equals(1234567, 29) ? "Yes" : "No") << endl;
	cout << (equals(123456, 28) ? "Yes" : "No") << endl;
	cout <<  (equals(5, 0) ? "Yes" : "No") << endl;
	cout <<  (equals(0, 0) ? "Yes" : "No") << endl;
	cout << (equals(0, 5) ? "Yes" : "No") << endl;

	return 0;
}