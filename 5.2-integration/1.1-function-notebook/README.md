# 1.1 — Build a Function Notebook

**Difficulty:** Beginner → Beginner+

## Objective

Learn how mathematical functions become program logic.

You will create a small program that evaluates known mathematical functions for a given value of `x`.

The focus is on understanding the connection between:

- Mathematical functions.
- Programming functions.
- Parameters.
- Return values.
- User input.
- Testing.

You may use Python, C++, TypeScript, or any language you are comfortable with.

---

## Mathematical Background

A function takes an input and produces an output.

For example:

\[
f(x)=2x^3+4x-7
\]

If:

\[
x=2
\]

Then:

\[
f(2)=2(2)^3+4(2)-7
\]

\[
f(2)=16+8-7
\]

\[
\boxed{f(2)=17}
\]

In programming, we can represent this function using a function such as:

```text
evaluate(x)
```

The function receives a value of `x` and returns the calculated result.

---

## Tasks

### Task 1 — Implement `evaluate(x)`

Create a function that evaluates:

\[
f(x)=2x^3+4x-7
\]

Example:

```text
Input: 2
Output: 17
```

Do not build a symbolic parser.

Write the mathematical expression directly in your programming language.

---

### Task 2 — Add 5 Predefined Functions

Add five mathematical functions to your program.

Suggested functions:

#### Function 1

\[
f(x)=2x^3+4x-7
\]

#### Function 2

\[
g(x)=3x^2-5x+2
\]

#### Function 3

\[
h(x)=x^4-2x^2+1
\]

#### Function 4

\[
p(x)=7x-3
\]

#### Function 5

\[
q(x)=5x^3-2x+9
\]

Each function should be implemented as program logic.

You may use separate functions or another simple structure.

---

### Task 3 — Accept Input From the User

Allow the user to enter a value of `x`.

Example:

```text
Enter x: 2
```

Evaluate the selected function and print the result.

You may also allow the user to select which predefined function to evaluate.

---

### Task 4 — Print the Result

Your program should display the calculated result clearly.

Example:

```text
Function: 2x^3 + 4x - 7
x = 2

Result: 17
```

The output format may be different in your language.

---

### Task 5 — Test Different Inputs

Test your functions using:

- Positive values.
- Negative values.
- Zero.
- Decimal values.

Example test cases:

| Function | x | Expected result |
|---|---:|---:|
| `f(x)` | 2 | 17 |
| `f(x)` | 0 | -7 |
| `f(x)` | -1 | -13 |
| `f(x)` | 0.5 | -5.75 |
| `g(x)` | 2 | 4 |
| `g(x)` | -1 | 10 |

Add more test cases as needed.

---

## CSE Connection

Mathematical functions are closely related to programming functions.

| Mathematics | Programming |
|---|---|
| Function | Function |
| Input `x` | Parameter |
| Output `f(x)` | Return value |
| Formula | Program logic |
| Domain | Valid inputs |
| Evaluation | Execution |

This project introduces the idea that mathematical formulas can be translated into executable algorithms.

The same concept will be used in later projects to reconstruct functions from derivatives and model motion.

---

## Constraints

For this project:

- Use predefined mathematical functions.
- Do not build a symbolic parser.
- Do not use a computer algebra system.
- Do not use numerical integration.
- Do not use external libraries for symbolic mathematics.
- Keep the implementation simple.

The goal is to understand function evaluation, not to build a mathematical engine.

---

## Completion Gate

Before moving to 1.3, you should be able to:

- [ ] Explain what a mathematical function is.
- [ ] Implement `evaluate(x)`.
- [ ] Add five predefined functions.
- [ ] Accept input from the user.
- [ ] Print the result.
- [ ] Test positive, negative, zero, and decimal values.
- [ ] Explain how the formula becomes program logic.
- [ ] Explain the connection between mathematical functions and programming functions.

---

## Reflection

After completing the project, answer these questions:

1. What is the difference between a mathematical function and a programming function?
2. What happens when the value of `x` changes?
3. How does the program calculate the result?
4. What happens when `x` is negative?
5. Why are test cases important?
6. What would you change if you had 100 predefined functions?

Write your answers in your own words.

---

## Reference Solution

The reference solution is available in the repository's central solution directory:

```text
../../solution/5.2-integration/1.2-function-notebook/
```

Try to complete the challenge yourself before looking at the reference implementation.

## Next Project

After completing this project:

**1.2 — Function Reconstruction With Initial Conditions**

You will learn how to reconstruct a function from its derivative and use an initial condition to determine the constant of integration.