#include <iostream>
#include <cstring>
using namespace std;
bool isSorted(int arr[],int size)
{
    for(int i=0;i<size-1;i++) // обърнете внимание докъде въртим цикъла
    {
        // ако има два съседни, такива че
        // първият е по-голям от втория
        // директно връщаме false
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}

int main() {

    int arr[] = {1 , 2 ,2 ,12 ,12 ,33};
    cout<<isSorted(arr,6)<<endl;

    int arr2[] = {1 , 2 ,3 ,12 ,2 ,33};
    cout<<isSorted(arr2,6);

    return 0;
}
