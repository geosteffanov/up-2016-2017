#include<iostream>
#include<cstring>
using namespace std;
//тук няма нужда да подаваме дължината на низа,
//защото както знаем при символните низове имаме
//терминираща нула
int countOccurences(char array[], char symbol){
    int occurences=0; //един брояч, в който ще празим броя на срещанията
    for(int i=0;i<strlen(array);i++){
        if(array[i]==symbol) //при среща на символа
            occurences++;    //увеличаваме брояча , simple as that
    }
    return occurences;
}

int main(){
    char array[]="Hello group 6!";
    cout<<countOccurences(array,'l');
    cout<<countOccurences(array,'o');
    cout<<countOccurences(array,'b');
}
