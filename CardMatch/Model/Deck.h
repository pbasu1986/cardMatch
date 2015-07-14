//
//  Deck.h
//  CardMatch
//
//  Created by Exigis Administrator on 7/6/15.
//  Copyright (c) 2015 Exigis Administrator. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

-(void)addCard:(Card *)card atTop:(BOOL)atTop;
-(void)addCard:(Card *)card;

-(Card *)drawRandomCard;

@end
