#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double polynomial[10];
    int size;

    cout << "Enter size: ";
    cin >> size;

    /* обхождаме масива от коефициенти
       на полинома и въвеждаме тяхните стойности
    */
    for (int i = 0 ; i < size; i ++) {
        cout << "a[" << i << "]= ";
        cin >> polynomial[i];
    }


    double x;
    cout << "Enter x: ";
    cin >> x;

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += polynomial[i] * pow(x, i);
    } /* приемаме, че на i-та позиция стои
         коефициентът на x^i */

    cout << "The resulting sum is: " << sum;


}
