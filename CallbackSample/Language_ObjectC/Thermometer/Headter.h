//
//  Headter.h
//  Thermometer
//
//  Created by derrick on 2016. 2. 23..
//  Copyright © 2016년 derrick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TemperatureDelegate.h"

@interface Headter : NSObject


@property bool mIsHeaterTurnedOn ;
@property (nonatomic , weak) id <TemperatureDelegate> delegate;


@end
