#include <iostream>
#include <cmath> // това трябва да се напише за да можем да ползваме pow функцията
				 // за степенуване
using namespace std;
/* всичко е отново по шаблона в
   'Task 0.cpp'
*/

int main() {
	/* всички подточки сме решили в този файл. Тъй като са в един файл, а искаме
  	   различни променливи, тяхните имена ще трябва да са
  	   различни
  	*/

	// first part
	cout << "\n\n"; /* с '\n' казваме да се изпечата new line - нов ред */
	cout << "Divisibility by fourteen and fifteen test:\n\n";  /* може да се вкарват в кавичките с други изрази" */

	int number;

	cout << "Enter number: ";
	cin >> number;

	// ще се възползваме от факта, че 2, 3, 5 и 7 са прости числа.
	// едно число се дели на 2 и на 7 <=> то се дели на 2 * 7 = 14
	// едно число се дели на 3 и на 5 <=> то се дели на 3 * 5 = 15

	bool divisibleByFifteen = (number % 15 == 0); // тази булева променлива има стойността на 
												  // резултата от този израз 
												  // true ако числото се дели на 15
												  // false ако то не се дели

	bool divisibleByFourteen = (number % 14 == 0); // по същия начин е и с тази


	cout << "The number " << number << " is divisible by fourteen: ";
	
	if (divisibleByFourteen) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	cout << "The number " << number << " is divisible by fifteen: ";
	
	if (divisibleByFifteen) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	// second part
	cout << "\n\n";
	cout << "Lies within circle test:\n\n";
	double xCoordinate, yCoordinate;
	cout << "Enter x coordinate: ";
	cin >> xCoordinate;
	
	cout << endl << "Enter y coordinate: ";
	cin >> yCoordinate;
	bool isInsideCircle = sqrt(pow(xCoordinate - 3, 2) + pow(yCoordinate + 1, 2)) <= 7;

	cout << "The point A(" << xCoordinate << ", " << yCoordinate << ") lies within the circle: ";

	if (isInsideCircle) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}


	// third part
	cout << "\n\n";
	cout << "At least one number is positive test:\n\n";

	double firstNumber, secondNumber, thirdNumber;

	cout << "Enter first number: ";
	cin >> firstNumber;

	cout << "Enter second number: ";
	cin >> secondNumber;

	cout << "Enter third number: ";
	cin >> thirdNumber;

	cout << "At least one of the numbers is positive : ";
	bool atLeastOnePositive = firstNumber > 0 || secondNumber > 0 || thirdNumber > 0; 

	/* в този момент ако поне едно от числата е положително променливата atLeastOnePositive ще
	   има стойност 'true'. Ако нито едн от числата не е положително, то тогава е 'false'. */

	if (atLeastOnePositive) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}


	// fourth part
	cout << "\n\n";
	cout << "Different digits test:\n\n";

	int fourDigitNumber, firstDigit, secondDigit, thirdDigit, fourthDigit;

	cout << "Enter four digit number: ";
	cin >> fourDigitNumber;

	if (fourDigitNumber < 1000 || fourDigitNumber >= 10000) {  
		/* тук проверяваме дали действително това е четирицифрено число */

		cout << "This is not a four digit number!";
		return 0;
	}

	/* малко математически ремайндър:

	   ако p = 10 * q + r,
	   то в C++ ще имаме следното:
	   							   p / 10 = q
	   							   p % 10 = r
	*/

	firstDigit = fourDigitNumber / 1000; /* поради начина на действие на '/'
											може сами да се убедите, че това
											наистина ще направи 
											firstDigit = на първата цифра на
											числото
										  */

	secondDigit = (fourDigitNumber / 100) % 10; /* тук използваме и '%'
												   за да получим втората цифра
												   на числото образувано от първите
												   две цифри, иначе казано втората
												   цифра на читирицфреното число
												   */

	thirdDigit = (fourDigitNumber / 10) % 10;   /* третата цифра */

	fourthDigit = fourDigitNumber % 10;			/* последната, или в случая четвъртата цифра */

	bool firstDiffSecond = (firstDigit != secondDigit); // != се оценява на 'истина', ако са различни стойности
	bool firstDiffThird = (firstDigit != thirdDigit);
	bool firstDiffFourth = (firstDigit != fourthDigit);
	bool secondDiffThird = (secondDigit != thirdDigit);
	bool secondDiffFourth = (secondDigit != fourthDigit);
	bool thirdDiffFourth = (thirdDigit != fourthDigit);

	bool differentDigits = (firstDiffSecond && firstDiffThird && firstDiffFourth && secondDiffThird && secondDiffFourth && thirdDiffFourth);

	cout << "The number " << fourDigitNumber << " has repeating digits: ";
	if (differentDigits) {
		cout << "false" << endl;
	} else {
		cout << "true" << endl;
	}

	return 0;
}