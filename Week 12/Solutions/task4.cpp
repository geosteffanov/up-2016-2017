#include <iostream>
using namespace std;
/* низовете, като частен случай на масивите, се държат по същия начин,
   при тях *(arr + i) == arr[i] по аналогични причини.
 */

void capitalizeChars(char* a) {
    for (int i = 0; *(a + i) != '\0'; i++) { // докато *(a + i) == a[i] != '\0' -> итерираме по всички елементи на
    	                                     // низа, докато не стигнем терминираща нула.
  
        if (*(a + i) <= 'z' && *(a + i) >= 'a')
            *(a + i) += ('A' - 'a');
    }
}
int main() {
    char a[] = "hello world!";
    capitalizeChars(a);
    cout << a;
    return 0;
}
