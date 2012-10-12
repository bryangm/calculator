//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Bryan Mack on 10/12/12.
//  Copyright (c) 2012 Bryan Mack. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject
- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;
@end
