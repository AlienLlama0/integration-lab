# 1.3 — Motion Lab v1

**Difficulty:** Beginner+

## Objective

Apply integration to a meaningful computer science problem: motion modeling.

You will use velocity to reconstruct position and use an initial position to determine the integration constant.

---

## Mathematical Example

Given velocity:

\[
v(t) = 2t + 3
\]

And initial position:

\[
s(0) = 10
\]

Integrate velocity:

\[
s(t) = t^2 + 3t + C
\]

Apply the initial condition:

\[
s(0) = 10
\]

Therefore:

\[
C = 10
\]

Final position function:

\[
s(t) = t^2 + 3t + 10
\]

At:

\[
t = 5
\]

\[
s(5) = 25 + 15 + 10 = 50
\]

---

## CLI Example

```text
$ motion-lab

Velocity: 2t + 3
Initial position: 10
Time: 5

Position: 50