//
//  Thermometer.m
//  Thermometer
//
//  Created by derrick on 2016. 2. 23..
//  Copyright © 2016년 derrick. All rights reserved.
//

#import "Thermometer.h"

@implementation Thermometer
@synthesize mTemperature , delegate , mStop;
NSInteger mTemperatures[11] = {30, 28, 22, 20, 15, 10 , -5,5 ,8 , 0 , -1 };
   


-(id)init {
    if ( self = [super init] ) {
        
    }    
    return self;
}

-(void)simulate
{
    NSLog( @"Hello World from create \n" );
    
    [NSThread detachNewThreadSelector:@selector(startChecker) toTarget:self withObject:nil];
	[NSThread sleepForTimeInterval:10.0f];
}

- (void) startChecker
{
    @autoreleasepool {
        int i = 0;
        while (i < sizeof(mTemperatures) / sizeof(NSInteger)) {
              [delegate onTemperatureChanged:mTemperatures[i]];
              i++;
        }
        [NSThread exit];
    }
    
}
@end
