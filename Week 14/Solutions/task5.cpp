#include <iostream>
using namespace std;

void deleteElement(int *arr, int &size, int index)
{
    if(index < 0 || index >= size)
        return;

    for(int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
}

int main()
{
    int arr[] = {1,2,3};
    int size = 3;
    deleteElement(arr,size,1);
    for(int i = 0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
