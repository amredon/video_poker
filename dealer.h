#ifndef DEALER_H
#define DEALER_H

#define HEARTS "\u2665"
#define DIAMONDS "\u2666"
#define CLUBS "\u2663"
#define SPADES "\u2660"

typedef struct Card {
        int   index;
        int   rankValue;
        char  rankChar;
        char  *suit;
        bool  hold;
} card;


void initializeDeck(card *, int);
void shuffleDeck(card *, int);

#endif