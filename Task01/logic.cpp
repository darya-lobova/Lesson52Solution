#include "logic.h"

int recursion(int number) {
	//base case
	if (number < 10) {
		return number;
	}
	//recursion case
	return number % 10 + recursion(number / 10);
}

int sum_of_gigits(int number) {
	number *= (number < 0 ? -1 : 1);

	return recursion(number);
}