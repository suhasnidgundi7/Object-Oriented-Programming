## Program Description
The program creates a database of student information system containing the following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact address, Telephone number, Driving license no. and other. The program uses a class `Student` to store the student's information. The program allows the user to add and display student information using a menu-driven interface.

## Concepts Used
The program uses the following concepts:

- Classes and Objects: The program uses classes to represent the student in the student information system database. Objects of this class are created to store and manipulate the data.
- Constructors: The `Student` class has constructors that initialize the data members to the specified values.
- Operator Overloading: The `Student` class overloads the `>>` and `<<` operators to read and print student information, respectively.
- Exception Handling: The program uses a `try-catch` block to catch any exceptions that occur during input, and replaces all data member values with zero values if an exception is caught.