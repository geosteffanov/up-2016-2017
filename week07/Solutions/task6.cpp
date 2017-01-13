#include<iostream>
using namespace std;

int main(){

    int array[50];

    int size;
    cout<<"Please input the size of the array : ";
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Please input array["<<i<<"] : ";
        cin>>array[i];
    }
    //това е selection sort
    //идеята му е, че на всяка стъпка търсим най-малкия елемент
    //и го слагаме на текущата позиция
    //на първа стъпка ще намерим глобално най-малкия и ще го сложим на първа позиция
    //на втора стъпка ще намерим най-малкия от останалите и ще го сложим на втора позиция
    //и т.н до края на масива
    //препоръчително е да прочетете в интернет и за други начини за сортиране

    for(int i=0;i<size;i++){
        int min_pos=i;
        for(int k=i+1;k<size;k++){
            if(array[k]<array[min_pos]){
                min_pos=k;
            }
        }
        //класически начин за разменяне стойности на две променливи
        //с помощна трета променлива
        int temp=array[i];
        array[i]=array[min_pos];
        array[min_pos]=temp;
    }
    cout<<"The array after the sort is : ";

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    cout<<endl;

}
