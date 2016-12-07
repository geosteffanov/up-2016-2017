#include <iostream>
#include <cmath>
using namespace std;

double length(int vector[],int size)
{
    /* формулата за дължина на вектор v(v1,v2,v3,...,vn)
     * е sqrt(v1*v1 + v2*v2 + ... + vn*vn
     */
    double sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=vector[i]*vector[i]; // първо в една променлива натрупваме сумата от квадратите
    }
    return sqrt(sum); //и накрая я коренуваме
}
int main()
{
    int vector[2] = {3 , 4};

    cout<<length(vector,2)<<endl;

    return 0;
}
