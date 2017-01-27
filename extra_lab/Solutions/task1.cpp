#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: " << endl;
  cin >> n;
  int* arrayPointer = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arrayPointer[i];
  }

  for (int i = 0 ; i < n ; i++)
     cout << arrayPointer[i] << "\n";

  delete[] arrayPointer;
  return 0;
}
