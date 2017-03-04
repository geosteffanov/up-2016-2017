#include <iostream>
using namespace std;

int main() {
	int cardNumber;
	cout << "Enter the card number: ";
	cin >> cardNumber;

	int cardIndex = cardNumber - 1; // за удобство - променям индексите на всички карти да са с 1 по-малко

	int card = cardIndex % 13; // на всеки 13 карти, ранкът се повтаря. Т.е. ако вземем остатъка при деление на 13
							   // ще получим именно и ранкът

	int suit = cardIndex / 13; // сега ако видим колко 13-ки се съдържат в индекса ще разберем и в "интервала" на
							   // коя боя се намираме

	cout << "The card is ";

	switch (card) {
		case 0:
		cout << "Ace of ";break;
		case 1:
		cout << "Two of ";break;
		case 2:
		cout << "Three of ";break;
		case 3:
		cout << "Four of ";break;
		case 4:
		cout << "Five of ";break;
		case 5:
		cout << "Six of ";break;
		case 6:
		cout << "Seven of ";break;
		case 7:
		cout << "Eight of ";break;
		case 8:
		cout << "Nine of ";break;
		case 9:
		cout << "Ten of ";break;
		case 10:
		cout << "Jack of ";break;
		case 11:
		cout << "Queen of ";break;
		case 12:
		cout << "King of ";break;
	}

	switch (suit) {
		case 0: 
		cout << " spades." << endl;break;
		case 1: 
		cout << " heart." << endl;break;
		case 2: 
		cout << " diamonds." << endl;break;
		case 3: 
		cout << " clubs." << endl;break;
	}

	return 0;
}