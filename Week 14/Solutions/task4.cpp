#include<iostream>
using namespace std;

//помощен аргумент crrIndex, за да знаем кой елемент
//трябва да отпечатаме
void printDiagonalHelper(int matrix[][50],int size,int crrIndex)
{
    //когато този помощен аргумент
    //стигне size, приключваме
    if(crrIndex == size)
        return;
    //на всяка стъпка печатаме
    //crrIndex елемента на текущия ред
    cout<< matrix[0][crrIndex] <<endl;
    //и викаме функцията със следващия ред и увеличен индекс
    printDiagonalHelper(matrix+1,size,crrIndex+1);
}

// тази функция се нарича wrapper на горната
// идеята е, че като искаме да ползваме функция
// която печата главен диагонал на матрица
// е много по-удобно да подадем просто матрицата
// и размерът й, а не да очакваме, че ще има
// някакви помощни аргументи
// по този начин се скрива действието на helper
// функцията
// този начин на програмиране е една добра практика
void printDiagonal(int matrix[][50],int size)
{
    printDiagonalHelper(matrix,size,0);
}
int main()
{
    int matrix[][50] = {{1,2,3},{4,5,6},{7,8,9}};
    printDiagonal(matrix,3);
}
