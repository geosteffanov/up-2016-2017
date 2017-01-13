#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int number) {
	int digitCount = 1; // всяко число подадено има поне една цифра
	while (number > 9) { 
		number = number / 10; // махаме последната цифра на числото
		digitCount++; // увеличаваме броя на цифрите

	}
	return digitCount;
}

bool hasDigitAt(int number, int index, int digit) {
	if (index > countDigits(number)) {
		return false;
	} /* ако случайно някой иска да види
		 цифрата на позиция, която не съществува */

	number = number / (int) pow(10, index - 1); /* махаме всички цифри след цифрата
												   на дадената позиция.
												   сега цифрата, която търсихме
												   вече е последна
												 */

												  /* pow() функцията връща double, а ние искаме
												     int за да може да се възползваме от това
												     че '/' дава само цялата част.*/
	return (digit == number % 10); /* сравняваме последната цифра с исканата */
}


int main() {

	cout << hasDigitAt(12345, 2, 4)	<< endl;
	cout << hasDigitAt(12345, 2, 3)	<< endl;
	cout << hasDigitAt(12345, 3, 3) << endl;
	cout << hasDigitAt(12345, 4, 1) << endl;

	return 0;
}