#include<iostream>
using namespace std;
/* намираме първата точка ('.') и връщаме указател към
   следващия елемент. Ако обаче не намерим точка преди да стигнем
   края връщаме nullptr. Ако текстът е nullptr връщаме nullptr,
   за да може тази функиця да я пускаме върху себе си.
*/
char* findSentence(char* text) {
    if (text == nullptr)
        return nullptr;
    char* result = text;
    int i = 0;
    while (*(result + i) != '\0' && *result != '.') {
        result = result + 1;
    }
    if (*result == '\0')
        return nullptr;
    return result + 1;
}
int main() {
    char text[] = "sent1.sent2.sent3.sent4";
    char* first = findSentence(text);
    char* second = findSentence(first);
    char* third = findSentence(second);
    char* fourth = findSentence(third);
    char* fifth = findSentence(fourth);
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;
    cout << fourth << endl;
}
