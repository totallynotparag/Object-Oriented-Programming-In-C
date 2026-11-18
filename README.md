# Object-Oriented-Programming-In-C
A collection of 10 beginner-friendly C++ programs covering core OOP concepts: classes, constructors, inheritance, polymorphism, templates, STL, exception handling, and file handling.

# Object-Oriented Programming in C++

A collection of 10 beginner-friendly C++ programs that cover core Object-Oriented Programming concepts, along with essential C++ features like templates, the STL, exception handling, and file handling. Each program is short, self-contained, and easy to compile and run.

---

## Programs

| No. | File | Topic | What it demonstrates |
|-----|------|-------|----------------------|
| 1 | `01_data_types.cpp` | Data types and operators | `int`, `float`, `double`, `char`, `bool`, constants, user input, and arithmetic operators |
| 2 | `02_constructors.cpp` | Constructors and destructors | Default, parameterized, copy, and move constructors, plus the destructor |
| 3 | `03_bank_account.cpp` | Classes and encapsulation | A bank account with private data members and a validated deposit function |
| 4 | `04_inheritance.cpp` | Inheritance | Multilevel inheritance: Person → Student → GraduateStudent |
| 5 | `05_runtime_polymorphism.cpp` | Runtime polymorphism | Virtual functions and a base-class pointer with Circle, Rectangle, and Triangle |
| 6 | `06_compile_time_polymorphism.cpp` | Compile-time polymorphism | Function overloading and operator overloading using a Complex number class |
| 7 | `07_generic_stack.cpp` | Templates | A generic Stack class that works with `int`, `float`, and `string` |
| 8 | `08_stl_containers_algorithms.cpp` | STL | `vector`, `map`, `unordered_map`, `sort()`, and `find()` |
| 9 | `09_custom_exception_handling.cpp` | Exception handling | A custom exception class with `try` and `catch` |
| 10 | `10_csv_file_reader_writer.cpp` | File handling | Reading and writing a CSV file using `fstream` |

---

## Concepts Covered

- Classes and objects
- Encapsulation (private and protected members)
- Constructors and destructors, including copy and move constructors
- Inheritance and constructor chaining
- Compile-time polymorphism (function and operator overloading)
- Runtime polymorphism (virtual functions, `override`, virtual destructors)
- Templates (generic programming)
- STL containers and algorithms
- Custom exception handling
- File handling with `fstream`

---

## Program Details

**1. Data Types**
Declares variables of the basic data types, reads the age from the user, and performs arithmetic operations (`+`, `-`, `*`, `/`, `%`).

**2. Constructors**
Shows when each kind of constructor runs: default, parameterized, copy (`Student s3 = s2`), and move (`std::move`). The destructor messages show the order in which objects are destroyed.

**3. Bank Account**
Takes the account holder name, account number, and initial balance from the user, then deposits an amount. Invalid (zero or negative) deposits are rejected.

**4. Inheritance**
Builds a three-level class hierarchy where each class adds its own data and passes the shared data up to its parent constructor.

**5. Runtime Polymorphism**
A `Shape` base class with a virtual `area()` function is overridden by `Circle`, `Rectangle`, and `Triangle`. One base pointer calls the right version at runtime.

**6. Compile-Time Polymorphism**
Overloads `add()` for `int` and `double`, and overloads the `+` operator to add two complex numbers.

**7. Generic Stack**
A class template with `push`, `pop`, and `display`, including overflow and underflow checks. The same class is used with three different data types.

**8. STL Containers and Algorithms**
Sorts a vector of marks, searches it with `find()`, and stores student marks in a `map` and an `unordered_map`.

**9. Custom Exception**
Defines `InsufficientBalance` by extending `std::exception` and throws it when a withdrawal amount is more than the balance.

**10. CSV Reader and Writer**
Writes student records to `students.csv`, then moves the read pointer back to the start with `seekg()` and prints each line. It also shows `tellp()` and `tellg()`.

---

## How to Compile and Run

1. Clone the repository:
   ```
   git clone https://github.com/totallynotparag/Object-Oriented-Programming-In-C.git
   cd Object-Oriented-Programming-In-C
   ```

2. Compile any program (this example uses program 4):
   ```
   g++ -std=c++11 04_inheritance.cpp -o inheritance
   ```

3. Run it:
   ```
   ./inheritance
   ```
   On Windows, run `inheritance.exe` instead.

Programs 1 and 3 ask for input, so type your values when prompted. Program 10 creates a `students.csv` file in the folder where you run it.

---

## Requirements

- A C++ compiler such as g++ (GCC), Clang, or MSVC
- C++11 or later (needed for move constructors, `override`, and `noexcept`)

---

## Project Structure

```
Object-Oriented-Programming-In-C/
├── 01_data_types.cpp
├── 02_constructors.cpp
├── 03_bank_account.cpp
├── 04_inheritance.cpp
├── 05_runtime_polymorphism.cpp
├── 06_compile_time_polymorphism.cpp
├── 07_generic_stack.cpp
├── 08_stl_containers_algorithms.cpp
├── 09_custom_exception_handling.cpp
├── 10_csv_file_reader_writer.cpp
└── README.md
```

---

## Author

Your Name

GitHub: [@totallynotparag](https://github.com/totallynotparag)
