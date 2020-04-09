/****************************************************/
/*                                                  */
/*       Author         : Hassan Askar              */
/*       Date           : 07/04/2020                */
/*       Version        : 1.0 V                     */
/*       Description    : Nim Game Driver           */
/*                                                  */
/*                                                  */
/****************************************************/

/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef NIM_GAME_H
#define NIM_GAME_H


#define COMPUTER 1
#define HUMAN 2
/* A Structure to hold the two parameters of a move

A move has two parameters-
1) pile_index = The index of pile from which stone is
					going to be removed
2) stones_removed = Number of stones removed from the
						pile indexed = pile_index */

struct move
{
    int pile_index;
    int stones_removed;
};
// A C function to output the current game state.
void showPiles (int piles[], int n);
// A C function that returns True if game has ended and
// False if game is not yet over
bool gameOver(int piles[], int n);
// A C function to declare the winner of the game
void declareWinner(int whoseTurn);
// A C function to calculate the Nim-Sum at any point
// of the game.
int calculateNimSum(int piles[], int n);

// A C function to make moves of the Nim Game
void makeMove(int piles[], int n, struct move * moves);
// A C function to make Human moves of the Nim Game
int humanMove(int piles[], int n, struct move * moves);

// A C function to play the Game of Nim
void playGame(int piles[], int n, int whoseTurn);

void knowWinnerBeforePlaying(int piles[], int n,int whoseTurn);

#endif	/** !comment  :  End of guard                          **/
