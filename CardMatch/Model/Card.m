//
//  Card.m
//  CardMatch
//
//  Created by Exigis Administrator on 7/6/15.
//  Copyright (c) 2015 Exigis Administrator. All rights reserved.
//

#import "Card.h"

@implementation Card

-(int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for(Card *card in otherCards){
        if([card.contents isEqualToString:self.contents])
            score=1;
    }
    return score;
}
@end
