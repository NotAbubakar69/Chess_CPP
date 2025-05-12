# Chess Video Game - Console Based

## Project Title

*Console-Based Chess Game*

## Authors

* M Abubakar Nadeem
* Harris Hassan
* 22I-2003
* 22I-1947
* Course: PF(J) - Programming Fundamentals

---

## Description

This is a C++ console-based chess game developed as a final project for the Programming Fundamentals course. The game initializes a chessboard, randomly places major pieces (Knight, King, Queen, Rook, Bishop) for both teams ('a' and 'b'), and supports limited movement validation for each piece.

### Key Features

* 8x8 chessboard grid.
* Randomized initial placement of key pieces.
* Move validation based on piece type:

  * Knight (Horse)
  * King
  * Queen
  * Rook
  * Bishop
* Display of valid moves for each piece.
* Console-based interface.

---

## How to Run

1. *Requirements:*

   * A C++ compiler (e.g., g++, clang++)

2. *Compile the code:*

bash
   g++ -o chess_game main.cpp


3. *Run the executable:*

bash
   ./chess_game


---

## Controls

* The game prompts the user to enter the position (row and column) of the piece they want to move.
* It then calculates and displays the possible moves.
* The user can input the destination coordinates to make the move.

---

## Game Logic

* Each team can only use the allowed number of each piece.
* Move validation is handled by verify_path() function, which ensures:

  * The destination is within bounds.
  * The path follows the movement pattern of the selected piece.
  * The destination cell is empty.

---

## Limitations

* No support for pawns or advanced rules (check, checkmate, castling, en passant).
* No turn-based system implemented.
* No capture mechanism.
* Grid re-renders only on piece selection, no interactive gameplay loop.

---

## Future Improvements

* Add support for all chess pieces (including Pawns).
* Implement full game rules (check, checkmate, turns).
* Create an AI opponent.
* GUI-based version using graphics libraries.

---
