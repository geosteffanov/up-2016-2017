#include <iostream>
#include <cstring>
using namespace std;
//функци¤, ко¤то провер¤ва дали дадена буква е гласна
//не забрав¤ме и главните гласни букви
bool isVowel(char a){

    return a=='a'||
           a=='e'||
           a=='i'||
           a=='o'||
           a=='u'||
           a=='y'||
           a=='A'||
           a=='E'||
           a=='I'||
           a=='O'||
           a=='U'||
           a=='Y';
}

int countVowels(char arr[]){
    //класическо обхождане като за всеки елемент провер¤ваме дали е гласна буква и ако е
    //увеличаваме бро¤ча
    int count=0;
    for(int i=0;i<strlen(arr);i++)
    {
        if(isVowel(arr[i]))
            count++;
    }
    return count;
}
int main(){

    cout<<countVowels("Hello students! Are you okay today?")<<endl;
}
