#include <iostream>
using namespace std;


int sumOfDigits(int number) {
	int sum = 0; // тази променлива ще пази сумата на цифрите, съответно почва от 0
	while (number > 0) {
		sum = sum + number % 10; // сумата = сумата досега + последната цифра на числото
		number = number / 10; // махаме последната цифра
	}

	return sum;
}

bool haveEqualSums(int firstNumber, int secondNumber) {
	return (sumOfDigits(firstNumber) == sumOfDigits(secondNumber));
	/* тук само сравняваме резултатите от функцията 
	   sumOfDigits(firstNumber) и sumOfDigits(secondNumber)
	 */
}

int main() {
	cout << haveEqualSums(122, 50) << endl;
	cout << haveEqualSums(1000, 11) << endl;
	cout << haveEqualSums(22, 4) << endl;
	return 0;
}