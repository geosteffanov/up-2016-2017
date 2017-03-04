#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int numbers[10];
    int size;
    int divisor;
    cout << "Enter size: ";
    cin >> size;
    
    for (int i = 0 ; i < size; i ++) {
        cout << "numbers[" << i << "]= ";
        cin >> numbers[i];
    }
    
    cout << "Enter divisor: ";
    cin >> divisor;
    
    bool areDivisible[10];
    
    
    for (int i = 0; i < size; i++) {
        areDivisible[i] = (numbers[i] % divisor == 0); /* обхождаме масива с булеви стойности и на i-та позиция
        												  записваме дали i-тото число се дели на делителя */
    }
    
    for (int i = 0; i < size; i++) {
        cout << areDivisible[i] << endl;
    }
    
    
}