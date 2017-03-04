#include <iostream>
using namespace std;
/* стандартна функция за намиране на максимален елемент
   в масив */
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

void printMax(int arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        /* тук демонстрираме, че ако arr е двумерен масив
           освен че може да достъпим конкретен елемент, чрез 
           arr[i][j], можем и да достъпим конкретен ред
           (като масив) чрез arr[i]. arr[i] е масив, както споменахме
           на упражнения, което значи че можем
           да повикаме функцията findMax с аргумент arr[i]. */
        cout << findMax(arr[i], size) << endl;
    }
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

    printMax(arr, size);
    return 0;
}
