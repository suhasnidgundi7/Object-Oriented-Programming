## What is a Complex Number?
A complex number is a number that can be expressed in the form `a + bi`, where `a` and `b` are real numbers, and `i` is the imaginary unit, which satisfies the equation `i^2 = -1`.

## How does the Program Work?
The `Complex` class represents the complex number data type in C++. It has two data members, `realNumber` and `imaginaryNumber`, which represent the real and imaginary parts of a complex number, respectively.

The class has a single constructor that takes two arguments and initializes the complex number to the specified values.

The `operator+` and `operator*` functions overload the `+` and `*` operators, respectively, to add and multiply two complex numbers. The `friend` keyword is used to allow these functions to access the private data members of the `Complex` class.

The `operator<<` and `operator>>` functions overload the `<<` and `>>` operators, respectively, to print and read complex numbers. The `friend` keyword is used to allow these functions to access the private data members of the `Complex` class.

## Concepts Used to Write the Program
The `Complex` class implementation uses the following concepts:

- Classes and Objects: The `Complex` class is an example of a user-defined class in C++. It has data members and member functions, and can be used to create objects of the class type.
- Constructors: The `Complex` class has a single constructor that takes two arguments and initializes the complex number to the specified values.
- Operator Overloading: The `Complex` class overloads the `+`, `*`, `<<`, and `>>` operators to add, multiply, print, and read complex numbers, respectively.
- Friend Functions: The `operator+`, `operator*`, `operator<<`, and `operator>>` functions are declared as friend functions of the `Complex` class, which allows them to access the private data members of the class.

