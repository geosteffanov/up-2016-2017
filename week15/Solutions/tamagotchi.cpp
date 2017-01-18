#include <iostream>
#include <cstring>
using namespace std;

struct Tamagotchi {
    char name[20] ;
    int attackPower; /* охааа, бой */
    int energy;

    /* тук ще напиша методите (функциите), които нашите тамагочита
       могат да изпълняват,
       но попринцип не е задължително да са под полетата (променливите)
       на тамагочито
     */

     /* DISLAIMER!!! ВАЖНО !!! от тук почват конструктурите, за които говорим
        чак в task 8, тоест пренебрегнете ги и ги пропуснете засега.
    */
     Tamagotchi() {
     }

     Tamagotchi(char name[20] , int attackPower) {
            strcpy(this->name, name);
            this->attackPower = attackPower;
            energy = 100;
     }
     void printStatus() {
        cout << "Name: " << name << endl;
        /* дотук беше task 2, но с новите задачи ще
           добавяме нови редове в print метода(функцията),
           за новите данни на тамагочи
        */
        cout << "Energy: " << energy << endl; // това е от 3-та задача
     }

     void speak(char* phrase) {
        if (energy < 2)
            return;
        cout << name << " says: " << phrase << endl;
        energy -= 2;
     }

     void sleep(int hours) {
        energy += hours * 8;
        if (energy > 100)
            energy = 100;
     }

     void fightWith(Tamagotchi other) {
        if (attackPower > other.attackPower)
            cout << name << " wins the fight!" << endl;
        if (attackPower < other.attackPower)
            cout << other.name << " wins the fight!" << endl;
        if (attackPower == other.attackPower)
            cout << "It's a draw!" << endl;
     }

};

void singASong(Tamagotchi singers[], char** song, int size) {
    for (int i = 0; i < size; i++)
        singers[i].speak(song[i]);
}

void findTheStronges(Tamagotchi fighters[], int size) {
    if (size == 0)
        return;
    int highestPower = fighters[0].attackPower;
    for (int i = 1; i < size; i++)
        if (fighters[i].attackPower > highestPower)
             highestPower = fighters[i].attackPower;
    for (int i = 0 ; i < size; i++)
        if (fighters[i].attackPower == highestPower)
             cout << fighters[i].name << " is one of the strongest fighters!" << endl;

}


int main () {
     /* task 1 */
     /* тук създаваме тамагочито - първо ще направим променливата от
       тип Tamagotchi и после ще дадем име на тамагочито
     */
     Tamagotchi sirSnuggles; /* създаваме структурата все едно е нормален тип
                                променлива */
     strcpy(sirSnuggles.name, "Sir Snuggles"); /* тук копираме съдържанието на
                                                  низа "Sir Snuggles" в променливата
                                                  name на нашето тамагочи.
                                                */
     cout << sirSnuggles.name << endl;
     cout << "================" << endl; /* в целия main ще изпозлваме тези редове за
                                            да е по-четимо в конзолата */

     /* task 2 - слагаме printStatus функцията */
     sirSnuggles.printStatus(); /* да видим статуса на снъгълс */
     /* ВАЖНО !!! DISCLAIMER !!! сега в конзолата ще се отпечата
        и някакво странно число срещу 'Energy: ' <- това е
        неинициализираната енергия, за която всъщност почваме да
        говорим чак след task 3. Т.е. това е точно като
        да създадете int number; и веднага след това да го печатате
        без да му придадете стойност - т.е. някаква рандом стойност
        ще се отпечата
     */
     cout << "================" << endl;

     /* task3 - energy */
     sirSnuggles.energy = 100; // сър Снъгълс тъкмо се роди, и сега е пълен с енергия

     /* task4 - speak & sleep */
     sirSnuggles.speak("I am sir Snuggles.");
     sirSnuggles.speak("I am a tamagotchi.");
     sirSnuggles.speak("I am supposed to be a cat.");
     sirSnuggles.speak("Oops, I meant 'meow'.");

     cout << "Sir Snuggles' energy: "
          << sirSnuggles.energy << endl;
     sirSnuggles.sleep(1); /* sir Snuggles will sleep 1 hour -> he will replenish his energy fully */
     cout << "Sir Snuggles' energy after sleeping: "
          << sirSnuggles.energy << endl;
     cout << "================" << endl;

     /* task5 - tamagotchi fighting */
     sirSnuggles.attackPower = 15;
     Tamagotchi sirCthulhu;
     strcpy(sirCthulhu.name, "Sir Cthulhu");
     sirCthulhu.energy = 100;
     sirCthulhu.attackPower = 20;
     sirCthulhu.speak("sir Snuggles, I will destroy you and your world...Beware...");
     sirSnuggles.speak("Not in a million years!");
     sirSnuggles.fightWith(sirCthulhu);
     cout << "================" << endl;

     /* task6 - tamagotchi singing */
     char firstLine[] = "Oh, the weather outside is frightful...";
     char secondLine[] = "but the fire is so delightful...";
     char thirdLine[] = "And since we got no place to go...";
     char fourthLine[] = "let it snow, let it snow, let it snow...";
     char* song[] = { firstLine, secondLine, thirdLine, fourthLine};
     Tamagotchi singers[] = {sirSnuggles, sirCthulhu, sirSnuggles, sirCthulhu};
     singASong(singers, song, 4);
     cout << "================" << endl;
     /* task 7 - find the strongest */
     Tamagotchi sirBej;
     strcpy(sirBej.name, "sir Bej");
     sirBej.energy = 100;
     sirBej.attackPower = 20;
     Tamagotchi fighters[] = {sirSnuggles, sirCthulhu, sirBej};
     findTheStronges(fighters, 3);
     cout << "================" << endl;
}
