//
//  TemperatureDelegate.h
//  Thermometer
//
//  Created by derrick on 2016. 2. 23..
//  Copyright © 2016년 derrick. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TemperatureDelegate <NSObject>

-(void)onTemperatureChanged:(int)tempature;

@end
