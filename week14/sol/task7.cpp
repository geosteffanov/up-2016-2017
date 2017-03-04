#include <iostream>
#include <iomanip>
using namespace std;
bool isPrefix(char* first, char* second) {
  if (*second == '\0') /* празният стринг е префикс на всичко */
    return true;
  if (*first == '\0') /* ако сме стигнали до този ред => second не е празния стринг, а ако first е -> няма как second
                         да е префикс
                        */
    return false;
  if (*first != *second)
    return false; /* и двата стринга не са празни, затова гледаме дали съвпадат първите им букви */
  return isPrefix(first + 1, second + 1); /*ако сме стигнали до тук , значи съвпадат първите им букви и рекурсивно
                                            проверяваме дали second + 1 е префикс на first + 1 */
}

char* substring(char* first, char* second) {
    if (*second == '\0') /* отново празния стринг е събстринг на всеки стринг */
        return first;
    if (*first == '\0') /* ако нашия стринг е празен, а този който търсим в него не е -> връщаме nullptr, тъй като
                           second не е substr на first */
        return nullptr;
    if ((*first == *second) && isPrefix(first + 1, second + 1)) /* ако съвпадат първите букви, евентуално тук е първото срещане
                                                                   на second като събстринг на first -> правим проверка дали е
                                                                   префикс на това което остава от first. */
        return first;
    return substring(first + 1, second); /* ако сме стигнали до тук, значи още не сме намерили нашия събстринг -> продължаваме напред */
}

int main() {
    char sentence[] = "this is just a freakin' cool sentence!";
    char word[] = "freakin";
    char notInSentence[] = "apple";
    cout << substring(sentence, word) << endl;
    cout << boolalpha << (substring(sentence, notInSentence) == nullptr);
}
