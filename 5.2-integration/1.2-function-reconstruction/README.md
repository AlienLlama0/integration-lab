
# 1.2 — Function Reconstruction With Initial Conditions

**Difficulty:** Beginner+

## Objective

Learn how to reconstruct a function from its derivative and an initial condition.

In the previous project, you evaluated known functions.

Now you will work backward.

Instead of receiving the function:

\[
f(x)
\]

You will receive its derivative:

\[
f'(x)
\]

Your task is to reconstruct the original function using integration.

You will also learn how an initial condition determines the constant of integration.

## Mathematical Background

### 1. Antiderivatives

Integration can be used to find a function whose derivative is known.

For example:

\[
f'(x)=6x+4
\]

Integrate term by term:

\[
\int 6x\,dx=3x^2
\]

\[
\int 4\,dx=4x
\]

Therefore:

\[
f(x)=3x^2+4x+C
\]

The constant `C` is called the **constant of integration**.

### 2. Why Do We Need C?

Different functions can have the same derivative.

For example:

\[
f(x)=x^2+5
\]

and:

\[
g(x)=x^2+10
\]

Both have the derivative:

\[
2x
\]

Differentiation removes constants.

Integration must account for this by adding `C`.

### 3. Using an Initial Condition

Suppose:

\[
f'(x)=6x+4
\]

After integration:

\[
f(x)=3x^2+4x+C
\]

We are also given:

\[
f(0)=7
\]

Substitute `x = 0`:

\[
7=3(0)^2+4(0)+C
\]

Therefore:

\[
C=7
\]

The reconstructed function is:

\[
\boxed{f(x)=3x^2+4x+7}
\]

## Tasks

### Task 1 — Solve 5 Problems on Paper

Reconstruct the function from its derivative.

For each problem:

1. Integrate the derivative.
2. Add the constant of integration.
3. Use the initial condition.
4. Find `C`.
5. Write the final function.

#### Problem 1

\[
f'(x)=6x+4
\]

\[
f(0)=7
\]

#### Problem 2

\[
f'(x)=4x-3
\]

\[
f(1)=5
\]

#### Problem 3

\[
f'(x)=10x^2+6x
\]

\[
f(0)=2
\]

#### Problem 4

\[
f'(x)=8x+5
\]

\[
f(2)=20
\]

#### Problem 5

\[
f'(x)=3x^2-4x+6
\]

\[
f(1)=10
\]

Try to solve all five before writing any code.

### Task 2 — Implement the Reconstructed Function

Choose one of your reconstructed functions.

For example:

\[
f(x)=3x^2+4x+7
\]

Implement a programming function:

```text
evaluate(x)
```

It should return the value of the reconstructed function.

Example:

```text
Input: 2
Output: 27
```

Because:

\[
f(2)=3(2)^2+4(2)+7
\]

\[
f(2)=27
\]

### Task 3 — Accept an Initial Condition

Allow the user to provide an initial condition.

For example:

```text
Enter initial x: 0
Enter initial f(x): 7
```

Your program should use the initial condition to determine `C`.

You may start with a predefined derivative function.

You do not need to parse arbitrary mathematical expressions yet.

### Task 4 — Evaluate the Reconstructed Function

After finding `C`, allow the user to enter a value of `x`.

Example:

```text
Derivative: 6x + 4

Initial condition:
f(0) = 7

Enter x: 2

Reconstructed function:
f(x) = 3x^2 + 4x + 7

Result: 27
```

### Task 5 — Verify the Initial Condition

Your program should verify that the reconstructed function satisfies the initial condition.

For:

\[
f(x)=3x^2+4x+7
\]

And:

\[
f(0)=7
\]

The program should confirm:

```text
Initial condition verified.
```

### Task 6 — Verify the Antiderivative

Differentiate your reconstructed function manually.

For example:

\[
f(x)=3x^2+4x+7
\]

Differentiate:

\[
f'(x)=6x+4
\]

This matches the original derivative.

You should be able to explain why the constant disappears.

## CSE Connection

Initial conditions are the starting state of a system.

Many systems are described by how their state changes.

For example:

- Position changes according to velocity.
- Velocity changes according to acceleration.
- A system's state changes over time.
- Integration can reconstruct a state from its rate of change.

This project introduces the idea of reconstructing a system from its derivative and an initial state.

You will use this idea in the next project, Motion Lab v1.

## Constraints

For this project:

- Use predefined polynomial derivatives.
- Do not build a symbolic parser.
- Do not use a computer algebra system.
- Do not use numerical integration.
- Do not implement arbitrary mathematical expressions.
- Keep the implementation simple.
- Focus on the mathematical process.

## Completion Gate

Before moving to 1.4, you should be able to:

- [ ] Solve 5 reconstruction problems on paper.
- [ ] Explain indefinite integration.
- [ ] Explain the constant of integration.
- [ ] Reconstruct a function from its derivative.
- [ ] Use an initial condition to determine `C`.
- [ ] Implement a CLI that evaluates the reconstructed function.
- [ ] Verify the initial condition.
- [ ] Verify the antiderivative by differentiation.
- [ ] Explain the CSE connection.

## Reflection

After completing the project, answer these questions:

1. Why does integration include a constant of integration?
2. Why can't the derivative alone determine the original function?
3. How does an initial condition help reconstruct a function?
4. What is the difference between evaluating a function and reconstructing a function?
5. How is this related to the starting state of a computer system?
6. What would happen if the initial condition changed?

Write your answers in your own words.

## Reference Solution

The reference solution is available in the repository's central solution directory:

```text
../../../solution/5.2-integration/1.2-function-reconstruction/
```

Try to complete the challenge yourself before looking at the reference implementation.

## Next Project

**1.3 — Motion Lab v1**

You will use integration to reconstruct position from velocity and build your first meaningful simulation-related CLI.