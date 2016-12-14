#include <iostream>
using namespace std;
void printDiamond(int size) {
    int maxSize = 2*size - 1;
    for (int i = 0; i < maxSize; i+=2) {
        for (int j = 1; j < maxSize - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << 8;
            if (j != i) {
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int i = maxSize - 3; i >= 0; i-=2) {
        for (int j = 1; j < maxSize - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << 8;
            if (j != i) {
                cout << " ";
            }
        }
        cout << endl;
    }

}

int main() {
    for (int i = 0 ; i < 20; i++) {
        printDiamond(i); cout << "\n\n\n\n";
    }
}
