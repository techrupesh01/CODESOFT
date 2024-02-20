#include <iostream>

using namespace std;

// Function to display the Tic-Tac-Toe board
void displayBoard(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    cout << "-------------" << endl;
    cout << "| " << a << " | " << b << " | " << c << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << d << " | " << e << " | " << f << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << g << " | " << h << " | " << i << " |" << endl;
    cout << "-------------" << endl;
}

// Function to check if there is a winner
char checkWinner(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    // Check rows
    if (a == b && b == c && a != ' ') return a;
    if (d == e && e == f && d != ' ') return d;
    if (g == h && h == i && g != ' ') return g;
    // Check columns
    if (a == d && d == g && a != ' ') return a;
    if (b == e && e == h && b != ' ') return b;
    if (c == f && f == i && c != ' ') return c;
    // Check diagonals
    if (a == e && e == i && a != ' ') return a;
    if (c == e && e == g && c != ' ') return c;
    return ' '; // No winner yet
}

int main() {
    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9'; // Initialize the board positions
    char currentPlayer = 'X'; // Player X starts the game

    char winner = ' '; // Initialize the winner

    while (winner == ' ') {
        displayBoard(a, b, c, d, e, f, g, h, i);

        // Get player's move
        int move;
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> move;

        // Update the board with the player's move
        if (move == 1 && a == '1') a = currentPlayer;
        else if (move == 2 && b == '2') b = currentPlayer;
        else if (move == 3 && c == '3') c = currentPlayer;
        else if (move == 4 && d == '4') d = currentPlayer;
        else if (move == 5 && e == '5') e = currentPlayer;
        else if (move == 6 && f == '6') f = currentPlayer;
        else if (move == 7 && g == '7') g = currentPlayer;
        else if (move == 8 && h == '8') h = currentPlayer;
        else if (move == 9 && i == '9') i = currentPlayer;
        else {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        // Check if the current player wins
        winner = checkWinner(a, b, c, d, e, f, g, h, i);
        if (winner != ' ') {
            displayBoard(a, b, c, d, e, f, g, h, i);
            cout << "Player " << winner << " wins!" << endl;
        } else {
            // Switch players
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}
