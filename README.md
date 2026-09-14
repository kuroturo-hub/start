# C Mini Projects Collection

A collection of beginner-friendly C programs exploring terminal-based games, utility tools, and numerical algorithms.

---

## 📁 Included Programs

| File | Description | Notes |
| :--- | :--- | :--- |
| `digital_clock.c` | Live in-terminal digital clock updating every second. | Uses `windows.h` (`Sleep`) |
| `gauss_scidel.c` | Solves a 4-variable linear system iteratively via the Gauss-Seidel method. | Requires `math.h` |
| `quiz_game.c` | Multiple-choice trivia game with dynamic scoring. | Standard C |
| `tic_tac_toe.c` | 2-player local terminal Tic-Tac-Toe with coordinate-based input. | Standard C |

---

## 🚀 Getting Started

### Prerequisites
* A C compiler such as **GCC** (via MinGW for Windows or build-essential on Linux).
* Windows environment recommended for `digital_clock.c` due to `windows.h`.

### Compilation & Running

Compile any file using `gcc`:

```bash
# Digital Clock (Windows)
gcc digital_clock.c -o digital_clock
./digital_clock

# Gauss-Seidel Method (link math library with -lm)
gcc gauss_scidel.c -o gauss_scidel -lm
./gauss_scidel

# Quiz Game
gcc quiz_game.c -o quiz_game
./quiz_game

# Tic-Tac-Toe
gcc tic_tac_toe.c -o tic_tac_toe
./tic_tac_toe
