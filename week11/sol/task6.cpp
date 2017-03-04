#include <iostream>
using namespace std;


void boolify(char str[], bool arr[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        switch(str[i]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            arr[i] = true;break;
        default:
            arr[i] = false;break;
        }
    }
}

int main() {
    bool boolValues[20];
    char word[] = "windows";
    boolify(word, boolValues);
    for (int i = 0; word[i] != '\0'; i++) {
        cout << boolValues[i] << " ";
    }
}
