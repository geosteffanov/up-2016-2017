#include <iostream>
using namespace std;
bool inArray(int arr[], int size, int* pointer) {
    return (arr <= pointer) && (pointer <= (arr + size - 1)); // указателите са адреси, а адресите съвсем спокойно
                                                              // могат да поддържат някои логически и логични операции,
                                                              // като например равенство и сравнение.
    /* ако pointer сочки към някой елемент на масива, то (понеже елементите на масива са с последователни адреси в паметта)
       pointer трябва да има стойност (адрес на променлива) >= стойността адрес на първия елемент на масива и
       <= стойността адрес на последния елемент на масива
    */
}

int main() {
    int array[] = { 1, 2, 3, 4, 5, 6};
    int* pointer = &array[2];
    cout << inArray(array, 6, pointer) << endl;
    int otherVar = 3; /* otherVar е създадена след създаването на масива => otherVar няма да се намира измежду елементите на масива,
                         тъй като за нея се е заделил съвсем отделен адрес */
    int* pointer2 = &otherVar;
    cout << inArray(array, 6, pointer2);
    return 0;
}
