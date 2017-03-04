#include <iostream>
using namespace std;
int main() {
	int number;

	cout << "Enter a two-digit number: ";
	cin >> number;

	int secondDigit = number % 10;
	int firstDigit = number / 10;

	/* тук няма какво толкова да се каже, освен че за да 
	   знаем какво да се изпише в програмата ни е достатъчно
	   да знаем двете цифри поотделно.
	 */

	switch (firstDigit) {
		case 2:
			cout << "twenty ";break;
		case 3:
			cout << "thirty ";break;
		case 4:
			cout << "fourty ";break;
		case 5:
			cout << "fifty ";break;
		case 6:
			cout << "sixty ";break;
		case 7: 
			cout << "seventy ";break;
		case 8:
			cout << "eighty ";break;
		case 9:
			cout << "ninety ";break;
	}

	switch (secondDigit) {
		case 0:
			cout << "";
			break;
		case 1:
			cout << "one";
			break;			
		case 2:
			cout << "two";
			break;		
		case 3:
			cout << "three";
			break;		
		case 4:
			cout << "four";
			break;		
		case 5:
			cout << "five";
			break;		
		case 6:
			cout << "six";
			break;		
		case 7:
			cout << "seven";
			break;		
		case 8:
			cout << "eight";
			break;		
		case 9:
			cout << "nine";
			break;		
	}
	if (firstDigit == 1) {
		cout << "teen";
	}

	return 0;
}