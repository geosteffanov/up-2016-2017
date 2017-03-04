#include <iostream>
using namespace std;
void digitize(int arr[], int number) {
    arr[0] = 0;
    while (number > 0) {
        arr[arr[0] + 1] = number % 10;
        number /= 10;
        arr[0] += 1;
    }
    int size = arr[0];
    for (int i = 0; i < size / 2; i++) {
        /* тази размяна е стандартната, но
           тъй като първият елемент е броят на цифрите,
           всички индекси са увеличени с 1 */

        int temp = arr[i + 1];
        arr[i + 1] = arr[size - i];
        arr[size - i] = temp;
    }
}

int main() {
    int arr[8];
    int number;
    cout << "Enter number: ";
    cin >> number;
    digitize(arr, number);
    int size = arr[0] + 1;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "]= " << arr[i] << endl;
    }

    return 0;
}
