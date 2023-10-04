//
//  ViewController.h
//  Calculator
//
//  Created by Aaron Caines on 28/08/2018.
//  Copyright © 2018 Aaron Caines. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    int currentOperation;
    
    float result;
    float currentNumber;
    
}

@property (weak, nonatomic) IBOutlet UILabel *top;

@property (weak, nonatomic) IBOutlet UILabel *label;


- (IBAction)digitPressed:(id)sender;
- (IBAction)cancel:(id)sender;
- (IBAction)operationPressed:(id)sender;




@end

