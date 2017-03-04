#include <iostream>
using namespace std;
bool isUpperTriangular(int arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i][j] != 0)
                /* за да видим дали е upper triangular
                   просто трябва да видим дали елементите
                   под главния диагонал са нули

                   a[i][j] е под главния диагонал <=> j < i
                   Вместо да проверяваме дали j < i, може за 
                   всяко i да обходим само тези j, които са
                   по-малки от i. Ако за поне една двойка
                   i, j не е изпълнено условието, то цялата
                   матрица не е триъгълна. */
                return false;
        }
    }
    /* ако функцията стигне до ред 20, значи не е прекъснала в 
       цикъла, което значи че не е намерила елемент, който не
       е 0 под главния диагонал, значи всички са нули => връщаме
       true */
    return true;
}


int main() {
    int arr[100][100];
    int size;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout  << "arr[" << i << "][" << j << "]=";
            cin >> arr[i][j];
        }
    }

    cout << "The matrix is upper triangular: " << isUpperTriangular(arr, size) << endl;

    return 0;
}
