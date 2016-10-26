#include <iostream>
#include <cmath>
using namespace std;
// познатата ни от предните задачи countDigits
int countDigits(int number) {
	int digitCount = 1;
	while (number > 9) {
		number = number / 10;
		digitCount++;
	}
	return digitCount;
}
/* проверяваме дали find е subNumber на search */
bool isSubNumber(int find, int search) {
	int numberOfDigits = countDigits(find); 
	// запазваме броя на цифрите в търсеното число


	while(search >= find && search > 0) {
		if (search % (int) pow(10, numberOfDigits) == find) {
			/* ако последните numberOfDigits цифри на search образуват
			 числото find -> find e subNumber на search */
			return true;
		}
		search = search / 10; // махаме последната цифра на search
	}
	return false; /* ако нито веднъж не сме срещнали числото find,
					 значи не е subNumber
				   */
}

int main() {

	cout << isSubNumber(1555, 12) << endl;
	cout << isSubNumber(13, 1) << endl;
	cout << isSubNumber(1001, 10000) << endl;
	cout << isSubNumber(0, 102) << endl;

}