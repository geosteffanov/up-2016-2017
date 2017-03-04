#include <iostream>
using namespace std;
/* ако сме стигнали края на низа приключваме,
   в противен случай печатаме първия символ
   и повикваме функцията с аргумент указател
   към следващия символ (word + 1 връща указател сочещ
   следващия адрес на char променлива) */
void printRec(char* word) {
    if ((*word) == '\0') return;
    cout << *word;
    printRec(word + 1);
}

int main() {
    char word[] = "this is what we do";
    printRec(word);
}
