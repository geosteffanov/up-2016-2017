#include<iostream>
using namespace std;
int main(){
    const char a='a';
    double bankAccount=25;
    cout<<"Possible products:"<<endl;
    cout<<"a)Pineapple"<<endl;
    cout<<"b)Banitsa"<<endl;
    cout<<"c)Waffle"<<endl;
    cout<<"d)Vodka"<<endl;
    cout<<"e)Bread"<<endl;
    cout<<"f)Kebapche"<<endl;

    cout<<"Please choose product: ";
    char c;
    cin>>c;
    switch(c){
    //тази задача е пример
    //че в кейсовете може да има повече от един израз
    case a:
        if(bankAccount-2>=0){
            bankAccount-=2;
            cout<<"You have bought a pineapple and you have "<<bankAccount<<" money left."<<endl;
        }
        else
            cout<<"You don't have enough money!"<<endl;
        break;
    case 'b':
          if(bankAccount-1.1>=0){
            bankAccount-=1.1;
            cout<<"You have bought a banitsa and you have "<<bankAccount<<" money left."<<endl;
        }
        else
            cout<<"You don't have enough money!"<<endl;
        break;
    case 'c':
          if(bankAccount-1.1>=0){
            bankAccount-=1.1;
            cout<<"You have bought a waffle and you have "<<bankAccount<<" money left."<<endl;
        }
        else
            cout<<"You don't have enough money!"<<endl;
        break;
    case 'd':
          if(bankAccount-40>=0){
            bankAccount-=40;
            cout<<"You have bought a vodka and you have "<<bankAccount<<" money left."<<endl;
        }
        else
            cout<<"You don't have enough money!"<<endl;
        break;
    case 'e':
          if(bankAccount-1>=0){
            bankAccount-=1;
            cout<<"You have bought a bread and you have "<<bankAccount<<" money left."<<endl;
        }
        else
            cout<<"You don't have enough money!"<<endl;
        break;
    case 'f':
          if(bankAccount-1.5>=0){
            bankAccount-=1.5;
            cout<<"You have bought a kebapche and you have "<<bankAccount<<" money left."<<endl;
        }
        else
            cout<<"You don't have enough money!"<<endl;
        break;
    default: cout<<"Invalid input"<<endl;
    }
    return 0;
}
