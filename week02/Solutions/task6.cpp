#include<iostream>
using namespace std;
int main(){
	//деклариране и въвеждане на променливите
    double a,b,x;
    cout<<"Please input a: ";
    cin>>a;

    cout<<"Please input b: ";
    cin>>b;

    cout<<"Please input x: ";
    cin>>x;
	
    bool isInInterval=(x>=a&&x<=b); //дефиниране на булева променлива, която приема резултата на логически израз
									//изразът е логически, защото са използвани логически оператори
									//повече за логическите оператори в useful info
									//naming конвенцията е спазена

	if (isInInterval) { // допустимо е да се ползва  if(isInInterval)
						// защото isInInterval е булева променлива
		cout << "x is in [ " << a << "; " << b << " ]" << endl; 
	}															 
	else {
		cout << "x is not in [ " << a << "; " << b << " ]" << endl;
	}
	return 0;
}