# arrays


## 57. Creating and using arrays

- very common
- 162 games in baseball!
  - use arrays
- group values under a single name
- items in the array are elements

```c
long numbers[10] //array declaration 
```

- index == subscript
- use for loops to access elements
- out of bounds errors can fuck your shit up!!
  - compiler wont check, it's a runtime error

- assignment

```c
grades[100] = 95;
```
- [program](fiveSeven.c)
- see the notes in the program

## 58 Initialization

- [program](fiveEight.c)
- designated initializers
  - enclosing an index in [] allows specification of indexes in any order

```c
float sample_data[500] = {[2] = 500.4, [1] = 300.1, [400] = 400.67};
```

## 59 Multidimensional array

- rows and columns
- it's an array of arrays, bro!

```c

int numbers [3][4] = {
    {10,20,30,40},
    {15,25,35,45},
    {47,48,49,50}
};
```
- inner brackets are optional??
  - what happens if you omit them?
  - I think i see it
- can use designated initalizers too.



