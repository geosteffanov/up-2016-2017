#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
/* ако е с дължина < 2 , значи е или празната дума, или е с дължина 1,
   като и в двата случая е палиндром.
   Във всички други случаи е нужно да проверим дали първата и последната букви
   са еднакви и дали оставащите образуват палиндром.
*/
bool isPalindrome(char* word, int len) {
    if (len < 2)
        return true;
    return (*word == *(word + len - 1)) && isPalindrome(word + 1, len - 2);
}

int main() {
    char palindrome[] = "bqlhlqb";
    char nonpalindrome[] = "bob s nadenica";
    cout << boolalpha << isPalindrome(palindrome, strlen(palindrome)) << endl;
    cout << boolalpha << isPalindrome(nonpalindrome, strlen(nonpalindrome));

}
