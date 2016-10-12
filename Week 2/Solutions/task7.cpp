#include <iostream>
using namespace std;
/* всичко е отново по шаблон */

int main() {

	int firstNumber, secondNumber, thirdNumber; /* това е равносилно на :
																			int firstNumber;
																			int secondNumber;
																			int thirdNumber;
												 */
	cout << "Enter first number: ";
	cin >> firstNumber;

	cout << "Enter second number: ";
	cin >> secondNumber;

	cout << "Enter third number: ";
	cin >> thirdNumber;

	/* с if-ове трудно се сортират редици от числа, но 
       за 3 възможностите са малко. 3 числа се нареждат
       по големина само по 6 възможности (3! - по ДС ще го говорите)
	
	   Ние ще изредим всичките .. 
	 */

	/* за да проверим дали a < b < c е достатъчно да проверим
	   дали a < b и едновременно с това b < c 
	*/

	if (firstNumber <= secondNumber && secondNumber <= thirdNumber) {
		cout << firstNumber << endl;
		cout << secondNumber << endl;
		cout << thirdNumber << endl;
	} else

	if (firstNumber <= thirdNumber && thirdNumber <= secondNumber) {
		cout << firstNumber << endl;
		cout << thirdNumber << endl;
		cout << secondNumber << endl;
	} else


	if (secondNumber <= firstNumber && firstNumber <= thirdNumber) {
		cout << secondNumber << endl;
		cout << firstNumber << endl;
		cout << thirdNumber << endl;
	} else

	if (secondNumber <= thirdNumber && thirdNumber <= firstNumber) {
		cout << secondNumber << endl;
		cout << thirdNumber<< endl;
		cout << firstNumber << endl;
	} else

	if (thirdNumber <= secondNumber && secondNumber <= firstNumber) {
		cout << thirdNumber << endl;
		cout << secondNumber << endl;
		cout << firstNumber << endl;
	} else

	if (thirdNumber <= firstNumber && firstNumber <= secondNumber) {
		cout << thirdNumber << endl;
		cout << firstNumber << endl;
		cout << secondNumber << endl;
	}

	return 0;
}