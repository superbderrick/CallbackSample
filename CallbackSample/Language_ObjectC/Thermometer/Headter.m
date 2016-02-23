//
//  Headter.m
//  Thermometer
//
//  Created by derrick on 2016. 2. 23..
//  Copyright © 2016년 derrick. All rights reserved.
//

#import "Headter.h"

@implementation Headter
@synthesize mIsHeaterTurnedOn ,delegate;


-(void)onTemperatureChanged:(int)tempature
{
    if(tempature < 0) {
        NSLog(@"Now, the temperature is under 0 celsius. So I will turn on the heater.");
        mIsHeaterTurnedOn = true;
    } else {
        NSLog(@"The current temperature is greater than 0 celcius. I will turn the heater off.");
        mIsHeaterTurnedOn = false;
    }
}


@end

