#include <iostream>
using namespace std;
/* искаме да можем да променяме стойността на размера на масива.
   както вече обсъдихме, ако подаваме самата стойност като int променлива
   всяка промяна върху нея всъщност се извършва върху стойността на копието
   което се създава при повикване на функцията
   Как оправихме този проблем? Като подавахме указател към променливата.
   Това правим и тук
*/
void balanceArithMean(double* array, int* size, int maxSize, double expectedAverage) {
    double crrSum = 0;
    for (int i = 0; i < *size; i++) {
        crrSum += *(array + i);
    }

    while(crrSum / (*size) > expectedAverage) {
        if (*size >= maxSize)
            return;
        *(array + *(size)) = 0;
        *(size) += 1;
    }

}
int main() {
    double array[50];
    for (int i = 0; i < 5; i++) {
        array[i] = 20;
    }
    int size = 5;
    int *sizePointer = &size;

    balanceArithMean(array, sizePointer, 50, 17);
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
}