#include<iostream>
using namespace std;
//познатите от предната задача sumOfDigits и haveEqualSums
int sumOfDigits(int number) {
	int sum = 0;
	while (number > 0) {
		sum = sum + number % 10;
		number = number / 10;
	}

	return sum;
}
bool haveEqualSums(int firstNumber, int secondNumber) {
	return (sumOfDigits(firstNumber) == sumOfDigits(secondNumber));
}
//проста фунцкия, която обхожда всички числа в дадения интервал
//и прави проверката haveEqualSums, и ако резултатът е истина печата
//текущото число
void printAll(int number,int startOfInterval, int endOfInterval){
    for(int i=startOfInterval;i<=endOfInterval;i++){
        if(haveEqualSums(number,i))
            cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    printAll(5,3,100);
}


