# C Programming Practice & Numerical Methods

A collection of foundational C programs, exercises, and algorithm implementations created while learning systems programming and numerical computation.

---

## 📂 Repository Structure

* **`Projects/`**: Standalone command-line tools and implementations.
  * `gauss_scidel.c` – Numerical solver for $4 \times 4$ systems of linear equations using the Gauss-Seidel iterative method.
  * `quiz_game.c` – Interactive terminal-based multiple-choice riddle game featuring input validation and dynamic score tracking.
* **`Learning/`**: Language syntax experiments, string manipulation, and standard library practice.
* **`Excercise/`**: Problem-solving scripts and algorithm drills.

---

## 🛠️ Prerequisites & Compilation

To compile and run any of the programs locally, you need a C compiler such as `gcc`.

### Build & Run

#### 1. Gauss-Seidel Solver
```bash
gcc Projects/gauss_scidel.c -o gauss_scidel -lm
./gauss_scidel