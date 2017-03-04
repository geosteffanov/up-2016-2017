#include <iostream>
using namespace std;

int sumOfElements(int arr[],int size,int index)
{
    // рекурсията ще върви по индексите
    // като ще започва от индекс 0
    // и краят ще е, когато index
    // стане равно на size
    if(index==size)
        return 0;
    // ако не сме стигнали дъното на рекурсията
    // връщаме текущия елемент плюс сумата на
    // останалите елементи
    return arr[index]+sumOfElements(arr,size,index+1);
}

int main() {
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   cout<<sumOfElements(arr,10,0);
   return 0;
}
