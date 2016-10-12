#include <iostream>
using namespace std;
/* това вече ви е "познато".
   приемете го като шаблон, 
   към който да се придържате
 */

int main() {

	double numerator; // така се дефинира число, което може да има нецели числени стойности
					  // не е най-подходящото име, но деленето представлява намиране на 
					  // стойността на една дроб и това е числителят.

	double denominator; // дефинираме знаменателят 

	cout << "Enter numerator: ";
	cin >> numerator;  
	
	cout << "Enter denominator: ";
	cin >> denominator;
	
	/* въвеждането на стойностите е както във всяка
	   друга задача
	*/

	/* сега проверяваме дали знаменателят е 0 с оператора за сравнение ==
	   a == b , тогава когато а и b имат едни и същи стойности */
	if (denominator == 0) /* деца, не делете на това вкъщи, защото е недефинирано*/ {
		cout << "Division by zero not allowed!" << endl; /* замалко да разделим на 0, но проверихме
															защото сме предвидливи */

	} else {
		cout << "Result from division is: " << numerator / denominator << endl;
	}

	return 0; // както казахме - след всичко, което е написано сложихме един return 0; и 
			  // затворихме скобите на main. Ако сте забравили погледнете шаблона 
			  // в края на нулевата задача.
}