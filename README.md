# CSE103 Structured Programming - Class Test I  
**East West University**  
**Spring 2025 | Section-4**  
**Instructor: Dr. Maheen Islam**  
**Total Marks: 25 | Time: 45 Minutes**

---

## Overview  
This repository contains the breakdown and pseudo-code solutions for the **CSE103 Structured Programming Class Test I**. Each question is designed to test understanding of basic programming concepts in C, such as arithmetic operations, conditionals, and user input/output.

---

## Questions & Pseudo-code Solutions

### 1. **Math Formula Evaluation** 🧮

**Problem:**  
Write a C program that takes an integer `n` as input and computes the following formula:  

```
result = (n^3 + 2n) / (n + 1) + sqrt(n)
```

**Expected Output:**  
Print the result with **two decimal places**.

**Pseudo-code:**
```
Input: Integer n
Calculate numerator = n^3 + 2 * n
Calculate denominator = n + 1
Calculate result = (numerator / denominator) + sqrt(n)
Print result with 2 decimal places
```

---

### 2. **Employee Salary Increment Based on Performance** 💼

**Problem:**  
Calculate and print the new salary of an employee based on their performance score.

- Score ≥ 90 → 20% increment  
- 80 ≤ Score < 90 → 15% increment  
- 70 ≤ Score < 80 → 10% increment  
- Score < 70 → No increment

**Pseudo-code:**
```
Input: Current salary, Performance score
If score ≥ 90:
    salary += 0.20 * salary
Else if score ≥ 80:
    salary += 0.15 * salary
Else if score ≥ 70:
    salary += 0.10 * salary
Else:
    salary remains same
Output: New salary
```

---

### 3. **Evaluate Output of Given C Expression** 🧠

**Problem:**  
Given:
```c
int a = 12, b = 5;
float x = 3.5, y;
y = pow(a, b / 2) + (x * (b / 2)) - sqrt(a + b);
printf("%.2f", y);
```

**Concepts Tested:** Type casting, integer division, precedence, math functions

**Pseudo-code:**
```
a = 12, b = 5
x = 3.5
Evaluate y:
  = pow(12, 2) + (3.5 * 2) - sqrt(17)
  = 144 + 7 - 4.123
  ≈ 146.88
Output: y rounded to 2 decimal places
```

---

### 4. **Find and Correct Errors in C Code** ⚠️

**Problem:**  
Identify syntax and logic errors in the provided C snippet.

**Issues Found:**
- `Int` should be `int`
- Missing semicolon after `else`
- Incorrect use of `X` instead of `x`
- Incorrect casing and bracket structure

**Corrected Pseudo-code:**
```
Input: x, y, z
If x > y and x > z:
    print x is largest
Else if y > x and y > z:
    print y is largest
Else:
    print z is largest
```

---

### 5. **Convert Years, Months, and Days to Hours** ⏰

**Problem:**  
Given years, months, and days, convert the total time to hours.

**Assumptions:**  
- 1 year = 365 days  
- 1 month = 30 days  
- 1 day = 24 hours  

**Pseudo-code:**
```
Input: years, months, days
total_days = years * 365 + months * 30 + days
total_hours = total_days * 24
Output: total_hours
```

---

## License  
This repository is intended for academic and educational use.

