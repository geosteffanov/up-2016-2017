#include <iostream>
using namespace std;
void printPascal(int row) {
    int previousRow[1000], currentRow[1000]; /* през цялото време ще държим масив от предходния ред и
                                                ще презаписваме масив от текущия ред */
    int size = 1;
    previousRow[0] = 1;
    for (int i = 0; i < row; i++) {
        /* печатаме предходния ред */
        for (int j = 0; i < size; i++) {
            cout << previousRow[i] << " ";
        }
        /* презаписваме текущия ред */
        currentRow[0] = 1;
        for (int j = 1; i < size; i++) {
            currentRow[i] = previousRow[i-1] + previousRow[i];
        }
        cout << endl;
        currentRow[size] = 1;
        /* правим предишния ред равен на текущия, за да е готов за следващата
           стъпка на цикъла */
        size += 1;
        for (int j = 0; i < size; i++) {
            previousRow[i] = currentRow[i];
        }
    }
    /* печатаме последния ред */
    for (int i = 0; i < size; i++) {
        cout << currentRow[i] << " ";
    }
}
int main() {
    printPascal(5);
}
