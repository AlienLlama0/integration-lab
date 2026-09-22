# 1.4 — Motion Lab v2: Multiple Objects

**Difficulty:** Intermediate beginner

## Objective

Extend the motion model to support multiple objects and determine when they occupy the same position.

---

## Initial Objects

### Object A

Velocity:

\[
v_A(t) = 2t + 3
\]

Initial position:

\[
s_A(0) = 10
\]

Position:

\[
s_A(t) = t^2 + 3t + 10
\]

### Object B

Velocity:

\[
v_B(t) = 5t
\]

Initial position:

\[
s_B(0) = 0
\]

Position:

\[
s_B(t) = \frac{5}{2}t^2
\]

---

## Tasks

1. Calculate the position of both objects.
2. Display their positions at different times.
3. Determine when they have the same position.
4. Determine whether they collide.
5. Test different starting positions.
6. Handle cases where the objects never meet.
7. Explain the collision condition mathematically.

---

## Mathematical Challenge

Find when:

\[
s_A(t) = s_B(t)
\]

Substitute the position functions:

\[
t^2 + 3t + 10 = \frac{5}{2}t^2
\]

Solve the resulting equation.

Then determine which solutions are valid for the problem.

---

## CSE Connection

This introduces:

- Multiple entities
- State modeling
- Collision detection
- Event detection
- Mathematical problem solving

---

## Completion Gate

You should be able to:

- Model two objects independently.
- Calculate their positions.
- Solve when their positions are equal.
- Explain the difference between meeting mathematically and colliding physically.
- Implement and test the system.