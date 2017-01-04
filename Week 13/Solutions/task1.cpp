#include <iostream>
using namespace std;
/* подаваме указатели, тъй като в противен случай
   всички промени които бихме направили във функцията
   ще се заличат извън нея
*/
void swap(int* number1, int* number2) {
   int temp = *number1;
   *number1 = *number2;
   *number2 = temp;
}
int main() {
    int a = 3;
    int b = 5;
    int* pa = &a;
    int* pb = &b;
    swap(pa, pb);
    cout << a << endl;
    cout << b << endl;
}
