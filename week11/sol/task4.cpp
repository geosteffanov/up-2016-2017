#include <iostream>
using namespace std;

void toUppercase(char word[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i]>= 'a' && word[i] <= 'z') {
            word[i] += ('A'-'a');
        }
    }
}

int main () {
    char word[] = "noone cares";
    toUppercase(word);
    cout << word;
    return 0;
}


