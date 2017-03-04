#include<iostream>
using namespace std;
//правим една проста помощна функция
//за да се упражним още с използването им
//и все пак да я използваме в основната
bool isInInterval(double a,double x, double y){
    return a>=x&&a<=y; //проста проверка дали а е в интервал х,у
}
bool arrAllInInterval(double arr[],int size,double x,double y){
    for(int i=0;i<size;i++){                    //обхождаме масива
        if(isInInterval(arr[i],x,y) == false)   //за всеки елемент проверяваме дали е в интервала
                                                //с помощта на нашата функция

           return false;   // ако сме срещнали елемент, който не е в интервала веднага връщаме false
    }
    return true;
}

int main(){

    double grades[]={5.2,4.3,2,3.5,6.0,5.4,5.8,4.9,6.0};
    cout<<arrAllInInterval(grades,9,2,6);
    cout<<endl;
    cout<<arrAllInInterval(grades,9,3,6);

}
