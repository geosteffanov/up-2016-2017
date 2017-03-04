# Задачи за седмица 4, Част II

### Зад. 5

**_Digit Finder_**

Напишете фунцкия _bool hasDigitAt(**int** number,**int** index,**int** digit)_. 
Функцията трябва да проверява дали на позиция _index_ отдясно на ляво в _number_ стои цифрата _digit_.

Примери:

	bool hasDigitAt(12345,2,4) -> true
	bool hasDigitAt(12345,2,3) -> false
	bool hasDigitAt(12345,3,3) -> true
	bool hasDigitAt(12345,4,1) -> false

### Зад. 6

**_Digit Replacer_**

Напишете функция _int replaceDigitAt(**int** number, **int** index, **int** digit)_, която
получава цяло число _number_ и връща число, което е получено чрез заместване
на цифрата на позиция _index_ отдясно на ляво в _number_ с цифрата _digit_.

Примери:

	newNumber = replaceDigitAt(1234567, 2, 5) -> newNumber = 1234557
	newNumber = replaceDigitAt(newNumber, 3, 2) -> newNumber 1234257

### Зад. 7

**_Digits Replacer_**

Напишете функция _int switchDigits(**int** number, **int** oldDigit, **int** newDigit)_, която заменя
всяко срещане на цифрата _oldDigit_ с _newDigit_ в числото number.

Примери:

	newNumber = switchDigit(535385, 3, 5) -> newNumber = 555585
	newNumber = switchDigit(newNumber, 5, 8) -> newNumber = 888888

### Зад. 8

**_Binary Printer_**

Напишете функция _void printInBinary(**int** number)_ , която отпечатва представянето на числото _number_ в двоична бройна система.
