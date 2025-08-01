# Tic Tac Toe (C Terminal Game)

This is a simple terminal-based Tic Tac Toe game written in C. Two players take turns picking a number from 1 to 9, corresponding to spots on a 3x3 grid. The first player to align three of their marks (X or O) in a row—horizontally, vertically, or diagonally—wins the game.

## How to Play

1. Run the program in your terminal.
2. The 3x3 grid is represented by numbers 1 through 9:
   ```
    1 | 2 | 3
   ---+---+---
    4 | 5 | 6
   ---+---+---
    7 | 8 | 9
   ```
3. Player 1 is 'X', Player 2 is 'O'.
4. Players take turns entering the number of the cell where they want to place their mark.
5. The board updates after every turn.
6. The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins. If all spots are filled and no one has won, the game ends in a draw.

## Installation and Setup

1. **Clone or Download the Repository**
   - If you haven’t already, download or clone this repository to your computer.

2. **Compile the Code**
   - You need a C compiler (such as `gcc`). Most Linux and macOS systems include this by default. On Windows, you can use MinGW or a similar compiler.
   - Open your terminal/command prompt and navigate to the directory containing `tictactoe.c`.

   Run the following command:
   ```
   gcc -o tictactoe tictactoe.c
   ```

   This will create an executable file called `tictactoe` (or `tictactoe.exe` on Windows).

3. **Run the Game**
   - In your terminal, run:
     ```
     ./tictactoe
     ```
     (On Windows, use `tictactoe.exe` instead.)

## Example

```
Player 1 (X) - Player 2 (O)
 1 | 2 | 3
---+---+---
 4 | 5 | 6
---+---+---
 7 | 8 | 9

Player 1, enter a number: 5

 1 | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9
...
```

Enjoy playing Tic Tac Toe in your terminal!

---

Feel free to improve or modify the code!
