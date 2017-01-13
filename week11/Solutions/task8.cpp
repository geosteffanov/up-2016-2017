#include <iostream>
using namespace std;

bool isSumOfTwoElements(int n,int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int k=0;k<size;k++)
        {
            if(i!=k && (arr[i]+arr[k])==n)
                return true;
        }
    }
    return false;
}

bool predicate(int arr1[],int size1,int arr2[],int size2)
{
    for(int i=0;i<size1;i++)
    {
        if(!isSumOfTwoElements(arr1[i],arr2,size2))
            return false;
    }
    return true;
}

int main()
{
    int arr1[]={4,6,7};
    int arr2[]={3,1,5,6};

    cout<<predicate(arr1,3,arr2,4)<<endl;
}
