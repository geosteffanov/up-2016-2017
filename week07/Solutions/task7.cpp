#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numbers[10];
    int size;
    int results[10];

    cout << "Enter size: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "numbers[" << i << "]= ";
        cin >> numbers[i];
    }
    
    for (int i = 0; i < size; i++) {
        /* стигнали сме до i-тото число в нашия масив.
           приемаме, че елементите по-малки от него и
           надясно от него засега са 0

           за конкретния елемент пускаме цикъл, който
           минава през всички елементи надясно от него 
           и увеличава br с 1 за всеки срещнат.
        */
        int br = 0;
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] > numbers[j])
                br++;
        }
        results[i] = br;
    }
    
    for (int i = 0; i < size; i++) {
        cout << "results[" << i <<"] = " << results[i] << endl;
    }
        
}