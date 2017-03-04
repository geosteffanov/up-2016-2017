#include<iostream>
using namespace std;
//пак си дефнирам собствена power, защото ми прави проблеми pow
int power(int num,int p){
    int result=1;
    for(int i=0;i<p;i++){
        result*=num;
    }
    return result;
}
//познатите от предната задача countDigits и isSubNumber
int countDigits(int number) {
	int digitCount = 1;
	while (number > 9) {
		number = number / 10;
		digitCount++;
	}
	return digitCount;
}

bool isSubNumber(int find, int search) {
	int numberOfDigits = countDigits(find);

	while(search >= find) {
		if (search % power(10, numberOfDigits) == find) {
			return true;
		}
		search = search / 10;
	}
	return false;
}
//проста фунцкия, която обхожда числата от 1 до number
//и ги печата, ако отговарят на условието isSubNumber
void printAllSubNumbers(int number){
    for(int i=1;i<=number;i++){
        if(isSubNumber(i,number))
            cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    printAllSubNumbers(120);

}
