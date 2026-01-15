# Postfix Expression Evaluator (C++)

This project implements a **Postfix (Reverse Polish Notation) Expression Evaluator** using **C++**, the **STL stack**, and **Object-Oriented Programming (OOP)** concepts.  
It evaluates arithmetic expressions written in postfix form efficiently.

---

## 🎯 Objective

- Understand **stack-based expression evaluation**
- Apply **OOP principles** in C++
- Practice handling operators and operands
- Learn how **postfix notation** works in real programs

---

## 🧠 Concepts Used

- Stack Data Structure (STL `stack`)
- Object-Oriented Programming (OOP)
- Classes and Member Functions
- Conditional Logic
- Character & Digit Processing
- Expression Evaluation Algorithms

---

## 🧾 Program Description

- The program defines a class **`PostfixEvaluator`**
- A stack is used to store operands
- The postfix expression is scanned character by character:
  - If a digit is found → push it onto the stack
  - If an operator is found → pop two operands, apply the operation, and push the result
- The final value left in the stack is the evaluated result

---

## 🧩 Class Structure

### Class: `PostfixEvaluator`

**Member Function**
- `int evaluate(string exp)`  
  Evaluates a postfix expression using a stack and returns the result.

---

## ▶️ Example Expression

