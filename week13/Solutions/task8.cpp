#include<iostream>
using namespace std;

int compare(char *first, char *second)
{

   //тези три случая са дъното на рекурсията
   if(*first == '\0' && *second == '\0')
        return 0;
   if(*first == '\0' && *second != '\0')
        return -1;
   if(*first != '\0' && *second == '\0')
        return 1;

   //на всяка стъпка проверяваме текущата буква
   if(*first > *second)
        return 1;
   if(*first < *second)
        return -1;
   else
        //само ако са равни текущите символи, викаме рекурсивно функцията
        //за следващите
        return compare(first+1,second+1);
}

int main()
{

    char arr[] = "hello";
    char arr1[] = "hell";

    cout<<compare(arr,arr1);
}
