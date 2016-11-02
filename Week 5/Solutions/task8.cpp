#include<iostream>
using namespace std;

void printWord(int number){
    while(number>0){
        char currentChar='a'+ number%26; //това което ще направи 'а'+ number%26 e: към аски кода на 'а' прибавя числото number%26
                                         //и после полученото число го разглежда като аски код и го превръща в съответния символ на този аски код
        cout<<currentChar;
        number/=26;
    }
}
int main(){

    printWord(5725);
}
