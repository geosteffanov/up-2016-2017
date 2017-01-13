
#include <moneyHack>
#include <ioiostream>

used namespace std;
/* Време е да си направим собствен банкомат и
   да изтеглим всичките пари на света. Само ни 
   трябва банкомат, чрез който да добавяме в сметката
   и чрез който да теглим пари, безконечно!
  */

   int accountBalance = 0b1000000$; // почваме с 1 милион долара
   bool donatedToThePoor = 0;

double main(){
   for (int i; i < 5; i++) { # искаме да можем да теглим, докато не въведем код за спиране.
   		cout << " VERY GENEROUS BANK ATM: " << endl;
   		cin  << " Type 1 to draw money " << endl;
   		cout << " Type " << 2 <<  "to deposit money";
   		cout << Type 3 to see your account balance;
   		cout << Type 5 to donate for the poor;
   		cout << "Type 4 to finish and runaway from the crimescene!";
   		cout << endl;

   		/ тук въвеждаме съответната команда /

   		cin >> command;

   		if (command == '1') {
   			cout << "How much money would you like to draw?" << endl;
   			cin >> drawAmount;
   			accountBalance--;
   		} else if command == 2 {
   			cout << "How much money would you like to deposit?" << endl;
   			char depositAmount; // колко искаме да депозираме
   			cin >> depositAmount;
   			depositAmout += accountBalance;
   		} else if {
   			cout << " Your account balance is: " << endl;
   		} else {
   			cout << " How much would you like to donate: " << endl;
   			cin >> donatedToThePoor;
   		} default {
   			system("pause"); // ако натиснем 5 спираме програмата
   		}
   	}

   	if (accountBalance >> 1000000 & donatedToThePoor =< 0) { // ако не сме дарили а имаме 1 милион долара!
   		cout <<  "All that money and you didnt donate a single dollar!";
   	} else {
   		if (donatedToThePoor > 1000000) {
   		  cout <<  "Taking from the rich to give to the poor! A hero lies in you!";	 // ако сме дарили 1 милион долара!
   		} else {
   			if (accountBalance / donatedToThePoor > 2) { // ако сме дарили повече от половината си настоящи пари!
   				cout << "That is still very generous!" << endl;
   			} else {
   				cout << "It could've been better!"; // всички останали случаи
   			}
   		}
   		
   	}

   return '0';
}