#include <bits/stdc++.h>
using namespace std;

void printBoard(char board[]) {
    cout << "\033[1;33m";
    cout << "     |     |     " << endl;
    cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << "\033[0m";
}

bool checkWinner(char board[], char player) {
    for (int i = 0; i < 9; i += 3) {
        if (board[i] == player && board[i+1] == player && board[i+2] == player) {
            return true;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (board[i] == player && board[i+3] == player && board[i+6] == player) {
            return true;
        }
    }
    if (board[0] == player && board[4] == player && board[8] == player) {
        return true;
    }
    if (board[2] == player && board[4] == player && board[6] == player) {
        return true;
    }
    return false;
}

int main() {
    cout << "\033[1;36m";
    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << "=======================" << endl;
    cout<<"Made By Piyush Raj  Enjoy :-)"<<endl;
    cout << "\033[0m"; 
    
    do {
        char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int moves = 0;
        char player = 'X';
        bool winner = false;

        while (moves < 9 && !winner) {
            cout << "\033[1;32m"; 
            cout << "Current board:" << endl;
            cout << "\033[0m";
            printBoard(board);

            int move;
            cout << "\033[1;34m";
            cout << "Player " << player << ", enter your move (1-9): ";
            cin >> move;
            cout << "\033[0m";

            if (cin.fail()|| move < 1 || move > 9 || board[move-1] == 'X' || board[move-1] == 'O') {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\033[1;31m";
                cout << "Invalid move, try again." << endl;
                cout << "\033[0m";
                continue;
            }
            board[move-1] = player;
            moves++;

            winner = checkWinner(board, player);
            player = (player == 'X') ? 'O' : 'X';
        }
        if (winner) {
            int x;
            char winner_player = player == 'X' ? 'O' : 'X'; 
            cout << "\033[1;33m";
            cout << "Player " << winner_player << " wins!" << endl;
            cout << "\033[0m";
            }
             else {
                cout << "\033[1;33m";
                cout << "It's a tie!" << endl;
                cout << "\033[0m";
            }   
        
    char playAgain;
    cout << "\033[1;36m";
    cout << "Thanks for playing Tic Tac Toe!" << endl;
    cout << "\033[0m";
    cout << "\033[1;35m";
    cout << "Do you want to play again? (Y/N): ";
    cin >> playAgain;
    cout << "\033[0m";

    if (playAgain != 'Y' && playAgain != 'y') {
        
        break;
    }
} while (true);

return 0;
}

        
       
