//
//  Card.h
//  CardMatch
//
//  Created by Exigis Administrator on 7/6/15.
//  Copyright (c) 2015 Exigis Administrator. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;
@end
