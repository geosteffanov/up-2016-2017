#include<iostream>
#include<cstdlib>//добавяме тази библиотека, за да може да ползваме функцията, която генерира random число
using namespace std;

int main(){
	//дефинираме число и въвеждаме число, което ще е горна граница
	//на възможните стойности за тайното число
	//долната е 0 по подразбиране
    int n;
    int tries = 0;
    cout<<"Please input n: ";
    cin>>n;
    int secretNumber=rand()%n; //rand()%n ни генерира произволно число от 0 до n
							   //не е нужно да знаем как става това
							   //идеята е просто това число да е тайна за нас
    int guessNumber; //декларираме променлива, която ще въвеждаме на всяко завъртане на цикъла
    do{
        tries += 1;
        cout<<"Guess the number: ";
        cin>>guessNumber; //въвеждаме числото
        //проверка дали числото ни е по-голямо и по-малко от тайното
		//за да ни насочи към търсенето ни
		if(guessNumber>secretNumber){ 
            cout<<"The secret number is lower"<<endl;

        }
        else if(guessNumber<secretNumber){ // ползваме else if, защото ако ползваме само 
										   //else, тогава, ако сме познали числото
										   //т.е guessNumber==secretNumber
										   //условието на if-а ще е лъжа и ще се влезе директно
										   //ше се изпълни блокът на else-a без да се прави допълнителна проверка
            cout << "The secret number is higher" << endl;
        }
    }
    while(guessNumber!=secretNumber); //цикълът се върти, докато не познаем числото
									  //в момента, в който го познаем условието
									  //guessNumber!=secretNumber ще стане лъжа
    
    cout << "Congratulations!" << endl;
    cout << "You guessed the number correctly in only " << tries << " tries" << endl;
    return 0;

}
