#include<iostream>
using namespace std;
//задължително подаваме и аргумент size на функцията за да знаем
//докъде да въртим цикъла
bool member(int array[],int size,int value){

    for(int i=0;i<size;i++){
        if(array[i]==value)   //ако в някой момент намерим срещане
            return true;      //веднага връшаме true, защото няма
                              //нужда от повече търсене
    }
    //до този ред ще се стигне само ако
    //е нямало срещане на value, защото
    //ако е имало щяхме да побаднем в тялото на
    //if-а и да се върне true
    return false;
}

int main(){

    int array[]={1, 18, 29, 3, 14, 5};
    cout<<member(array,6,29)<<endl;
    cout<<member(array,6,30)<<endl;

}
