#include<iostream>
using namespace std;

int smallestDigit(int n){

    int min=9; //в тази променлива ще пазим най-малката цифра
               //в началото тя е 9
    while(n>0){
        int currentDigit=n%10;
        if(currentDigit<min)    //на всяка стъпка проверяваме дали текущата цифра е по-малка от min
            min=currentDigit;   //и ако сме намерили нещо, което е по-малко от min, променяме стойността на min
        n/=10;
    }
    return min;
}
int main(){

    cout<<smallestDigit(6532)<<endl;
    cout<<smallestDigit(60383)<<endl;
    return 0;
}
