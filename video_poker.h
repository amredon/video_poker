#ifndef VIDEO_POKER_H 
#define VIDEO_POKER_H


#include "dealer.h"

typedef enum {
    HIGH_CARD,
    PAIR,
    TWO_PAIR,
    THREE_KIND,
    STRAIGHT,
    FLUSH,
    FULL_HOUSE,
    FOUR_KIND,
    STRAIGHT_FLUSH,
    ROYAL_FLUSH
}hand;

int fourOfKindCheck(card*);




#endif