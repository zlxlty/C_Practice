NOTE
============
------------------
```c
int string[][10];
int *string[10];
int (* string)[10];
```  
### They are largely different!
------------------
##### 2d array:
```c
int string[5][10];

string[1][0] = 'A'; //No Error
*string++ //error: lvalue required as increment operand
```
string:    


|10 chars|10 chars|10 chars|...|10 chars|
|---|---|---|---
|0|10|20|...|50|
----------------------------
##### array pointer:
```c
int (* string)[10];
```
string  -->  |10 chars|
*****
##### pointers array:
```c
int *string[10]
```
string:   

|int s0* --> |NULL|
|---|---|
|int s1* --> |NULL|
|int s2* --> |NULL|
|...|...|
|int s9* --> |NULL|
