# Задачи за седмица 4, Част I
### Зад. 1

**_Equal Sum Of Digits_**

Напишете функция _int haveEqualSums(**int** firstNumber, **int** secondNumber)_ , която проверява дали числата _firstNumber_ и _secondNumber_ имат еднакви суми на цифрите.

Пример:

    haveEqualSums(1, 10000) -> true
    haveEqualSums(2, 11) -> true
    haveEqualSums(398, 21981) -> false

###Зад. 2

**_Print All_**

Напишете функция _void printAll(**int** number,**int** start,**int** end)_ , която печата на екрана всички числа, чиято сума на цифрите е равна на сумата на цифрите на _number_, в интервала [_start_,_end_].

Пример:

	printAll(2,3,12) -> 11

### Зад. 3

**_SubNumber_**

Напишете функция _bool isSubNumber(**int** find,**int** search)_, която проверява дали _find_ се съдържа в _search_.

Примери:

	isSubNumber(12,345) -> false
	isSubNumber(12,34125) -> true
### Зад. 4

**_Print All Sub Numbers_**

Напишете функция _void printAllSubNumbers(**int** number)_ , която отпечатва всички числа, които се съдържат в _number_.

Пример:

	printAllSubNumbers(128) -> 1,2,8,12,28,128