#include <iostream>
using namespace std;

bool sameDiagonals(int matrix[100][100],int size)
{
    //подходът ни ще е следният:
    //първо в един масив ще запазим
    //елементит на главния диагонал,
    //а после в друг масив ще запазим
    //елементите на вторичния диагонал
    //този подход не е най-ефективен
    //но е много лесен за разбиране и
    //лесно може да разберем какво не работи
    //ако има проблем, защото логически е много
    //добре структурирано решението
    int mainDiagonal[100];
    int secondDiagonal[100];

    for(int i=0;i<size;i++)
    {
        mainDiagonal[i]=matrix[i][i]; // елементите по главния диагонал
    }
    for(int i=size;i>=1;i--)
    {
        secondDiagonal[size-i]=matrix[size-i][i-1]; //елементите по вторичния диагонал (игра с индекси)
    }

    //това тук вече е познато обхождане
    for(int i=0;i<size;i++)
    {
        if(mainDiagonal[i]!=secondDiagonal[i])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int matrix[100][100] = {{1,2,1},
                        {3,4,5},
                        {7,8,7}};
    cout<<sameDiagonals(matrix,3)<<endl;

    int matrix1[100][100] = {{1,2,3},
                        {3,4,5},
                        {7,8,7}};
    cout<<sameDiagonals(matrix1,3)<<endl
    ;



}
