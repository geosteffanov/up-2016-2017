#include <iostream>
using namespace std;
void add(int*& arr, int& size, int element) {
   int* temp = arr;
   arr = new int[size + 1];
   for (int i = 0; i < size; i++)
     arr[i] = temp[i];

    arr[size] = element;

    size++;
    delete[] temp;
}

void insertAt(int*& arr, int& size, int element, int index) {
  int* temp = arr;
  arr = new int[size + 1];

  for (int i = 0; i < index; i++)
    arr[i] = temp[i];

  arr[index] = element;

  for (int i = index + 1; i <=  size; i++)
    arr[i] = temp[i - 1];

  size++;

  delete[] temp;
}

void resize(int*& arr, int& size, int newSize) {
  int* temp = new int[newSize];

  for (int i = 0; i < size && i < newSize; i++)
    temp[i] = arr[i];

  for (int i = size; i < newSize; i++)
    temp[i] = 0;

  size = newSize;
  delete[] arr;
  arr = temp;
}

void copy(int* from, int sizeFrom, int*& to, int& sizeTo) {
   delete[] to;
   sizeTo = sizeFrom;
   to = new int[sizeTo];

   for (int i = 0; i < sizeTo; i++)
      to[i] = from[i];
}

int main() {
  int size = 5;
  int* arr = new int[size];
  for (int i = 0; i < size; i++)
    arr[i] = i + 1;

  add(arr, size, 6);
  insertAt(arr, size, 11, 3);
  resize(arr, size, 5);
  resize(arr, size, 7);

  int* newArr = new int[1];
  int newSize = 1;

  copy(arr, size, newArr, newSize);

  for (int i = 0; i < size; i++)
    cout << newArr[i] << "\n";



  delete[] arr;
  return 0;
}
