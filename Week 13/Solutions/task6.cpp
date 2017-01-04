#include <iostream>
using namespace std;
/* проверяваме дали последната цифра е по-малка от цифрата преди нея.
   ако цифрите са по-малко от 2 това няма да може да се изпълни, но тогава
   поне знаем че числото със сигурност образува монотонна редица
*/
bool isMonotonic(unsigned int number) {
    if (number < 10)
        return true;
    return (number % 10 < (number / 10)% 10) &&
            isMonotonic(number / 10);
}
/* ако b >= a имаме или b==a или b < a. В този случай може просто да проверим
   дали цифрите на a образуват монотонно намаляща редица. Ако да - връщаме
   1 + броя на числата изпълняващи условието в итервала [a + 1, b]. В противен
   случай връщаме 0 + броя на числата изпълняващи условието в интервала [a + 1, b];
   Като ако a < b => a + 1 <= b, а ако a = b => a + 1 > b и тогава рекурсивните повиквания
   на функцията ще приключат
*/
int countDecreasing(unsigned int a, unsigned int b) {
    if (b < a)
        return 0;
    if (isMonotonic(a))
        return 1 + countDecreasing(a + 1, b);
    else
        return countDecreasing(a + 1, b);
}
int main() {
   cout << countDecreasing(8, 25);
}
