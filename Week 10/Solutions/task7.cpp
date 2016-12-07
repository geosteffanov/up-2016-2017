#include <iostream>
#include <cstring>
using namespace std;

bool isSubString(char first[],char second[])
{
    int firstSize = strlen(first);   // запазваме си в две променливи размерите на низовете
    int secondSize = strlen(second); // за да не викаме постоянно strlen
                                     // това е добра практика

    if(firstSize<secondSize)  // бърза проверка дали размерът на първия е по-малък
                              // от размера на втория, защото ако е , то няма как
                              // втория да се съдържа в първия
        return false;

    for(int i = 0;i<=firstSize-secondSize;i++) // един цикъл, който ще върви по позициите в първия низ
                                               // но няма да стига до края, а до индекс, такъв че след
                                               // него остават точно secondSize на брой елементи
    {
        int k;
        for(k=0;k<secondSize;k++)  // вложеният цикъл върви по втория низ
                                   // и го сравнява с подниз на first, който
                                   // започва от позиция i
        {
            if(first[i+k]!=second[k])
                break;      // ако някъде срещнем различие, директно брейкваме
                            // вътрешния цикъл, но не връщаме false, защото
                            // още не е сигурно нищо
        }
        // проверка дали горният цикъл се е извъртял докрай
        // ако е то значи че в никой момент не сме срещнали
        // различие в симовлите и връщаме true веднага
        // защото сме намерили срещане на second във first
        if(k==secondSize)
            return true;
    }
    // ако се стигне до тук значи не сме намерили срещане
    // и връщаме false
    return false;
}
int main() {

    char first[]="hellostudents";
    char second[]="ostudents";
    cout<<isSubString(first,second);
    return 0;
}
