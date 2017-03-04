#include <iostream>
#include <cmath>
using namespace std;

int power(int num,int p){
    int result = 1;
    for(int i = 0;i < p;i++){
        result *= num; // същото като result = result * num;
    }

    return result;
}

int replaceDigitAt(int number,int index,int digit){
    int result;
    //начинът, по който ще процедираме е следният:
    //ако искаме да сменим цифрата 6 в 1234567 с цифрата 5,
    //това което ще направим е да образуваме резултата r
    //като сума на  1234500 , 50 и 7, т.е r=1234500+50+7
    //т.е разбиваме числото на част преди цифрата, част след цифрата
    //и част с новата цифра
    int beforeIndex = number % (power(10, index - 1)); // отделям частта, която е преди цифрата, което ще се заменя,
                                                // защото после ще я прибавям към резултата

    int atIndex = digit * (power(10, index - 1));  // образуваме частта с новата цифра

    int afterIndex = (number / (power(10, index))) * (power(10, index)); // отделям частта, която е след цифрата, която ще се заменя,
                                                                 // защото и нея ще прибавя към резултата

    result = beforeIndex + atIndex + afterIndex;
    return result;
}

int countDigits(int number) {
	int digitCount = 1;
	while (number > 9) {
		number = number / 10;
		digitCount++;
	}
	return digitCount;
}

bool hasDigitAt(int number, int index, int digit) {
	if (index > countDigits(number)) {
		return false;
	}

	number = number / (int) pow(10, index - 1);
	return (digit == number % 10); 
}

int switchDigits(int number, int oldDigit, int newDigit) {
	int digitsNumber = countDigits(number);
	int resultNumber = number; // резултатът, който ще връщаме

	for (int i = 0; i < digitsNumber; i++) {  
		if (hasDigitAt(resultNumber, i + 1, oldDigit)) {
			resultNumber = replaceDigitAt(resultNumber, i + 1, newDigit);
			/* ако на дадена позиция има старата цифра
			   resultNumber става равно на число, в което
			   тя е заменена с новата
			*/
		}
	}

	return resultNumber;
}



int main() {
	int number;

	number = switchDigits(535385, 3, 5);
	number = switchDigits(number, 5, 8);
	cout << number << endl;

} 