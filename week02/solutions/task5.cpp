#include<iostream>
using namespace std;

int main(){

	//отново дефиниране и въвеждане на променливи
	//ще се прави в почти всяка задача

    double x, y;
    cout <<"Please input x: ";
    cin >> x;

    cout<<"Please input y: ";
    cin>> y;
	//три възможности за x: или е повече от 0, или е по-малко, или е равно
    if (x > 0) {
		//три възможности и за y
        if (y > 0) cout << "The point is in I quadrant" << endl;
        if (y < 0) cout << "The point is in IV quadrant" << endl;
        if (y == 0) cout << "The point is at the x-axis" << endl;
    }
    else if (x < 0) {
        if(y > 0) cout << "The point is in II quadrant" << endl;
        if(y < 0) cout << "The point is in III quadrant" << endl;
        if(y == 0) cout << "The point is at the x-axis" << endl;
    }
    else {
        if(y==0) cout<<"The point is the center of the coordinate plane"<<endl;
		//тук са пропуснати случаите, в които y е различно от 0, защото
		//щом х е 0, то точката е на ординатата
        else cout<<"The point is at the y-axis"<<endl;
    }

    return 0;
}