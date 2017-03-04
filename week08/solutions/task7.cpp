// Example program
#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    /* дефиниция за разстояние между две точки в равнината */
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double path(double xCoords[], double yCoords[], int size) {
  /* ще минем през всички точки на масива без последната,
     като за всяка ще добавим разстоянието до следващата
      ---> за N точки имаме N-1 отсечки между тях */
  double result = 0;
  for (int i = 0; i < size - 1; i++) {
    result += distance(xCoords[i], yCoords[i], xCoords[i+1], yCoords[i+1]);
  }
  return result;
}

int main()
{
  double xCoords[10];
  double yCoords[10];
  int size;
  cout << "Enter size of array: ";
  cin >> size;
  for (int i = 0; i < size; i++) {
      cout << "X(p[" << i << "])= ";
      cin >> xCoords[i];
      cout << "Y(p[" << i << "])= ";
      cin >> yCoords[i];
  }

  cout << "The distance from p[0] to p[" << size - 1 << "] is : " << path(xCoords, yCoords, size) << "\n";

  return 0;
}
