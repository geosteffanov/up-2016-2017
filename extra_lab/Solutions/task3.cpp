#include <iostream>
#include <cstring>
using namespace std;

char* concat(char* first, char* second) {
  int firstLen = strlen(first);
  int secondLen = strlen(second);
  int resultSize = firstLen + secondLen;
  char* result = new char[resultSize + 1];
  result[resultSize] = '\0';

  int lastIndex = 0;
  for (int i = 0; i < firstLen; i++) {
    result[lastIndex] = first[i];
    lastIndex++;
  }
  for (int i = 0; i < secondLen; i++) {
    result[lastIndex] = second[i];
    lastIndex++;
  }
  return result;
}

int main() {
  char* concatenation = concat("maznite ", "ma6inki");
  cout << concatenation << "\n";
  delete[] concatenation;
  return 0;
}
