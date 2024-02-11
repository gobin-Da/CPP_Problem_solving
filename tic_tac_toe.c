#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// array to hold tge cel status.
char gameboard[3][3];

//fucntion prototypes
void drawBoard();
int showResult(char ch);
int validateInput(int cell);
void turnPlayerO(int* pCell);
void turnPlayerX(int* pCell);
void getRowCol(int cell, int* pX, int* pY);

int main()
{
    int x = 0,
        y = 0,
        row = 0,
        col = 0,
        selectedCell = 0,
        availableCell = 9;

    char startChar = '1';
    clrscr();

    // make all the cell numbers from 1-9
    for(row=0; row<3; row++)
        for(col=0; col<3; col++)
            gameboard[row][col] = startChar++;

    //now draw board with current data in gameboard[][] array
    drawBoard();

    // loop untill we have played all the cell
    while(availableCell >= 0)
    {
        //assume player one is X
        turnPlayerX(&selectedCell);
        //get row and column from the selected cell
        getRowCol(selectedCell, &x, &y);
        //update gameboard array
        gameboard[x][y] = 'X';
        //decrease avaible cell
        availableCell -= 1;
        //redraw gameboard with current data in gameboard[][] array
        clrscr();
        drawBoard();

        // check whether player one is winner or not
        if(showResult('X') == 1)
        {
            break;
        }
        else if(availableCell == 0){
            printf("\n Game Drawn");
            break;
        }

        //assume player two is O
        turnPlayerO(&selectedCell);
        //get row and column from the selected cell
        getRowCol(selectedCell, &x, &y);
        //update gameboard array
        gameboard[x][y] = 'O';
        //decrease available cell
        availableCell -= 1;
        //redraw gameboard with current data in gameboard[][] array
        clrscr();
        drawBoard();

        // check whether player two is winner or not
        if(showResult('O') == 1){
            break;
        }
        else if(availableCell == 0){
            printf("\n Game Drawn");
            break;
        }
    }
    clrscr();
    return 0;
}

// function to draw board with current data in gameboard[][] array
void drawBoard()
{
    int i, j;
    printf("\n TIC TAC TOE");
    printf("\n Digits (1-9) indicates VALID CELL number\n");
    printf("\n  %c | %c | %c", gameboard[0][0],
                               gameboard[0][1],
                               gameboard[0][2]);
    printf("\n  --|---|--");

    printf("\n  %c | %c | %c", gameboard[1][0],
                               gameboard[1][1],
                               gameboard[1][2]);
    printf("\n  --|---|--");

    printf("\n  %c | %c | %c", gameboard[2][0],
                               gameboard[2][1],
                               gameboard[2][2]);
}

// fucntion to make pplayer O's move 
void turnPlayerO(int* pCell)
{
    int cell;
    //loop untill player select a valid cell
    //Note: cells with digits are VALID cells
    do
    {
        printf("\n Player O, \n Select VALID cell number: ");
        scanf("%d", &cell);
    }while(0 == validateInput(cell));

    *pCell = cell;
}

//fucntion to make player X's move
void turnPlayerX(int *pCell)
{
    int cell;
    do
    {
        printf("\n Player X, \n Select VALID cell number: ");
        scanf("%d", &cell);
    }while(0 == validateInput(cell));

    *pCell = cell;
}

// Function to calculate row and column number from selected cell
void getRowCol(int cell, int* pX, int* pY)
{
    *pX = (cell - 1) / 3;
    *pY = (cell - 1) % 3;
}

//function to check whether selected cell is valid or not.
//if selected cell is alreadyt O or X, or if it is not in 1-9, then return 0
//to indicate INVALID selections
int validateInput(int cell)
{
    int row, col;
    // if cell is less then 1 or greater than 9, then return false = 0
    if((cell < 1) || (cell > 9))
        return 0;

    // if selected cell is already occupied then return false = 0
    if(('O' == gameboard[row][col]) || ('X' == gameboard[row][col]))
    {
        return 0;
    }
    return 1;
}

// fucntion to show thw winner
int showResult(char ch)
{
    int status = 0;
    // check diagonal
    if(gameboard[0][0] == ch && gameboard[1][1] == ch && gameboard[2][2] == ch)
    {
        printf("\n Player %c is winner" , ch);
        status = 1;
    }

    //check diagonal
    else if(gameboard[0][2] == ch && gameboard[1][1] == ch && gameboard[2][0] == ch)
    {
        printf("\n Player %c is winner" , ch);
        status = 1;
    }

    //check first row
    else if(gameboard[0][0] == ch && gameboard[1][0] == ch && gameboard[2][0] == ch)
    {
        printf("\n Player %c is winner" , ch);
        status = 1;
    }

    // check second row
    else if(gameboard[1][0] == ch && gameboard[1][1] == ch && gameboard[1][2] == ch)
    {
        printf("\n Player %c is winner" , ch);
        status = 1;
    }

    // check third row
    else if(gameboard[2][0] == ch && gameboard[2][1] == ch && gameboard[2][2] == ch)
    {
        printf("\n Player %c is winner" , ch);
        status = 1;
    }

    //check first column
    else if(gameboard[0][0] == ch && gameboard[0][1] == ch && gameboard[0][2] == ch)
    {
        printf("\n Player %c is winner" , ch);
        status = 1;
    }

    // check second column
    else if(gameboard[0][1] == ch && gameboard[1][1] == ch && gameboard[2][1] == ch)
    {
        printf("\n Player %c is winner" , ch);
        status = 1;
    }

    // check third column
    else if(gameboard[0][2] == ch && gameboard[1][2] == ch && gameboard[2][2] == ch)
    {
        printf("\n Player %c is winner" , ch);
        status = 1;
    }

    return status;
}