#include<iostream>
#include<cmath> //добавена е cmath с цел използване на pow
using namespace std;
int main(){
	//деклариране и въвеждане на координатите на точките 
    double x1,y1,x2,y2,x3,y3;
    cout<<"Please input x1: ";
    cin>>x1;

    cout<<"Please input y1: ";
    cin>>y1;

    cout<<"Please input x2: ";
    cin>>x2;

    cout<<"Please input y2: ";
    cin>>y2;

    cout<<"Please input x3: ";
    cin>>x3;

    cout<<"Please input y3: ";
    cin>>y3;

    double a,b,c;
	//изчисляване на дължините на страните,
	//използвайки формула за дължина на отсечка
	//между две дадени точки
    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    c=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
	
    double p=(a+b+c)/2; //намираме полупериметъра, за да можем после да сметнем лицето по херонова формула
    double area=sqrt(p*(p-a)*(p-b)*(p-c));
    double height;
	//намиране на най-голямата страна
	//3 възможни случая:
	//или а е повече от b и с
	//или b е повече от а и с
	//или с е повече от а и b
	if (a >= b&&a >= c) {
		height = 2 * area / a;
	}
	else if (b >= a&&b >= c) {
		height = 2 * area / b;
	}
	else if (c >= a&&c >= b){
		height = 2 * area / c;
	}
    cout<<"The height is: "<<height<<endl;
    return 0;
}