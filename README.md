# Competitive Programming Solutions

A comprehensive collection of solutions to problems from **Codeforces** and **Codewars**, implemented in C++, Python, and Java. This repository demonstrates proficiency in algorithmic problem-solving and data structures, making it suitable for technical interviews and competitive programming portfolio display.

---

## 📊 Repository Overview

- **Total Solutions**: 200+ problems solved
- **Primary Language**: C++ (74.5%)
- **Supporting Languages**: Python (20.2%), Java (5.3%)
- **Problem Difficulty**: Easy to Medium
- **Focus Areas**: String manipulation, number theory, arrays, linked lists, mathematical algorithms

---

## 🏗️ Architecture & Organization

The repository is organized by **problem statement**, with each file containing:
- A complete, executable solution
- Input/output handling for standalone execution
- Comments explaining algorithmic approach when applicable

### Problem Categories

#### **String & Text Processing**
- Case conversion and string transformations (`Convert_string_to_camel_case.cpp`, `WeIrD_StRiNg_CaSe.cpp`)
- String searching and pattern matching (`Pangram.cpp`, `Boy_or_Girl.cpp`)
- Character encoding (`The_Vowel_Code.cpp`, `Replace_With_Alphabet_Position.cpp`)

#### **Mathematical & Number Theory**
- Prime number detection and factorization (`Prime_Factor.cpp`, `Primes_in_numbers.cpp`, `Gap_in_Primes.cpp`)
- Number properties (`Almost_Prime.cpp`, `Disarium_Number.cpp`, `Nearly_Lucky_Number.cpp`)
- Big number arithmetic (`Adding_Big_Numbers.cpp`, `Add_Two_Numbers.cpp`)
- Digit manipulation (`Sum_of_Digits_Digital_Root.cpp`, `Write_Number_in_Expanded_Form.cpp`)

#### **Array & Data Structure Operations**
- Sorting and searching (`My_First_Sorting_Problem.cpp`, `Search_for_Pretty_Integers.cpp`)
- Array transformations (`Moving_Zeros_To_The_End.cpp`, `Ascesnding_Array.cpp`)
- Matrix operations (`Beautiful_Matrix.cpp`, `Clock_Wise_Spiral.cpp`, `Fox_And_Snake.cpp`)

#### **Algorithm Implementation**
- Banker's Algorithm (deadlock avoidance) - `Banker_Algorithm.cpp`
- Sieve of Eratosthenes (prime generation) - `Sieve_of_Eratosthenes.cpp`
- Fibonacci sequences - `N-th_Fibonacci.cpp`, `Tribonacci_Sequence.cpp`

#### **Logic & Brainteaser Problems**
- Game theory (`Friend_Game.cpp`, `Taxi.cpp`, `The_Train_Problem.cpp`)
- Decision logic (`Division?.cpp`, `Ambitious_Kid.cpp`)
- Pattern recognition (`Fox_And_Snake.cpp`, `Borze.cpp`)

#### **Utility Applications** (Python)
- Unit conversion systems - `Unit System Converter.py`
- Number system conversion - `Number System Converter.py`
- BMI calculator - `BMI Creator.py`
- Security encryption basics - `Security.py`

#### **Java Solutions**
- Gate logic simulator - `Gates.java`
- Magnitude comparison - `Magnitude_Comparator.java`

---

## 🔍 Key Algorithms & Techniques

### 1. **Banker's Algorithm** (`Banker_Algorithm.cpp`)
A deadlock-avoidance algorithm used in operating systems. This implementation:
- Tracks allocated and maximum resources for multiple processes
- Calculates remaining resource needs
- Determines safe execution sequences
- Detects potential deadlock conditions
- **Time Complexity**: O(n² × m) where n = processes, m = resource types

**Example Use Case**: Resource allocation in concurrent systems with 3 processes and 3 resource types.

### 2. **Prime Number Operations**
Multiple approaches implemented:
- Trial division for single primality testing
- Sieve of Eratosthenes for range queries
- Prime factorization and properties
- Gap finding between consecutive primes

### 3. **Linked List Arithmetic** (`Add_Two_Numbers.cpp`)
Adds two large numbers represented as linked lists:
- Converts linked list to string representation
- Performs digit-by-digit addition with carry
- Returns result as a new linked list
- Handles numbers of different lengths
- **Space Complexity**: O(max(len(l1), len(l2)))

### 4. **String Transformation Algorithms**
- Character mapping and substitution
- Pattern-based string modification
- Efficient string building with O(n) operations

