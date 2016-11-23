#include <iostream>
using namespace std;
bool formsArithProg(double arr[], int size) {
    if (size == 1) {
        return true;
    }
    /* ако arr наистина образува аритметична прогресия
       то разликата на аритметичната прогресия ще е
       arr[i + 1] - arr[i] = arr[1] - arr[0]; */
    double difference = arr[1] - arr[0];
    for (int i = 1; i < size - 1; i++) {
        if (arr[i + 1] - arr[i] != difference)
            return false;
            /* директно казваме че не е вярно, ако срещнем
               два елемента с разлика различна от очакваната */
    }

    /* ако досега не сме срещнали два елемента с
       разлика различна от differene, то значи всички
       имат разлика = difference. => че наистина е
       аритметична прогресия */
    return true;
}

int main() {
    double arr[10];
    int size;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0 ; i < size; i++) {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }

    cout << "\n\nThe array forms an arithmetic progression: " << formsArithProg(arr, size);
    return 0;
}
