/* A C program to implement Game of Nim. The program
assumes that both players are playing optimally */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "NIM_Game.h"

int main()
{
    /*
    piles[] -> Array having the initial count of stones/coins
    		in each piles before the game has started.
    n	 -> Number of piles

    The piles[] are having 0-based indexing*/

    int n=0, piles[n] ;
    printf("Choose the size of the packs : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("Enter the matches of packs %d : ",i+1);
        scanf("%d",&piles[i]);
    }
    knowWinnerBeforePlaying(piles, n, COMPUTER);
    playGame(piles, n, COMPUTER);

    return 0;
}
