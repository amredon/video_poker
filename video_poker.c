#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "video_poker.h"
#include "dealer.h"
#include "display.h"


int main(void){

    card deck[52];
    card cards[5];
    int fourOfKind = 0;


    initializeDeck(deck, 1);

    srand(time(NULL));

    for(int i = 0; i < 10000; i++){

        shuffleDeck(deck, 1);

        //Load cards array with first 5 elements of deck

        for(int i = 0; i < 5; i++){
            cards[i] = deck[i];
        }

        printCards(cards, 5, 5);

        if(fourOfKindCheck(deck)){
            fourOfKind++;
        }

    }
    printf("%i FOUR OF A KIND!!!!!!!!!AFTER 10,000 HANDS\n", fourOfKind);
    sleep(1);
    return 0;

}

int fourOfKindCheck(card *cards){


        if( (cards[0].rankValue == cards[1].rankValue &&
             cards[0].rankValue == cards[2].rankValue &&
             cards[0].rankValue == cards[3].rankValue) ||

            (cards[0].rankValue == cards[1].rankValue &&
             cards[0].rankValue == cards[2].rankValue &&
             cards[0].rankValue == cards[4].rankValue) ||

            (cards[0].rankValue == cards[1].rankValue &&
             cards[0].rankValue == cards[3].rankValue &&
             cards[0].rankValue == cards[4].rankValue) ||

            (cards[0].rankValue == cards[2].rankValue &&
             cards[0].rankValue == cards[3].rankValue &&
             cards[0].rankValue == cards[4].rankValue) ||
            
            (cards[1].rankValue == cards[2].rankValue &&
             cards[1].rankValue == cards[3].rankValue &&
             cards[1].rankValue == cards[4].rankValue) 
          ){return(1);}

        else{return(0);}

}
