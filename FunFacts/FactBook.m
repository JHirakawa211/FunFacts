//
//  FactBook.m
//  FunFacts
//
//  Created by John Hirakawa on 6/6/15.
//  Copyright (c) 2015 Tree House. All rights reserved.
//

#import "FactBook.h"

@implementation FactBook

- (instancetype)init
{
    self = [super init];
    if (self) {
        _facts = [[NSArray alloc]initWithObjects:@"Otters sleep holding hands",
                  @"Leonardo da Vinci could write with one hand and draw with the other at the same time",
                  @"20% of office coffee mugs contain fecal matter",
                  @"Dueling is legal in Paraguay as long as both parties are registered blood donors",
                  @"Caterpillars completely liquify as they transform into moths",
                  @"Russia didn't consider beer as alcohol until 2011. It was previously classified as soft drink",
                  @"two-thirds of the people never seen snow",
                  @"A hummingbird weighs less than a penny",
                  @"The average American drinks about 600 sodas a year",
                  nil];
        
    }
    return self;
}

- (NSString *)randomFact {
    int random = arc4random_uniform((int)self.facts.count);
    return [self.facts objectAtIndex:random];
}

@end
