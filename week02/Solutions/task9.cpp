#include <iostream>
using namespace std;

int main() {
	int firstNumber, secondNumber;

	cout << "Enter first number: ";
	cin >> firstNumber;

	cout << endl << "Enter second number: ";
	cin >> secondNumber;

	firstNumber = firstNumber + secondNumber; /* този пример би трябвWало да илюстрира
												 в добър начин смисъла на оператора за
												 присвояване '='. В C++ и , ще видите,
												 в много други езици 'a = b' означава
												 'Нека а има същата стойност, каквато е 
												 стойността на b в този момент. */
	secondNumber = firstNumber - secondNumber;
	firstNumber = firstNumber - secondNumber;

	/* проследете сами стойностите на двете променливи
	   и се убедете, че наистна накрая ще имат разменени
	   стойности
	*/

	cout << "First number is now: " << firstNumber << ", and second number is: " << secondNumber << endl;
	return 0;
}