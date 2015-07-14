//
//  PlayingCard.h
//  CardMatch
//
//  Created by Exigis Administrator on 7/6/15.
//  Copyright (c) 2015 Exigis Administrator. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property(strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSArray *) rankStrings;
+ (NSUInteger) maxRank;
@end
