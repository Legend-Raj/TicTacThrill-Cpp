# 🎮 TicTacThrill: Tic-Tac-Toe Game in C++ (With AI Option) 🤖

Welcome to **TicTacThrill**, a simple console-based **Tic-Tac-Toe** game built in C++. You can enjoy this classic game either against another player or challenge the computer with AI!

## 🚀 Features

- **Player vs Player**: Enjoy a match against another player locally.
- **Player vs Computer**: Test your skills against a computer AI that selects moves randomly.
- **Dynamic Board Display**: The game board updates after each move, showing the current state of play.
- **Win or Tie Detection**: The game announces the winner or declares a tie once all cells are filled.
- **Replay Option**: Play again without restarting the program!

## 🛠️ How to Play

1. **Clone the repository**:
    ```bash
    git clone https://github.com/Legend-Raj/TicTacThrill-Cpp.git
    ```

2. **Compile the game**:
    Use a C++ compiler like `g++` to compile the game code:
    ```bash
    g++ tic_tac_toe_BY_PIYUSH.cpp -o tictacthrill
    ```

3. **Run the game**:
    Execute the compiled program to start playing:
    ```bash
    ./tic_tac_toe_BY_PIYUSH
    ```

4. **Choose your game mode**:
    - Press `P` to play against another player.
    - Press `C` to challenge the computer AI.

5. **Make your move**:
    Enter a number (1-9) corresponding to the position on the board where you want to place your mark (X or O).

6. **Winning or Tying**:
    - The game automatically detects a winner or declares a tie if the board is full without a winner.
    - After the game, you can choose to play again or exit.

## 🎮 Gameplay Instructions

- The board layout is numbered as follows:

    ```
       1 | 2 | 3
      -----------
       4 | 5 | 6
      -----------
       7 | 8 | 9
    ```

- Players take turns placing their marks (X for Player 1, O for Player 2 or Computer).
- The game ends when a player gets 3 marks in a row (horizontally, vertically, or diagonally), or the board is full.

## 🔧 Code Structure

- **main.cpp**: This contains the entire game logic, including the functionality for playing against a computer.
- **Computer AI**: The computer makes random moves based on available positions.


Thanks for checking out **TicTacThrill**! Enjoy playing! 😊
