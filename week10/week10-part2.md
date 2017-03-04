# Задачи за седмица 10, Част II

### Зад. 5

**_Classic Fibonacci_**

Напишете рекурентна функция, която има аргумент цяло неотрицателно число и която връща n-тото число на Фибоначи. Изпробвайте функцията с големи стойности за n.

### Зад. 6

**_Where is izdislav_**

Напишете булева функция, която приема символен низ и която връща true, ако низът завършва на izdislav и false в противен случай. 


### Зад. 7

**_Am i a substring_**

Напишете функция _bool isSubString(char first[], char second[])_ , която да връща true, ако second се съдържа във first и false в противен случай.

Примери:
	
	char first[]="hellostudents";
	char second[]="hello";
	isSubString(first,second) --> true


	char first[]="hellostudents";
	char second[]="hells";
	isSubString(first,second) --> false


	char first[]="hellostudents";
	char second[]="ostuden";
	isSubString(first,second) --> true

### Зад. 8

**_Recursion again_**

Напишете рекурентна функция _int sumOfElements(int arr[],int size,int index)_ , която да намира сумата на елементите на масива arr. Рекурсията да върви по индексите(затова се подава и аргумент на функцията index).