#include<iostream>
using namespace std;
//отново собствено дефинирана
//power функция, за да работи коректно
//с целочислен резултат
int power(int num,int p){
    int result=1;
    for(int i=0;i<p;i++){
        result*=num;
    }
    return result;
}
void printBinary(int number){
    int result=0; // ще трупаме резултата тук

    int counter=0; //брояч, който ще ни казва
                   //колко цифри има резултата
                   //за да можем на всяка стъпка
                   //коректно да прибавяме 1 или 0
                   //към числото
    while(number>=1){
        result+=number%2*power(10,counter); //на всяка стъпка към резултата
                                            //прибавяме остатъка на числото при деление на 2
                                            //по 10 на степен текущата дължина на резултата
        number/=2;
        counter++;
    }
    cout<<result;
    cout<<endl;
}
int main(){
    printBinary(16);
    printBinary(8);
    printBinary(7);
    printBinary(1);
    printBinary(10);
    printBinary(5);
}


