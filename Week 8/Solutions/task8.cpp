#include<iostream>
#include<cstring>
using namespace std;

bool testParantheses(char arr[]){
    int count=0;
    //ще имаме един брояч, който ще се увеличава с 1, ако срещнем ( и се намаля с 1
    //ако срещнем )
    //идеята е, че ако в някакъв момент броячът стане по-малък от 0 това ще означава, че сме натрупали много ),които
    //не са били отворени никъде, т.е веднга връщаме false
    //ако пък се извърти цикъла, накрая трябва да проверми дали броячът е занулен, т.е дали има равен брой ( и )
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='(')
            count++;
        if(arr[i]==')')
            count--;
        if(count<0)
            return false;
    }
    return count==0;

}

int main(){

    cout<<testParantheses("( ( ) ( ) )")<<endl;
    cout<<testParantheses("( ( ( ( ) ) ) )")<<endl;
    cout<<testParantheses("( ( ( ( ) ) ) ( ")<<endl;
    cout<<testParantheses("( ( ( (  ) ( ))))()")<<endl;

}
