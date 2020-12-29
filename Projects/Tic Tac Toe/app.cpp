#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

void printInputMatrix();
void printBoard();
int addMark();
int check();

char board[3][3] = { '\0', '\0', '\0',
                     '\0', '\0', '\0',
                     '\0', '\0', '\0',
                                };
int turn = 1; // 1 - Player1 / 0 - Player2
char mark = 'O'; // O - Player1 / X - Player2
int input;

int main()
{
    int won = 0;
    int validInput = 0;

    for(int i = 0; i < 9; i++)
    {
        system("cls");
        printBoard();
        if(turn) cout << "Player1 turn (Symbol: O)" << endl;
        else cout << "Player2 turn (Symbol: X)" << endl;
        printInputMatrix();
        cout << "Enter Input from Input Matrix: ";
        cin >> input;
        while(input < 0 || input > 9)
        {
            cout << "Invalid Input.Please Re - Enter input: ";
            cin >> input;
        }
        if(turn) mark = 'O';
        else mark = 'X';

        validInput = addMark();
        if(!validInput)
        {
            i--;
            continue;
        }
        won = check();
        if(won)
        {
            system("cls");
            printBoard();
            if( turn) cout << endl << "!!! Player1 has Won !!!";
            else cout << endl << "!!! Player2 has Won !!!";
            getch();
            break;
        }
        if(i == 8)
        {
            system("cls");
            printBoard();
            cout << endl << "MATCH DRAW!" << endl;
        }

        turn = !turn;
    }

    return 0;
}
void printInputMatrix()
{
    cout << endl << endl << "INPUT MATRIX" << endl;
    cout << "  1 | 2 | 3 " << endl;
    cout << " -----------" << endl;
    cout << "  4 | 5 | 6 " << endl;
    cout << " -----------" << endl;
    cout << "  7 | 8 | 9 " << endl;
}
void printBoard()
{
    cout << board[0][0] << "  | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "-----------" << endl;
    cout << board[1][0] << "  | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "-----------" << endl;
    cout << board[2][0] << "  | " << board[2][1] << " | " << board[2][2] << endl;
}
int addMark()
{
    for(int i = 0, k = 1;i < 3;i++)
    {
        for(int j = 0; j < 3; j++,k++)
        {
            if(k == input)
            {
                if(board[i][j] == '\0')
                {
                    board[i][j] = mark;
                    return 1;
                }
                else
                {
                    cout << "Invalid input";
                    getch();
                    return 0;
                }
            }
        }
    }
}
int check()
{
    // checking rows
    if(board[0][0] == mark && board[0][1] == mark && board[0][2] == mark)
        return 1;
    if(board[1][0] == mark && board[1][1] == mark && board[1][2] == mark)
        return 1;
    if(board[2][0] == mark && board[2][1] == mark && board[2][2] == mark)
        return 1;
    // chechking colums
    if(board[0][0] == mark && board[1][0] == mark && board[2][0] == mark)
        return 1;
    if(board[0][1] == mark && board[1][1] == mark && board[2][1] == mark)
        return 1;
    if(board[0][2] == mark && board[1][2] == mark && board[2][2] == mark)
        return 1;

    // checking diagonals
    if(board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
        return 1;
    if(board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
        return 1;

        return 0;
}
