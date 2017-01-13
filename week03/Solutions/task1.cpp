#include<iostream>
using namespace std;
int main(){
	//дефинираме променлива и въвеждаме стойността и от клавиатурата
    int number;
    cout<<"Please input the number: ";
    cin>>number;
	//използване на switch за да определим кой е месецът
	//алтернативно решение е използване на много if-ове
	//което не е препоръчително
    switch(number){
        case 1:cout<<"January"<<endl;break;
        case 2:cout<<"February"<<endl;break;
        case 3:cout<<"March"<<endl;break;
        case 4:cout<<"April"<<endl;break;
        case 5:cout<<"May"<<endl;break;
        case 6:cout<<"June"<<endl;break;
        case 7:cout<<"July"<<endl;break;
        case 8:cout<<"August"<<endl;break;
        case 9:cout<<"September"<<endl;break;
        case 10:cout<<"October"<<endl;break;
        case 11:cout<<"November"<<endl;break;
        case 12:cout<<"December"<<endl;break;
        default:cout<<"No such month"<<endl;break; // default случай, защото потребителят може да е въвел
												   // некоректно число (пример: -53)

    }
    return 0;
}
