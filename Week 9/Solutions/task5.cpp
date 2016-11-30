#include <iostream>
using namespace std;
bool oddsVsEvens(int arr[][100], int size) {
    unsigned int evenCount = 0;
    unsigned int oddCount = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] % 2 == 0)
                evenCount++;
            else oddCount++;
        }
    }
    return (evenCount > oddCount);
}

int main () {
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

    cout << "Evens are more than odds: " << oddsVsEvens(arr, size);

    return 0;
}
