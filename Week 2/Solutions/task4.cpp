#include<iostream>
#include<cmath> // добавяме и cmath библиотеката, защото ще ползваме функцията pow
				// но всичко друго си е по познатия шаблон от таск 0
using namespace std;

int main(){

    double mass;   //познатото деклариране на променливи
	double height;

	// и познатото въвеждане
    cout<<"Please correctly input your mass in kg: ";
    cin>>mass;

    cout<<"Please correctly input your height in m: ";
    cin>>height;

    double bmi = mass / (pow(height, 2));//използване на функцията pow 
										 //в случая за повдигане height на втора степен 

    cout<<"Your BMI is: "<<bmi<<endl;
    return 0;
}