# Numbers In C Programming Language

## What you would learn

### How to declare variables and assign types to it
### How to add, subtract, divide, multiply in C
### Deal with various math symobls
### Carry out numerous arithmetic operations in C



## Variable Declarations

#### What is a variable ?

A variable is simply a container that holds a particular value. A variable can be modified a run time, (ie) another value can be assigned to it.

#### How to declare a variable in C

First you specify the type of variable

#### We have numerous data types in C

##### Int
##### Char
##### Float
##### Unsigned Long Int
##### Boolean
##### Null
##### Struct || Objects
##### Arrays


To declare a variable, we must add the type of the variable then the name and its corresponding value


```c

//create a variable to hold my age
//my age is a number so it would definately be an int

int my_age = 17;

```

if i were to declare a variable to hold my name it would be a char


```c

//create a variable that holds my name
//my name is character or a string so it would hold the char data type
//but in C, a string is an array of characters so you must specify the length of the string
//in my own case it is 8 and it must be in " " inverted commas

char my_name[8] = "Emmanuel"


```

Then next to floats


A float is simply a decimal number ege 2.0.5


To declare a float we use the float keyword then the name and value of the float respectively


```c

float my_PI = 3.142;

```

