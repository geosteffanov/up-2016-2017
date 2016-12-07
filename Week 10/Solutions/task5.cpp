#include <iostream>
using namespace std;

int fibN(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    return fibN(n-2)+fibN(n-1);
}

int main () {

    cout<<fibN(3)<<endl;
    cout<<fibN(4)<<endl;
    cout<<fibN(5)<<endl;
    cout<<fibN(6)<<endl;
    cout<<fibN(50)<<endl;
    return 0;
}
