#include <stdio.h>

char gameboard[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

int player = 1; // Player 1 starts
int choice; // User choice
int row, col; // Row and column for the board

void printBoard() {
    int i;
    for(i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", gameboard[i][0], gameboard[i][1], gameboard[i][2]);
        if(i < 2) printf("---|---|---\n");
    }
}

int checkWin() {
    int i;
    // Check rows and columns
    for(i = 0; i < 3; i++) {
        if (gameboard[i][0] == gameboard[i][1] 
         && gameboard[i][1] == gameboard[i][2]
         && (gameboard[i][0] == 'X' || gameboard[i][0] == 'O'))
            return 1;
        if (gameboard[0][i] == gameboard[1][i] 
         && gameboard[1][i] == gameboard[2][i]
         && (gameboard[0][i] == 'X' || gameboard[0][i] == 'O'))
            return 1;
    }
    // Check diagonals
    if (gameboard[0][0] == gameboard[1][1] 
     && gameboard[1][1] == gameboard[2][2]
     && (gameboard[0][0] == 'X' || gameboard[0][0] == 'O'))
        return 1;
    if (gameboard[0][2] == gameboard[1][1] 
     && gameboard[1][1] == gameboard[2][0]
     && (gameboard[0][2] == 'X' || gameboard[0][2] == 'O'))
        return 1;
    return 0;
}
int checkDraw() {
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            if(gameboard[i][j] != 'X' && gameboard[i][j] != 'O')
                return 0;
    return 1;
}

int main() {
    printf("Lets play Tic Tac Toe! \n");
    int win = 0, draw = 0;
    while(!win && !draw) {
        printBoard();
        printf("Player %d, enter a number (1-9): ", player);
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 9) {
            printf("Invalid input. Please enter a number between 1-9.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        // Map choice to board
        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        // Check if the cell is free
        if(gameboard[row][col] != 'X' && gameboard[row][col] != 'O') {
            gameboard[row][col] = (player == 1) ? 'X' : 'O';
            win = checkWin();
            draw = checkDraw();
            if(!win && !draw)
                player = (player == 1) ? 2 : 1;
        } else {
            printf("Invalid move, try again.\n");
        }
    }
    printBoard();
    if(win)
        printf("Player %d wins!\n", player);
    else
        printf("It's a draw!\n");
    return 0;
}