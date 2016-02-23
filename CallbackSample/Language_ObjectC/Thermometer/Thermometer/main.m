//
//  main.m
//  Thermometer
//
//  Created by derrick on 2016. 2. 23..
//  Copyright © 2016년 derrick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Headter.h"
#import "Thermometer.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Headter * headter = [[Headter alloc] init];
        Thermometer * thermometer = [[Thermometer alloc] init];
        thermometer.delegate = headter;
        [thermometer simulate];
     
    }
    return 0;
}



