//
//  Thermometer.h
//  Thermometer
//
//  Created by derrick on 2016. 2. 23..
//  Copyright © 2016년 derrick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TemperatureDelegate.h"

@interface Thermometer : NSObject<TemperatureDelegate>

@property int mTemperature;
@property bool mStop;
@property (nonatomic , weak) id <TemperatureDelegate> delegate;

-(id)init;
-(void)simulate;
-(void)threadFunc;

@end
