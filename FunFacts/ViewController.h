//
//  ViewController.h
//  FunFacts
//
//  Created by John Hirakawa on 6/5/15.
//  Copyright (c) 2015 Tree House. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class colorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) colorWheel *colorWheel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

