#include <iostream>
#include <bitset>
using namespace std;
int numberBeforeIndex(int number, int index) {
    return number&((1<<(index - 1)) - 1);
    /*
       1 << index - 1 е
       2 на степен index - 1.
       2 на степен index - 1 , цялото - 1 в двоичен запис
       представлява index - 1 единици -> 1111....1 - index - 1 пъти.
       когато направим логическо и (&) последните index-1 цифри на нашето
       число се запазват, а преди тях стават 0.
    */
}

int main() {
    cout << numberBeforeIndex(9, 3);
}

