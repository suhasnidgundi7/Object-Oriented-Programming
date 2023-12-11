## Program Description
The program creates a database of publications containing the following information: Title and Price. The program uses a class `Publication` to store the publication's information, and two derived classes `Book` and `Tape` to represent a book and an audio cassette tape, respectively. The program allows the user to input the publication's information using the `insertData` function, and display the publication's information using the `displayData` function. If an exception is caught, all data member values are replaced with zero values and printed to the console.

## Concepts Used
The program uses the following concepts:

- Classes and Objects: The program uses classes to represent the publication, book, and tape in the publication database. Objects of these classes are created to store and manipulate the data.
- Inheritance: The `Book` and `Tape` classes inherit from the `Publication` class using the `public` access specifier.
- Constructors: The `Publication`, `Book`, and `Tape` classes have constructors that initialize the data members to the specified values.
- Operator Overloading: The `Publication` class overloads the `>>` and `<<` operators to read and print publication information, respectively.
- Exception Handling: The program uses a `try-catch` block to catch any exceptions that occur during input, and replaces all data member values with zero values if an exception is caught.
