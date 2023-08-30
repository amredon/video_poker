#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "dealer.h"

void initializeDeck(card* topOfDeck, int numOfDecks){

    card *deckPtr = topOfDeck; 

//initialize index 

    for(int i = 0; i < numOfDecks * 52; i++){
        deckPtr->index = i;
        deckPtr++;
    }
    deckPtr = topOfDeck;

//initialize rank value

    for(int i = 0; i < numOfDecks * 52; i++){
        deckPtr->rankValue = i % 13 + 1;
        deckPtr++;
    }
    deckPtr = topOfDeck;

//initialize rank char

    for(int i = 0; i < numOfDecks * 52; i++){
        if(deckPtr->rankValue == 1){
            deckPtr->rankChar = 'A';
        }
        else if(deckPtr->rankValue  < 10){
            deckPtr->rankChar = deckPtr->rankValue + 48;
        }
        else if(deckPtr->rankValue == 10){
            deckPtr->rankChar = 'T';
        }
        else if(deckPtr->rankValue  == 11){
            deckPtr->rankChar = 'J';
        }
        else if(deckPtr->rankValue  == 12){
            deckPtr->rankChar = 'Q';
        }
        else if(deckPtr->rankValue  == 13){
            deckPtr->rankChar = 'K';
        }

        deckPtr++;
    }
    deckPtr = topOfDeck;

//initialize suit

    for(int i = 0; i < numOfDecks * 52; i++){

        if(deckPtr->index / 13 == 0){
            deckPtr->suit = HEARTS; 
        }
        else if(deckPtr->index / 13 == 1){
            deckPtr->suit = DIAMONDS;
        }
        else if(deckPtr->index / 13 == 2){
            deckPtr->suit = CLUBS;
        }
        else if(deckPtr->index / 13 == 3){
            deckPtr->suit = SPADES;
        }
        deckPtr++;
    }
    deckPtr = topOfDeck;

//initialize keep to false

    for(int i = 0; i < numOfDecks * 52; i++){

        deckPtr->hold = false;
        deckPtr++;
    }
    deckPtr = topOfDeck;


}

void shuffleDeck(card *topOfDeck, int numOfDecks){

    card *deckPtr = topOfDeck;
    card temp;

    srand(time(NULL));

    for(int i = 0; i < numOfDecks * 52; i++){

        int j;
        j = rand() % (numOfDecks * 52);
        temp = deckPtr[i];
        deckPtr[i] = deckPtr[j];
        deckPtr[j] = temp;

    }

}