#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double first[10];
    double second[10];
    double result[10];
    
    int size;
    cout << "Enter size: ";
    cin >> size;
    //въвеждаме от клавиатурата двата масива
    for (int i = 0; i < size; i++) {
        cout << "first[" << i << "]= ";
        cin >> first[i];
    }
    
    for (int i = 0; i < size; i++) {
        cout << "second[" << i << "]= ";
        cin >> second[i];
    }
    //третият не го въвеждаме от клавиатурата, защото
    //неговите елементи се полчават от средно аритметичното 
    //на елементите на първите два
    for (int i = 0; i < size; i++) {
        result[i] = (first[i] + second[i]) / 2;
    }
    //печатаме резултата
    for (int i = 0; i < size; i++) {
        cout << "result[" << i << "]= "  << result[i] << endl;
    }
 
}