#include <iostream>
using namespace std;
/* с & означаваме референция, което е подобно на указател, но
   с нея се борави като с нормална променлива, тоест не е нужно
   да ползваме оператора за дереференциране.(*).
   така сме сигурни че след приключването на функцията, промените
   направени по променливата occurrences ще се запазят
*/
void count (int* arr, int size, int find, int& occurrences) {
    for (int i = 0 ; i < size; i++) {
        if (*(arr + i) == find)
            occurrences++;
    }

}
int main() {
    int arr[] = {1,2,1,1,3,4,5};
    int numberOfOnes = 0;
    count(arr, 7, 1, numberOfOnes);
    cout << numberOfOnes << endl;
}
