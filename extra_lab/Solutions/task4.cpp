#include <iostream>
using namespace std;

int uniqueElements(int* arr, int size) {
  int result = 0;
  for (int i = 0 ; i < size ; i++) {
    int occurencesBefore = 0;

    for (int j = 0 ; j < i ; j ++) {
        if (arr[j] == arr[i])
           occurencesBefore++;
    }

    if (occurencesBefore == 0)
       result++;
    }

    return result;
}

int* toSet(int* arr, int size, int& setSize) {
   setSize = uniqueElements(arr, size);
   int* result = new int[setSize];

   int lastIndex = 0;

   for (int i = 0 ; i < size ; i++) {
     int occurencesBefore = 0;

     for (int j = 0 ; j < i ; j ++) {
         if (arr[j] == arr[i])
            occurencesBefore++;
     }

     if (occurencesBefore == 0) {
        result[lastIndex] = arr[i];
        lastIndex++;
      }

    }

    return result;
}

int main() {
  int setSize = 0;
  int arr[] = { 1, 2, 1,3, 4, 2, 8, 8,9};
  int *set = toSet(arr, 9, setSize);
  for (int i = 0; i < setSize; i++)
     cout << *(set + i) << "\n";

  delete[] set;

  return 0;
}
