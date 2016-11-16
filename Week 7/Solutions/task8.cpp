#include<iostream>
using namespace std;
//умни сме и ще ползваме вече написаната от задача 1 функция
//за удобство
bool member(int array[],int size,int value){

    for(int i=0;i<size;i++){
        if(array[i]==value)
            return true;
    }
    return false;
}

bool equalNumberSets(int firstArray[],int sizeOfFirst,int secondArray[],int sizeOfSecond){
    //обхождаме първия масив и за всеки негов елемент
    //викаме функцията member с аргумент втория масив, която
    //ще ни каже дали текущият елемент е елемент на втория масив,
    //защото все пак така сме я написали да работи
    for(int i=0;i<sizeOfFirst;i++){
        if(member(secondArray,sizeOfSecond,firstArray[i]) == false) // ако се окаже, че някой елемент на първия масив
                                                                    // не е елемент на втория, веднага връщаме false
            return false;
    }
    //правим същото обхождане и за втория масив
    for(int i=0;i<sizeOfSecond;i++){
        if(member(firstArray,sizeOfFirst,secondArray[i]) == false)
            return false;
    }
    //до този ред ще стигнем само ако и двата цикъла са се извъртяли докрай и никъде
    //не се е върнал false
    return true;
}

int main(){

    int array1[]={1, 18, 29, 3, 14, 5};
    int array2[]={18, 14, 29, 29, 5, 3, 1, 18};
    cout<<equalNumberSets(array1,6,array2,8)<<endl;
    int array3[]={1, 18, 29, 3, 14, 5};
    int array4[]={18, 14, 29, 29, 5, 3, 1, 7};
    cout<<equalNumberSets(array3,6,array4,8)<<endl;

}

