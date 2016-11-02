#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Please input a number: ";
    cin>>n;
    int result=0;
    for(int i=1;i<=n;i++){
        char symbol;
        cout<<"Input char number "<<i<<": ";
        cin>>symbol;
        int asciCode=(int)symbol; //този каст (int) на практика ще ни върне аски кода на този символ
        result=result+asciCode;
    }

    char average=(char)(result/n); //правим каст (char) на целия израз result/n и този каст ще ни даде символа на съответния аски код
    cout<<"The average char is "<<average<<endl;
    return 0;


}
