#include <iostream>
using namespace std;
/* помощна функция за сумиране */
int sumArr(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
void sortArrays(int **arr, int size, int* subArrSize) {
    /* сортираме по метода на мехурчето */
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (sumArr(*(arr + j), *(subArrSize + j)) > sumArr(*(arr + j + 1), *(subArrSize + j + 1))) {
                int* temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;

                int tempNr = *(subArrSize + j);
                *(subArrSize + j) = *(subArrSize + j + 1);
                *(subArrSize + j + 1) = tempNr;
            }
        }
    }
}
int main() {
       int firstArr[] = {1,2,3};
       int secondArr[] = {1,6,7, 8};
       int thirdArr[] = {5, 6, 7};
       int fourthArr[] = {3,3};
       int sizes[] = {3,4,3,2};
       int* arrays[10];
       arrays[0] = firstArr;
       arrays[1] = thirdArr;
       arrays[2] = secondArr;
       arrays[3] = fourthArr;
       sortArrays(arrays, 4, sizes);

       for (int i = 0; i < 4; i++) {
            for (int j = 0; j < sizes[i]; j++) {
                cout << arrays[i][j]  << " ";
            }
            cout << endl;
       }


}
