#include<iostream>
using namespace std;

//нишо ново в тази функция
int sumOfElements(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

//нишо ново и в тази функция
int productOfElements(int arr[],int size)
{
    int product = 1;
    for(int i=0;i<size;i++)
    {
        product*=arr[i];
    }
    return product;
}

int sumOfProductOfRows(int arr[20][20],int rows,int cols)
{
    int sum = 0;
    for(int i=0;i<rows;i++)
    {
        sum+=productOfElements(arr[i],cols); //за всеки ред на матрицата arr[i],
                                             //който представлява масив, викаме
                                             //вече написаната от нас функция
                                             //за намиране на прозиведението на
                                             //елементите на масив
    }
    return sum;
}

int productOfSumOfRows(int arr[20][20],int rows,int cols)
{
    int product = 1;
    for(int i=0;i<rows;i++)
    {
        product*=sumOfElements(arr[i],cols); //аналогично е и тук
    }
    return product;
}
int main(){

    int arr[] = {1,2,3,4};
    int matrix[20][20] = {{1,2,3},
                        {3,2,3},
                        {4,1,1}};

    cout<<sumOfElements(arr,4)<<endl;
    cout<<productOfElements(arr,4)<<endl;
    cout<<sumOfProductOfRows(matrix,3,3)<<endl;
    cout<<productOfSumOfRows(matrix,3,3)<<endl;



}
