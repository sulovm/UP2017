# Домашно 3:


Решенията да се изпращат на upassistant2014@gmail.com.
Краен срок: 3 януари 2018 г.

Решението на всяка задача трябва да бъде под формата на файл с окончание .cpp (не целите проекти, ако използвате Visual Studio). 
Файловете се изпращат като attachment-и в mail-a. 
Освен решения на задачите, самият mail трябва да съдържа име и факултен номер. Успех!


### Задача 1 ###

 Да се състави програма, която чете цяло положително число n, след него n на брой цели числа и накрая цяло число k. Програмата да извежда индексите на всички срещания на k сред първоначалните прочетени числа.

#### Примери ####

```c++
7
12 -3 5 12 20 12 5
12
// -> 0 3 5
```

### Задача 2 ###

 Дадени са два полинома от степен най-много 9. Полиномите са представени чрез масиви, в които на i-та позиция е записан коефициентът пред x на i-та степен. Да се напише програма, която за всеки полином прочита цяло неотрицателно число - неговата степен, и масива, представящ го. Програмата да извежда сбора на двата полинома в същия формат.
 
#### Забележка ####

 Ако степента на даден полином е n, колко елемента трябва да има масивът?

#### Примери ####

```c++
5
12 4 0 13 2 1           //x^5 + 2*x^4 + 13*x^3 + 4*x + 12
4
7 8 1 0 10              //10*x^4 + x^2 + 8*x + 7
// -> 19 12 1 13 12 1   //x^5 + 12*x^4 + 13*x^3 + x^2 + 12*x + 19
```
 
### Задача 3 ###

 Да се състави програма, която чете от клавиатурата n на брой цели числа, записва ги в масив и намира двата най-малки елемента в масива.
 
#### Примери ####

```c++
5
1 12 34 7 10
// -> 1 7
```
 
### Задача 4 ###

 Квадратна матрица А с размерност n е симетрична, ако е в сила a[i][j] == a[j][i] за произволни стойности на индексите i, j от {0, ..., n - 1}. Да се напише програма, която проверява дали дадена квадратна матрица nxn (1 <= n <= 20) е симетрична. 

#### Примери ####

```c++
3
1 2 3
2 2 2
3 2 0
// -> The matrix is symmetric!

3
1 0 7
0 4 9
7 8 9
// -> The matrix is NOT symmetric!
```


### Задача 5 ###

 Квадратна матрица А с размерност n е триъгълна, ако за елементите ѝ е в сила едно от следните:
	* всички елементи на и под главния диагонал са различни от 0, а всички над главния диагонал - равни на 0;
	* всички елементи на и над главния диагонал са различни от 0, а всички под главния диагонал - равни на 0.
 Да се напише програма, която определя дали дадена квадратна матрица nxn (1 <= n <= 20) е триъгълна.

#### Примери ####

```c++
4
1 2 0 3
0 4 5 6
0 0 7 8
0 0 0 9
// -> The matrix is NOT triangular! (заради нулата на първия ред)

3
1 1 0
4 2 0
9 5 7
// -> The matrix is NOT triangular!

3
1 0 0
2 3 0
4 5 6
// -> The matrix is triangular!
```
 
### Задача 6 ###
 Две матрици се умножават по следния начин - елементът с индекс (i; j) в резултатната матрица се получава от скаларното произведение на реда с индекс i от първата матрица и колоната с индекс j от втората, т.е. 
 ```c++
 C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + ...
 ```
 За да е възможно умножението, трябва броят на колоните на първата матрица да е равен на броя на редовете на втората. Освен това, умножението на матрици (в общия случай) не е комутативно. Тези неща би трябвало да ги знаете от алгебрата. :)
 Да се напише програма, която умножава две матрици А (nxm) и B (mxk), където n, m, k са от интервала [1, 20].
 

#### Примери ####

```c++
3       // n
2       // m
2       // k
1 2     // A
3 4
5 6
2 2     // B
2 2
// -> 6 6
//    14 14
//    22 22

3       // n
3       // m
3       // k
1 0 1   // A
0 1 0
1 0 1
0 1 0   // B
1 0 1
0 1 0
// -> 0 2 0
//    1 0 1
//    0 2 0
```

### Задача 7 ###

 Да се напише програма, която проверява дали квадратната матрица M е магически квадрат. Магически квадрат е квадратна матрица, в която всички редове, стълбове, главният и вторият диагонал имат една и съща сума.


#### Примери ####

```c++
3
23 28 21
22 24 26 
27 20 25 
// -> резултат TRUE

3
1 2 3
4 5 6
7 8 9 
// -> резултат FALSE
```

### Задача 8 ###
 Да се напише програма, която запълва със стойности, прочетени от клавиатура, редица от n низа (с максимална дължина 15 и без "бели" символи), където 10 <= n <= 20 (n се чете от клавиатура), след което:
 * а) сортира във възходящ ред елементите на редицата;
 * б) извежда на екрана низовете с дължина по-голяма от индекса им в масива;
 * в) конкатенира низовете от всички четни индекси на редицата, обходени от началото към края;
 * г) конкатенира низовете от всички нечетни индекси на редицата, обходени от края към началото.
	
#### Забележка ####

 Подточки б), в) и г) да работят с първоначалния масив.

#### Примери ####

```c++
11
scorpions djordjano tita boyko pesho fsb blackmore ceca keks ironmaiden trump
// a) -> blackmore boyko ceca djordjano fsb ironmaiden keks pesho scorpions tita trump
// б) -> scorpions djordjano tita boyko pesho blackmore ironmaiden
// в) -> scorpionstitapeshoblackmorekekstrump
// г) -> ironmaidencecafsbboykodjordjano
```
