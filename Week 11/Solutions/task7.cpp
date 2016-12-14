#include <iostream>
using namespace std;
bool vowel(char letter) {
    switch(letter) {
        case 'a':
        case 'i':
        case 'o':
        case 'e':
        case 'u':
        case 'y':
            return true;
        default:
            return false;
    }
}
int coCount(char word[]) {
    int result = 0;
    bool evenVowels = true;

    for (int i = 0; word[i] != '\0'; i++) {
        if (evenVowels) {
            result++;
        }
        if (vowel(word[i])) {
            evenVowels = !evenVowels;
        }
    }
    return result;
}

int main() {
    char veryBad[] = "kontrolno";
    cout << coCount(veryBad);
}
