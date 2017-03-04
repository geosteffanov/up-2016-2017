#include <iostream>
using namespace std;
int sumMatrix(int arr[][100], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}

int main() {
    int arr[100][100];
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "arr[" << i << "][" << j << "]=";
            cin >> arr[i][j];
        }
    }

    cout << "The sum of the elements is: " << sumMatrix(arr, size) << endl;
    return 0;
}
