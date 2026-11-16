# Student Management System (C++ Mini Project)

A C++ Object-Oriented Programming (OOPS) mini-project that manages student records with persistent CSV file storage.

## Features
- **Add Student:** Store student details including Roll Number, Name, Department, and Marks.
- **Display Records:** View all stored student records in a formatted layout.
- **Search by Roll Number:** Quickly look up an individual student record.
- **Delete Student:** Remove a student record by Roll Number.
- **File Persistence (`students_db.csv`):** Save records to a CSV file and reload them back into memory.

## OOPS & C++ Concepts Used
- **Classes & Objects:** `Student` (data model) and `StudentManager` (operations handler)
- **Encapsulation:** Private data members accessed via public getters and member functions
- **Constructors:** Parameterized constructor with default arguments
- **STL Containers:** `std::vector` for dynamic storage of student objects
- **File Handling:** `std::ofstream` and `std::ifstream` for CSV serialization and parsing

## How to Run

### Using g++ (Terminal / VS Code)
```bash
g++ main.cpp -o student_management
./student_management