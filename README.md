# Object-Oriented-Programming-In-C
A collection of 10 beginner-friendly C++ programs covering core OOP concepts: classes, constructors, inheritance, polymorphism, templates, STL, exception handling, and file handling.

# C++ OOP Programs

A collection of 10 beginner-friendly C++ programs that demonstrate core Object-Oriented Programming concepts along with essential C++ features like templates, STL, exception handling, and file handling. Each program is short, self-contained, and easy to compile and run.

## Programs

| No. | File | Concept | What it demonstrates |
|-----|------|---------|----------------------|
| 1 | `01_data_types.cpp` | Data types and operators | Variables, constants, user input, and arithmetic operators |
| 2 | `02_constructors.cpp` | Constructors and destructors | Default, parameterized, copy, and move constructors |
| 3 | `03_bank_account.cpp` | Classes and encapsulation | A bank account with private data and a deposit function |
| 4 | `04_inheritance.cpp` | Inheritance | Multilevel inheritance: Person → Student → GraduateStudent |
| 5 | `05_runtime_polymorphism.cpp` | Runtime polymorphism | Virtual functions and base-class pointers with Circle, Rectangle, Triangle |
| 6 | `06_compile_time_polymorphism.cpp` | Compile-time polymorphism | Function overloading and operator overloading with a Complex class |
| 7 | `07_generic_stack.cpp` | Templates | A generic Stack class working with int, float, and string |
| 8 | `08_stl_containers_algorithms.cpp` | STL | vector, map, unordered_map, `sort()`, and `find()` |
| 9 | `09_custom_exception_handling.cpp` | Exception handling | A custom exception class with try/catch |
| 10 | `10_csv_file_reader_writer.cpp` | File handling | Reading and writing a CSV file using `fstream` |

## OOP Concepts Covered

- Classes and objects
- Encapsulation
- Constructors and destructors (including copy and move)
- Inheritance (multilevel)
- Polymorphism (compile-time and runtime)
- Abstraction through virtual functions
- Templates (generic programming)
- Exception handling
- File handling

## How to Compile and Run

Clone the repository:

```
git clone https://github.com/totallynotparag/cpp-oop-programs.git
cd cpp-oop-programs
```

Compile any program (example uses program 4):

```
g++ 04_inheritance.cpp -o inheritance
./inheritance
```

On Windows, run `inheritance.exe` instead.

## Requirements

- A C++ compiler such as g++ (GCC), Clang, or MSVC
- C++11 or later (needed for move constructors and `override`)

## Author

totallynotparag
