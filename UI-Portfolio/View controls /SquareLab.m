//
//  Sqaure lab.m
//  UI-Portfolio
//
//  Created by Herrick, Benjamin on 11/13/19.
//  Copyright © 2019 Herrick, Benjamin. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "control.h"
#import "SquareLab.h"

@implementation SquareLab
@synthesize length, width, area;

- (void)viewDidLoad {
    [super viewDidLoad];
    [length setText:@"0"];
    [width setText:@"0"];
    [area setText:@"0"];
}

- (IBAction)calculatearea:(id)sender {
    double areavalue = areacalc(length.text.doubleValue, width.text.doubleValue);
    [area setText:[NSString stringWithFormat:@"%lf", areavalue]];
}
@end
