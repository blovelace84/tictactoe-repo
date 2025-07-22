#include <stdio.h>

char gameboard[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

int player = 1; // Player 1 starts
int choice; // User choice
int row, col; // Row and column for the board
int main() {
    printf("Lets play Tic Tac Toe! \n");
    int i;
    for(i = 0; i < 3; i++) 
    {
        printf(" %c | %c | %c \n", gameboard[i][0], gameboard[i][1], gameboard[i][2]);
        if(i < 2) {
            printf("---|---|---\n");
        }
    }
    return 0;
}