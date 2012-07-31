//
//  ViewController.h
//  HelloApp
//
//  Created by iOS Camp on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *helloTextField;
@property (weak, nonatomic) IBOutlet UILabel *helloLabel;

- (IBAction)helloButtonPressed:(UIButton *)sender;

@end
