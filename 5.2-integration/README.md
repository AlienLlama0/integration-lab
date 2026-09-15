
# 5.2 — Integration

A practical learning track for understanding integration through mathematics, programming, and real-world computer science applications.

This track is designed for gradual progression, starting from evaluating known functions and ending with a small polynomial function reconstruction system.

## Learning Objective

By completing this track, you should be able to:

- Understand indefinite integration.
- Find antiderivatives of basic polynomial functions.
- Use initial conditions to determine constants.
- Verify antiderivatives through differentiation.
- Translate mathematical functions into program logic.
- Apply integration to motion and simulation.
- Build a limited polynomial integration system.

## Prerequisites

Before starting, you should be comfortable with:

- Basic algebra.
- Polynomial functions.
- Exponents.
- Basic differentiation.
- Variables and functions in programming.
- Basic CLI input and output.

You do not need to know symbolic algebra or advanced calculus.

## Learning Philosophy

> Understand the mathematics. Translate it into logic. Build something with it.

Every project follows the same pattern:

1. Learn the mathematical concept.
2. Solve problems on paper.
3. Implement the concept in code.
4. Test your implementation.
5. Explain the CSE connection.
6. Complete the project gate.

You may use Python, C++, TypeScript, or any other language you are comfortable with.

---

# Project Roadmap

## 1.2 — Build a Function Notebook

**Difficulty:** Beginner → Beginner+

### Objective

Learn how mathematical functions become program logic.

### Mathematical Example

\[
f(x)=2x^3+4x-7
\]

For:

\[
x=2
\]

The result is:

\[
f(2)=17
\]

### Tasks

- [ ] Implement `evaluate(x)`.
- [ ] Add 5 predefined functions.
- [ ] Accept a value of `x` from the user.
- [ ] Print the result.
- [ ] Test negative values.
- [ ] Test zero.
- [ ] Test decimals.

### CSE Connection

Functions are the foundation of programming.

This project connects mathematical functions with:

- Function definitions.
- Parameters.
- Return values.
- Input and output.
- Testing.

### Important Rule

Do not build a symbolic parser yet.

The goal is to understand how a mathematical formula becomes program logic.

### Completion Gate

Before moving to 1.3, you should be able to:

- Explain what a mathematical function is.
- Implement and evaluate predefined functions.
- Handle different input values.
- Explain how the code represents the formula.

---

## 1.3 — Function Reconstruction With Initial Conditions

**Difficulty:** Beginner+

### Objective

Learn how to reconstruct a function from its derivative and an initial condition.

### Mathematical Example

Given:

\[
f'(x)=6x+4
\]

Integrate:

\[
f(x)=3x^2+4x+C
\]

Given:

\[
f(0)=7
\]

Substitute:

\[
7=3(0)^2+4(0)+C
\]

Therefore:

\[
C=7
\]

Final function:

\[
f(x)=3x^2+4x+7
\]

### Tasks

- [ ] Solve 5 reconstruction problems on paper.
- [ ] Implement a CLI that evaluates the reconstructed function.
- [ ] Allow the user to enter an initial condition.
- [ ] Solve for `C`.
- [ ] Evaluate the reconstructed function.
- [ ] Verify that the function satisfies the initial condition.
- [ ] Verify the antiderivative by differentiation.

### CSE Connection

Initial conditions represent the starting state of a system.

This connects to:

- State initialization.
- Variables representing system state.
- Reconstructing a system from its rate of change.
- Mathematical modeling.

### Completion Gate

You should be able to:

- Explain indefinite integration.
- Explain the constant of integration.
- Use an initial condition to find `C`.
- Reconstruct basic polynomial functions.
- Verify your result.

---

## 1.4 — Motion Lab v1

**Difficulty:** Beginner+

### Objective

Apply integration to a meaningful computer science problem: motion modeling.

### Mathematical Example

Given velocity:

\[
v(t)=2t+3
\]

And initial position:

\[
s(0)=10
\]

Integrate velocity:

\[
s(t)=t^2+3t+C
\]

Apply the initial condition:

\[
s(0)=10
\]

Therefore:

\[
C=10
\]

Final position function:

\[
s(t)=t^2+3t+10
\]

At:

\[
t=5
\]

\[
s(5)=25+15+10=50
\]

### CLI Example

```text
$ motion-lab

Velocity: 2t + 3
Initial position: 10
Time: 5

Position: 50
```

### Tasks

- [ ] Solve motion problems on paper.
- [ ] Implement 3 predefined velocity functions.
- [ ] Calculate position from the antiderivative.
- [ ] Use initial conditions.
- [ ] Print position at a given time.
- [ ] Test different starting positions.
- [ ] Test multiple time values.
- [ ] Verify the result manually.

### CSE Connection

This is the beginning of:

- Simulation.
- State modeling.
- Time-based systems.
- Physics engines.
- Numerical and mathematical programming.

