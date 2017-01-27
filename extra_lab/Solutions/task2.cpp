#include <iostream>
using namespace std;

int* createArray(int n) {
  int* arr = new int[n];
  for (int i = 0 ; i < n; i++) {
    cin >> arr[i];
  }
  return arr;
}

int main() {
  int n;
  cout << "Enter the size of the array: " << endl;
  cin >> n;
  int* array = createArray(n);

  for (int i = 0; i < n; i++)
    cout << array[i] << "\n";

  delete[] array;

  return 0;
}
