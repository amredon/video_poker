#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "video_poker.h"
#include "dealer.h"
#include "display.h"
//this is a test
//this is another test
int main(void){

    card deck[52];
//  card cards[5];

    initializeDeck(deck, 1);

    for(int i = 0; i < 15000; i++){

        shuffleDeck(deck, 1);
        printCards(deck, 5, 5);

        if(fourOfKindCheck(deck)){
            printf("FOUR OF A KIND!!!!!!!!!AFTER %i HANDS\n", i);
            break;
        }

    }

    return 0;

}

int fourOfKindCheck(card *cards){


        if( cards[0].rankValue == cards[1].rankValue &&
            cards[0].rankValue == cards[2].rankValue &&
            cards[0].rankValue == cards[3].rankValue ||

            cards[0].rankValue == cards[1].rankValue &&
            cards[0].rankValue == cards[2].rankValue &&
            cards[0].rankValue == cards[4].rankValue ||

            cards[0].rankValue == cards[1].rankValue &&
            cards[0].rankValue == cards[3].rankValue &&
            cards[0].rankValue == cards[4].rankValue ||

            cards[0].rankValue == cards[2].rankValue &&
            cards[0].rankValue == cards[3].rankValue &&
            cards[0].rankValue == cards[4].rankValue ||
            
            cards[1].rankValue == cards[2].rankValue &&
            cards[1].rankValue == cards[3].rankValue &&
            cards[1].rankValue == cards[4].rankValue 
          ){return(1);}

        else{return(0);}

}