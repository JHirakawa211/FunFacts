//
//  FactBook.h
//  FunFacts
//
//  Created by John Hirakawa on 6/6/15.
//  Copyright (c) 2015 Tree House. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
