#include <iostream> 
#include <windows.h> // this will be needed for the Beep() function
using namespace std;

/* това са константи защото представляват
   тонове, които са дефинирани именно с 
   тези стойности и няма логика да се изменят */

const double C = 130.81; // do
const double D = 146.83; // re
const double E = 164.81; // mi
const double F = 174.61; // fa
const double G = 196.00; // sol
const double A = 220.00; // la
const double B = 246.94; // si

/* проста функция, тя е от тип "void", т.е. тя не връща нищо
   а само се изпълнява - 
   както виждате void beepSound(double frequency) - beepSound
   има само 1 параметър от тип double - той ще бъде честотата (или тона)
   на звука, който искаме да се чуе. */
void beepSound(double frequency) {
	Beep(frequency, 500); // във функцията beepSound викаме Beep
}
/* Както виждате можем да влагаме функции
   в други функции, т.е да викаме една функция
   докато се изпълнява друга.

   Можем също да използваме аргумента на външната
   за да викнем вътрешната - именно това правим 
   и на реда "Веер(frequency, 500);"

*/

/* правим функция pianoSession()
   която няма да приема параметри,
   и няма да връща стойност. Тази функция
   ще представлява цикъла в който ще се изпълнява програмата.
   Може би ще е по-ясно след като прочетете и пуснете програмката.
 */
void pianoSession() {
	int input; // тук ще пазим въведеното от потребителя число
	while(true) { // опа? while 'something' is true, където 'something' е true.
				  // тъй като изразът true винаги се оценя на true,
				  // този цикъл няма да спре освен ако не ползваме някоя от ключовите
				  // думи 'break', 'return'.
		cout << ">>: "; 
		cin >> input; // потребителят въвежда числото
		switch(input) {
			case 0: return; // ако е 0 числото => return-ваме
			/* с ключовата дума return ние казваме на функцията да свърши
			   и да върне стойността на това което сме написали след return-а
			   в случая pianoSession() е void функция, т.е. не трябва да пишем
			   нищо след return - от там идва и името void - "празно" - не връща нищо.
			 */
			case 1: beepSound(C); break;
			case 2:	beepSound(D); break;
			case 3: beepSound(E); break;
			case 4: beepSound(F); break;
			case 5: beepSound(G); break;
			case 6: beepSound(A); break;
			case 7: beepSound(B); break;
			/* както виждате след всеки case слагаме break, защото
			   иначе ще се изпълняват всички, след първия match-нат
			   case
			*/
		}
	}
}

int main()
{
	// програмата тръгва от ТУК!


   /* колко просто... само това е в main-на */

  pianoSession(); // повикваме pianoSession функцията като не забравяме '()' след името.

  /* ако сме стигнали до тук - значи сме излязли от pianoSession() функцията, което
  	 значи че тя трябва да е свършила => сме илязли и от while() цикъла, което 
   значи че user-а вече е въвел 0
   */
  return 0;
}