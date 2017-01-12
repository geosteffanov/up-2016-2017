#include <iostream>

using namespace std;
bool amIAnElement(int* setA, int sizeOfA, int element) {
    if (sizeOfA == 0)
        return false;
    if(setA[0] == element)
        return true;
    return amIAnElement(setA+1, sizeOfA - 1, element); /* setA + 1 , е указател към следващият елемент - както вече сме казали
                                                          setA + 1 , е еквивалентно на масива почващ от втория елемент на масива
                                                          setA и свършващ с последния елемент на масива setA. */
}
void intersectMe(int* setA, int* setB, int sizeOfA, int sizeOfB) {
    if (sizeOfA == 0)
        return;
    if (amIAnElement(setB, sizeOfB, *setA)) // ако текущият елемент на A се среща в B -> че се среща в сечението
                                            // печатаме го тогава (в противен случай не го печатаме) и продължаваме
                                            // напред, с останалите елементи
        cout << *setA << endl;
    intersectMe(setA + 1, setB, sizeOfA - 1, sizeOfB);
}

int main() {
    int setA[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int setB[] = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    intersectMe(setA, setB, 10, 10);

}

