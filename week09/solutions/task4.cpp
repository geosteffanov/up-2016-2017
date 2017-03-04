#include <iostream>
using namespace std;

int deflatten(int arr[], int columns, int i, int j) {
    /* Представете си този пример :
                                                               1 2 3
        1 2 3 4 5 6 7 8 9 -> за който искаме да изглежда така: 4 5 6
                                                               7 8 9
        всички редове са по columns елемента => за да стигнем
        до i-тата колонка, трябва да минем пре i * columns елементи
        преди нея. В нея всеки елемент има "индекс" от 0 до columns
        => първият елемент, на и-тата колонка ще е с индекс
        i * columns а последният, ще е с индекс i * columns + columns - 1 =
        т.е. j-тият елемент ще е с индекс i * columns + j
    */

    return arr[i * columns + j];
}

int main() {
    int arr[] = { 1, 2, 3,
                  4, 5, 6,
                  7, 8, 9 };
    int i, j;
    cout << "Enter i: ";
    cin >> i;
    cout << "Enter j: ";
    cin >> j;
    cout << "arr[" << i << "][" << j << "]= " << deflatten(arr, 3, i, j) << endl;


    return 0;
}
