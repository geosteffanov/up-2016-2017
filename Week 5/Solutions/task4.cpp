#include <iostream>
using namespace std;

const int Anegative = -1;
const int Apositive = 1;
const int Bnegative = -2;
const int Bpositive = 2;
const int ABnegative = -3;
const int ABpositive = 3;
const int Opositive = -4;
const int Onegative = 4;

/*
     изборът на тези числа беше "произволен", в смисъл
     че кои да е 8 различни числа ще са достатъчни
     за да различим 8-те кръвни групи.

     за удобство съм ги разделил на положителни и отрицателни, 
     но ползата е минимална.

     с думата const казваме, че променливите, няма
     да могат да си менят стойностите, т.е. те са реално константи."
*/


int main() {

     int bloodType;
     cout << "Enter your blood type: ";
     cin >> bloodType;
     switch (bloodType) {
     	case Anegative:
     		cout << " You can donate blood to: A-, A+, AB-, AB+." << endl;
     		cout << " You can receive blood from: O-, A-." << endl;
     		break;
     	case Apositive:
     		cout << " You can donate blood to: A+, AB+." << endl;
     		cout << " You can receive blood from: O-, O+, A-, A+." << endl;     	
     		break;
     	case Bnegative:
     		cout << " You can donate blood to: B-, B+, AB-, AB+." << endl;
     		cout << " You can receive blood from: O-, B-." << endl;
     		break;
     	case Bpositive:
     		cout << " You can donate blood to: B+, AB+." << endl;
     		cout << " You can receive blood from: O-, O+, B-, B+." << endl;
     		break;
     	case ABnegative:
     		cout << " You can donate blood to: AB-, AB+." << endl;
     		cout << " You can receive blood from: O-, A-, B-, AB-." << endl;
     		break;
     	case ABpositive:
     		cout << " You can donate blood to: AB+" << endl;
     		cout << " You can receive blood from: All bloodtypes." << endl;
     		break;
     	case Onegative:
     	    cout << " You can donate blood to: All bloodtypes." << endl;
     		cout << " You can receive blood from: O-." << endl;
     		break;
     	case Opositive:
     	    cout << " You can donate blood to: O+, A+, B+, AB+." << endl;
     		cout << " You can receive blood from: O-, O+." << endl;
     		break;
     }



	return 0;
}
