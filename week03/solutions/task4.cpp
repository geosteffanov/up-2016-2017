#include<iostream>
using namespace std;
//дефинираме фунцкия, която ще пресмята
//двойния факториел на дадено число
//по-надолу ще видите алтернативно решение
//без използване на фунцкия
int doubleFactorial(unsigned int number){
    int result=1;//една променлива, в която ще се пази резултата
    if(number%2==0){//проверка дали числото е четно
					//защото ако е , то тогава умножението трябва да почне от 2, а не от 1
					//пример: 4!!=4*2, 8!!=8*6*4*2,  7!!=7*5*3*1
        int factor=2; //начален множител
        while(factor<=number){//докато началният множител не стане равен на числото
            result*=factor;   //умножаваме текущия резултат с текущия множител
            factor+=2;        //и увеличаваме множителя с 2,
									  //примерна симулация на цикъла ако 
									  //number е 8
									  //първа стъпка result=factor*result, т.е result=2*1=2
									  //factor става равен на 4
									  //втора стъпка result=factor*result, т.е result=4*2=8
									  //factor става равен на 6
									  //трета стъпка result=factor*result, т.е result=8*6=48
									  //factor става равен на 8
									  //четвърта стъпка result=factor*result, т.е result=48*8=384
									  //factor става равен на 10
									  //повече стъпки няма,защото е нарушено условието factor<=number
        }
    }
    else{//абсолютно аналогични разсъждения, просто началният множител е 1
        int factor=1;
        while(factor<=number){
            result*=factor;
            factor+=2;
        }
    }
    return result;
}
int main(){
	//викане на фунцкията
    cout<<doubleFactorial(4)<<endl; 
    cout<<doubleFactorial(8)<<endl;
    cout<<doubleFactorial(5)<<endl;
    cout<<doubleFactorial(9)<<endl;
    return 0;
}


//решение без фунцкия
#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<"Please input number: ";
	cin>>number;
    int result=1;
    if(number%2==0){
        int startingFactor=2;
        while(startingFactor<=number){
            result*=startingFactor;
            startingFactor+=2;
        }
    }
    else{
        int startingFactor=1;
        while(startingFactor<=number){
            result*=startingFactor;
            startingFactor+=2;
        }
    }
	cout<<"The double factoriel of "<<n<< " is: "<<result;
    return 0;
}
//както виждате, на практика това което сме направили
//е да преместим кодът от функцията doubleFactorial 
//в кода на main, иначе разсъжденията са същите


