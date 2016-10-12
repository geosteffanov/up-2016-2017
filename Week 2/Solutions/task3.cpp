#include <iostream>
using namespace std;

/* отново шаблонът от Task 0 */

int main() {

	const double PI = 3.14159; /* Дефинираме константа и даваме съответната стойност.
								  Името е с главни букви само по избор, но е прието
								  за константи да се ползват главни. 
								  'const' казва, че тази "променлива" няма да можем
								  да и променим стойността. константна променлива е 
								  пълен парадокс, но това е по-поетично... */
	double radius; // една сфера/ кълбо се определя само от радиуса си - тук ние го дефинираме

	cout << "Enter the radius of the sphere: ";
	cin >> radius; // придаваме му стойност
	if(radius > 0){
		double volume = 4.0 / 3 * PI * radius * radius * radius; /* '4.0' казва на програмата
																     'считай това за реално число
																      т.е 4.0 / 3 не е 1, както 
																      4 / 3, ами е 1.33333...
																  */
		double surfaceArea = 4 * PI * radius * radius;
		cout << endl << "The volume of the sphere is : " << volume << endl;
		cout << "Whereas, the surface area is: " << surfaceArea << endl;
	}
	else{
		cout<<"What kind of a sphere has a negative radius?"; 
	}
	return 0;
}