### Completion Gate

You should be able to:

- Explain the relationship between velocity and position.
- Reconstruct position from velocity.
- Use initial conditions.
- Implement a working motion CLI.
- Verify the result manually.

---

## 1.5 — Motion Lab v2: Multiple Objects

**Difficulty:** Intermediate beginner

### Objective

Extend the motion model to support multiple objects and determine when they occupy the same position.

### Initial Objects

#### Object A

Velocity:

\[
v_A(t)=2t+3
\]

Initial position:

\[
s_A(0)=10
\]

Position:

\[
s_A(t)=t^2+3t+10
\]

#### Object B

Velocity:

\[
v_B(t)=5t
\]

Initial position:

\[
s_B(0)=0
\]

Position:

\[
s_B(t)=\frac{5}{2}t^2
\]

### Tasks

- [ ] Calculate both positions.
- [ ] Display their positions at different times.
- [ ] Determine when they have the same position.
- [ ] Determine whether they collide.
- [ ] Add tests for different starting positions.
- [ ] Handle cases where objects never meet.
- [ ] Explain the collision condition mathematically.

### Mathematical Challenge

Find when:

\[
s_A(t)=s_B(t)
\]

Solve the resulting equation and determine which solutions are valid for the problem.

### CSE Connection

This is the beginning of:

- Simulation.
- Multiple entities.
- State modeling.
- Collision detection.
- Event-driven logic.
- Mathematical problem solving.

### Completion Gate

You should be able to:

- Model two objects independently.
- Calculate their positions.
- Solve when their positions are equal.
- Explain the difference between meeting mathematically and colliding physically.
- Implement and test the system.

---

## 1.6 — Complete Function Reconstruction System

**Difficulty:** Intermediate beginner

### Objective

Build a small polynomial-only function reconstruction system.

The system should accept a limited set of polynomial derivative functions and reconstruct the corresponding antiderivative.

You do not need to build a full symbolic algebra engine.

### Mathematical Example

Given:

\[
f'(x)=12x^2+6x+4
\]

Integrate term by term:

\[
f(x)=4x^3+3x^2+4x+C
\]

Given:

\[
f(1)=10
\]

Substitute:

\[
10=4+3+4+C
\]

Therefore:

\[
C=-1
\]

Final function:

\[
f(x)=4x^3+3x^2+4x-1
\]

### Tasks

- [ ] Accept a limited polynomial derivative function.
- [ ] Reconstruct the antiderivative.
- [ ] Add the constant of integration.
- [ ] Accept an initial condition.
- [ ] Solve for `C`.
- [ ] Evaluate the reconstructed function.
- [ ] Verify the initial condition.
- [ ] Verify the antiderivative by differentiation.
- [ ] Test different polynomial functions.
- [ ] Handle negative coefficients.
- [ ] Handle zero coefficients.

### Scope Limitations

This project only needs to support a limited polynomial format.

You do not need:

- A full symbolic parser.
- Trigonometric integration.
- Integration by parts.
- Substitution.
- A general-purpose computer algebra system.
- Arbitrary mathematical expressions.

### CSE Connection

This project introduces:

- Parsing structured mathematical data.
- Representing polynomials in data structures.
- Algorithms for term-by-term processing.
- State reconstruction.
- Symbolic computation concepts.

### Completion Gate

You should be able to:

- Reconstruct polynomial antiderivatives.
- Solve initial conditions.
- Evaluate reconstructed functions.
- Verify results mathematically.
- Explain how the program represents a polynomial.
- Explain the limitations of your system.

---

# 5.2 Completion Gate

Before moving to 5.3, you and your friend should be able to:

- [ ] Explain indefinite integration in your own words.
- [ ] Find antiderivatives of the functions covered in 5.2.
- [ ] Explain the constant of integration.
- [ ] Use initial conditions to find `C`.
- [ ] Verify an antiderivative by differentiation.
- [ ] Build a small program that uses an antiderivative to solve a real problem.
- [ ] Explain the CSE connection of the projects.
- [ ] Complete the projects without blindly copying the reference solutions.

## Final Challenge

Build a small program that combines the skills learned throughout 5.2.

For example:

- Reconstruct a position function from velocity.
- Accept an initial position.
- Evaluate the position at a given time.
- Support multiple objects.
- Determine when objects meet.

Once you can complete the projects and explain the mathematics, **5.2 — Integration is complete for this learning track.**

---

## Reference Solutions

Reference solutions are stored separately in:

```text
../solution/5.2-integration/
```

Try to solve each challenge yourself before looking at the reference implementation.

Solutions are provided for learning and comparison.

## Future Topics

After completing 5.2, the learning track will continue with more integration concepts and deeper CSE applications.

Possible future topics include:

- Definite integration.
- Area under curves.
- Numerical integration.
- Integration and data.
- More advanced simulation.
- Applications in computer graphics and physics.