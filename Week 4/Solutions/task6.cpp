#include<iostream>
#include<math.h>
using  namespace std;
//дефинирам си собствена функция power, която е еквивалентна на pow,
//но връщаша цяло чисо, за да нямам проблеми после
int power(int num,int p){
    int result=1;
    for(int i=0;i<p;i++){
        result*=num;
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
    int beforeIndex=number%(power(10,index-1)); // отделям частта, която е преди цифрата, което ще се заменя,
                                                // защото после ще я прибавям към резултата

    int atIndex=digit*(power(10,index-1));  // образуваме частта с новата цифра

    int afterIndex=(number/(power(10,index)))*(power(10,index)); // отделям частта, която е след цифрата, която ще се заменя,
                                                                 // защото и нея ще прибавя към резултата

    result=beforeIndex+atIndex+afterIndex;
    return result;
}

int main(){
    int newNumber = replaceDigitAt(1234567, 2, 5);
    cout<<newNumber<<endl;
    newNumber = replaceDigitAt(newNumber, 3, 2);
    cout<<newNumber<<endl;
}
