﻿#include <iostream>
#include <cstring>
using namespace std;
bool findIzdislav(char arr[]) {
    /* този подход за решаване не е най - добрият
     * но е много добър пример за прилагане на
     * важни неша при работа с низове
     */
    char izdislav[] = "izdislav"; // първо създаваме един низ, който ще съдържа издислав
    const int izdislavSize = 8; // в една константа слагаме размера на низа издислав

    char lastEightChars[9]; // създаваме си низ, в който ще сложим последните 8
                            // елемента на arr и накрая този низ (lastEightChars)
                            // ще го сравняваме с izdislav;
                            // размерът на масива не е 8, защото
                            // освен броя символи накрая има и
                            // една терминираща нула, за която трябва
                            // да се погрижим

    int k=0; // един брояч за индексите в низа lastEightChars

    for(int i=(strlen(arr) - 8);i<strlen(arr);i++) // един цикъл, която не започва от 0
                                                   // а от индекса на първия символ от последните
                                                   // осем символа на arr
    {
        lastEightChars[k]=arr[i];  // на всяка стъпка взимаме конкретния елемент на arr
                                   // и го слагаме в lastEightChars
        k++;                       // и увеличаваме брояча k
    }
    lastEightChars[8] = 0; // слагаме задължително терминиращата нула накрая

    return strcmp(lastEightChars,izdislav) == 0; // и накрая ползваме вградената функция за сравняване на низове
                                                 // съветвам ви да прочетете повече за нея в интернет
}

int main() {

    char arr[] = "i found izdislav";
    cout<<findIzdislav(arr);
    return 0;
}