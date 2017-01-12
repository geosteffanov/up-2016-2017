#include <iostream>
#include <iomanip>
using namespace std;
/* е ако масивът е празен , очевидно element не принадлежи на масива
   ако е непразен - сравняваме с първия елемент - ако съвпадат, значи
   element принадлежи на setA, ако не, проверяваме в множеството образувано
   от setA \ {setA[0]} -> тоест от всички останали елементи */

bool amIAnElement(int* setA, int sizeOfA, int element) {
    if (sizeOfA == 0)
        return false;
    if(setA[0] == element)
        return true;
    return amIAnElement(setA+1, sizeOfA - 1, element); /* setA + 1 , е указател към следващият елемент - както вече сме казали
                                                          setA + 1 , е еквивалентно на масива почващ от втория елемент на масива
                                                          setA и свършващ с последния елемент на масива setA. */
}

int main() {
    int set[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << boolalpha << amIAnElement(set, 8, 2) << "\n";
    cout << boolalpha << amIAnElement(set, 8, 9) << "\n";

}