### 5. **Matrix Traversal**
- Clockwise spiral traversal of 2D arrays
- Pattern generation (Fox and Snake)
- Matrix search operations

---

## 🚀 Building & Running

### Requirements
- **C++**: C++11 or later
  - Compiler: g++, clang, or MSVC
- **Python**: Python 3.6+
- **Java**: JDK 8+

### Compiling C++ Solutions
```bash
# Basic compilation
g++ -std=c++11 -o solution Problem_Name.cpp

# With optimization flags
g++ -std=c++11 -O2 -o solution Problem_Name.cpp
```

### Running Solutions

**C++ Example** (Simple I/O):
```bash
./solution
# Enter input when prompted
```

**C++ Example** (File I/O):
```bash
g++ -o watermelon Watermelon.cpp
echo "4" | ./watermelon  # Output: YES
```

**Python Example**:
```bash
python3 "BMI Creator.py"
```

**Java Example**:
```bash
javac Gates.java
java Gates
```

---

## 📋 Example Problems & Solutions

### Example 1: Watermelon Problem
**Problem**: Given a number, check if it's even and greater than 2.

```cpp
// Watermelon.cpp
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n > 2 && n % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
```

**Functionality**: Demonstrates basic input validation and conditional logic
- **Input**: `4`
- **Output**: `YES`

---

### Example 2: Prime Factorization
**Problem**: Express a number as a product of prime powers.

**Approach** (`Prime_Factor.cpp`):
1. Divide by 2 while divisible
2. Check odd divisors up to √n
3. If remainder > 1, it's a prime factor
4. Output in format: `prime^power`

**Time Complexity**: O(√n)

---

### Example 3: Banker's Algorithm (Deadlock Avoidance)
**Problem**: Determine safe process execution order to prevent deadlock.

**Input**:
- Total available resources
- Allocated resources per process
- Maximum need per process

**Output**:
- Safe sequence of process execution
- Deadlock warning if unsafe state detected

**Example Execution**:
```
Total Available: [10, 5, 7]
Process 0: Allocated [0,1,0], Max [7,5,3]
Process 1: Allocated [2,0,0], Max [3,2,2]
Process 2: Allocated [3,0,2], Max [9,0,2]

Safe Sequence: P1 → P0 → P2
```

---

### Example 4: Add Two Numbers (Linked Lists)
**Problem**: Add two large numbers stored as linked lists in reverse order.

**Approach**:
1. Convert each linked list to string
2. Pad shorter string with leading zeros
3. Add digit by digit with carry
4. Create result linked list

**Example**:
- Input: l1 = [2→4→3], l2 = [5→6→4]
- Represents: 342 + 465 = 807
- Output: [7→0→8]

---

## 📊 Problem Statistics

| Category | Count | Difficulty |
|----------|-------|------------|
| String Operations | 25+ | Easy-Medium |
| Number Theory | 30+ | Easy-Medium |
| Arrays | 20+ | Easy-Medium |
| Matrix Operations | 10+ | Medium |
| Algorithms | 8+ | Medium |
| Game/Logic | 15+ | Medium |
| Utilities | 5 | Easy |

---

## 🎯 Learning Outcomes

This repository demonstrates:
- ✅ Proficiency in C++ with modern features (C++11+)
- ✅ Strong understanding of fundamental algorithms and data structures
- ✅ Problem decomposition and solution optimization
- ✅ Code organization and readability
- ✅ Experience with multiple programming languages
- ✅ Ability to handle edge cases and input validation
- ✅ Performance optimization (time and space complexity awareness)

---

## 🔗 Problem Sources

- **Codeforces** (codeforces.com) - Competitive programming platform
- **Codewars** (codewars.com) - Code challenge platform

---

## 📝 Notes

- All solutions are **standalone executables** with integrated I/O handling
- Some problems have multiple solutions (e.g., `Adding_Big_Numbers.cpp`, `Adding_big_Numbers.cpp`)
- Python utilities demonstrate practical application development
- Java solutions show object-oriented problem-solving approaches

---

## 💡 Usage for Learning

This repository is ideal for:
- **Technical Interview Preparation**: Algorithm and data structure practice
- **Competitive Programming**: Reference implementations and techniques
- **Portfolio Display**: Demonstrates problem-solving skills for CS students
- **Learning Resource**: Study solutions to understand different approaches

---

## 📄 License

This repository contains personal solutions to competitive programming problems. Feel free to use these solutions for educational purposes.

---

**Last Updated**: September 2026

---

*For detailed solutions and explanations of specific problems, refer to individual `.cpp`, `.py`, or `.java` files.*