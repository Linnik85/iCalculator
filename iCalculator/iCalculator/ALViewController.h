//
//  ALViewController.h
//  iCalculator
//
//  Created by Линник Александр on 05.01.14.
//  Copyright (c) 2014 Alex Linnik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ALViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *displayLabel;

- (IBAction)clear:(id)sender;
- (IBAction)clearAll:(id)sender;
- (IBAction)digit:(id)sender;
- (IBAction)inverseSign:(id)sender;
- (IBAction)operation:(id)sender;

@end
