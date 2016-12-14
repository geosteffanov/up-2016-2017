#include <iostream>
#include <bitset>
using namespace std;
int power(int num,int p){
    int result=1;
    for(int i=0;i<p;i++){
        result*=num;
    }
    return result;
}


int eraseDigitBitwise(int number, int index) {
    int result;
    //разбиваме числото на част преди цифрата, част след цифрата
    int beforeIndex=number&((1 << (index - 1))-1); // отделям частта, която е преди цифрата, която ще се премахва,
                                               // защото после ще я прибавям към резултата

    int afterIndex=(number >> index) << (index - 1); // отделям частта, която е след цифрата, която ще се премахва,
                                                                 // защото и нея ще прибавя към резултата
    result=beforeIndex+afterIndex;
    return result;
}


int eraseDigit(int number,int index){
    int result;
    //разбиваме числото на част преди цифрата, част след цифрата
    int beforeIndex=number%(power(2,index-1)); // отделям частта, която е преди цифрата, която ще се премахва,
                                                // защото после ще я прибавям към резултата

    int afterIndex=(number/(power(2,index)))*(power(2,index-1)); // отделям частта, която е след цифрата, която ще се премахва,
                                                                 // защото и нея ще прибавя към резултата

    result=beforeIndex+afterIndex;
    return result;
}


int main() {
    int number = 0b1001010;
    int index = 4;

    cout << bitset<6> (eraseDigitBitwise(number, index));

    return 0;
}


