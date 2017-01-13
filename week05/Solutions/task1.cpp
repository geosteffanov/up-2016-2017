#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"Please input the number: ";
    cin>>number;
    switch(number){
        case 12: //ако number e 12 ще се изпълни всичко надолу до break
                 //защото в case 12 не сме сложили break
                 //същото важи и за другите такива случаи
                 //по този начин си спестяваме малко писане
                 //другият вариант е за всеки случай да пишем какво се изпълнява
        case 1:
        case 2: cout<<"Winter"<<endl;break;
        case 3:
        case 4:
        case 5: cout<<"Spring"<<endl;break;
        case 6:
        case 7:
        case 8: cout<<"Summer"<<endl;break;
        case 9:
        case 10:
        case 11: cout<<"Autumn"<<endl;break;
        default: cout<<"Very stupid input"<<endl; break;
    }
    return 0;
}
