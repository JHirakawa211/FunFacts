//
//  colorWheel.h
//  FunFacts
//
//  Created by John Hirakawa on 6/7/15.
//  Copyright (c) 2015 Tree House. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface colorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
