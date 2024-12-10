## Comments:
Coments are either single line:
``` code
~ This is a comment
```
Or multi-line comments:
``` code
~/ This comment
spans multiple
lines /~
```

## Variables
To declare a variable you simply enter the type of the variable followed by the name of the vaiable:
``` code 
int x; ~ creates an integer variable named x
```

To assign a value to a variable you use the assignment operator (<-):
``` code
x <- 5; ~ assigns the value 5 to the variable x
```
## Data Types
There are several basic data types in the language, including:
* Integers
* Doubles
* Characters
* Booleans
* Longs
* Strings

## Operators:
### Arithmentic
The language supports the following arithmetic operators:
* Addition (+)
* Subtraction (-)
* Multiplication (*)
* Division (/)
* Exponent (^)
* Modulus (%)
* Increment (++) and Decrement (--)
* Square Root (/^)
### Comparison
* Equal to value (===) 
* Not Equal to (!=)
* Greater than (>)
* Less than (<)
* Greater than or equal to (>=)
* Less than or equal to (<=)
* Same identity (is)
### Logical
* And (&&)
* Or (||)
* Not (!)
* Xor (|X|)
### Assignment
* Assign value to variable (<-)
### Bitwise
* Bitwise AND (#&)
* Bitwise OR (#|)
* Bitwise XOR (|#X|)

## Conditionals:
### If-Else Statement
```code
if (condition) -> {
    ~ Do something
} elif (condition) -> {
    ~ Do something else
} else -> {
    ~ Do the default
}
```
### Switch Statement
``` code
switch (case) {
    match (value) ->
        ~ Do something
        break;
    match (value) ->
        ~ Do something else
        break;
    default ->
        ~ Do the default
        break; 
}
```
### Ternary Operator
``` code
value = ?(condition) -> ~ Do something : ~ Do something else
```

## Loops
### For Loop
``` code
for (init, condition, increment) -> {
    ~ Do something
}
```
### For Each
``` code
for* (item >> collection) -> {
    ~ Do something with item
}

```

### While
``` code
while (condition) -> {
    ~ Do something
}
```
### Until
``` code
until (condition) -> {

}
```
## Functions
### Function Declaration
``` code
function void name (int param1, string param2) -> {
    ~ Do something
}
~ defaults to void if not specified
```
## Return:
``` code
<<< value;
```

### Function Calling:
``` code
int result <- @functionName(parameters);
```