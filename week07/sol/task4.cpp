#include<iostream>
#include<cstring>
using namespace std;
//тук няма нужда да подаваме дължината на низа,
//защото както знаем при символните низове имаме
//терминираща нула
int myStrlen(char array[]){
    int i=0; //създаваме си брояч
    while(array[i]!='\0'){ //цикълът продължава до терминиращата нула, защото там е краят на низа
        i++;
    }
    return i;
}

int main(){

    char array[]="Hello group 6!";
    cout<<myStrlen(array);
}
