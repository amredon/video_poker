#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "ANSI-color-codes.h"
#include "display.h"

void printCards(card *topCard, int numberOfCards, int cardsPerRow){

    card *cardPtr = topCard;

    for(int i = 0; i < numberOfCards; i++){
        if(strcmp(cardPtr->suit, HEARTS) == 0 || strcmp(cardPtr->suit, DIAMONDS) == 0){
            printf("%s%s%c", WHTHB, BHRED, cardPtr->rankChar);
            printf("%s%s%s%s%s", WHTHB, BHRED, cardPtr->suit, BLKB, WHT);
            printf(" ");
        }
        else{
            printf("%s%s%c", WHTHB, BHBLK, cardPtr->rankChar);
            printf("%s%s%s%s%s", WHTHB, BHBLK, cardPtr->suit, BLKB, WHT);
            printf(" ");
        }
        if(i % cardsPerRow == (cardsPerRow - 1)){
            printf("\n\n");
        }
        cardPtr++;


    }

    cardPtr = topCard;

}


