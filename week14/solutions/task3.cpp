#include<iostream>
using namespace std;

void pirntColumn(int i, int matrix[][50],int size)
{
    //спираме, когато size e 0
    if(size == 0)
        return;
    //на всяка стъпка печатаме i-тия елемент
    //на текущия ред
    cout<<matrix[0][i]<<endl;
    //викаме функцията с намелен с единица size
    //и ключовото (matrix+1), което ще измести
    //указателя matrix към следващия ред, а не
    //към следващия елемент от конкретния ред,
    //защото matrix сочи към поредица от указатели,
    //а не към поредица от елемент
    pirntColumn(i,(matrix+1),size-1);
}

int main()
{
    int matrix[][50]={{1,2,3},{4,5,6},{7,8,9}};
    pirntColumn(0,matrix,3);
}
