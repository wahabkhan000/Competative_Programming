# Competitive Programming Solutions

A collection of problem solutions from **Codeforces** and **Codewars**, implemented in C++, Python, and Java.

## Languages & Distribution

| Language | Percentage | Use Case |
|----------|-----------|----------|
| C++ | 74.5% | Primary language for competitive programming solutions |
| Python | 20.2% | Utility tools and problem demonstrations |
| Java | 5.3% | Object-oriented problem-solving approaches |

## Problem Categories

**String & Text Processing**
- Case conversion and character transformations
- Pattern matching and character encoding
- String searching and palindrome detection

**Number Theory & Mathematics**
- Prime factorization and primality testing
- Digit manipulation and number properties
- Big integer arithmetic
- Modular arithmetic operations

**Arrays & Data Structures**
- Sorting and searching algorithms
- Array transformations and manipulations
- Matrix operations and traversals
- Linked list operations

**Algorithms & OS Concepts**
- Banker's Algorithm (deadlock avoidance)
- Sieve of Eratosthenes (prime generation)
- Fibonacci and Tribonacci sequences
- Pattern generation and traversal

**Game Theory & Logic**
- Greedy problem-solving
- Decision logic and pattern recognition
- Game outcome prediction

**Utilities** (Python)
- Unit system converter
- Number system converter (binary, hex, octal)
- BMI calculator
- Basic security encryption

## Key Implementations

### Banker's Algorithm
Deadlock-avoidance algorithm for operating systems with multiple processes and resource types.
- Time complexity: O(n² × m)
- Detects unsafe states and safe execution sequences

### Prime Operations
Multiple approaches: trial division, Sieve of Eratosthenes, factorization, gap finding

### Linked List Arithmetic
Addition of large numbers represented as linked lists with automatic carry handling

### String Transformations
Character mapping, substitution, and O(n) efficient string building

### Matrix Traversal
Clockwise spiral traversal, pattern generation, and matrix search

## Getting Started

### Requirements
- **C++**: C++11 or later (g++, clang, or MSVC)
- **Python**: 3.6+
- **Java**: JDK 8+

### Compiling & Running

**C++**
```bash
g++ -std=c++11 -O2 -o solution Problem_Name.cpp
./solution
```

**Python**
```bash
python3 filename.py
```

**Java**
```bash
javac ClassName.java
java ClassName
```

## Example: Watermelon Problem

A simple check for even numbers greater than 2.

```cpp
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

**Input**: 4  
**Output**: YES

## Portfolio Purpose

This repository demonstrates:
- Proficiency in multiple programming languages
- Understanding of fundamental algorithms and data structures
- Problem decomposition and optimization skills
- Experience with competitive programming platforms
- Edge case handling and efficient coding practices

## Problem Sources

- [Codeforces](https://codeforces.com) - Competitive programming platform
- [Codewars](https://codewars.com) - Code challenge platform

## Notes

- All solutions are standalone, executable programs with integrated I/O handling
- Some problems have multiple solution approaches
- Python files demonstrate practical application development
- Java solutions show object-oriented problem-solving

---

For detailed explanations, refer to individual source files.
