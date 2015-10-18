//
//  main.c
//  callbackSample
//
//  Created by Kang Jinyeoung on 2015. 10. 18..
//  Copyright © 2015년 SuperbDerrick. All rights reserved.
//

#include <stdio.h>

int mTemperatures []  = { 30, 20, 22, 18, 18, 15, 10, -5, 5, -8, 0, -1 };

int mIsHeaterTurnedOn = 0;
int handlerNum = 0;

typedef void (*callback_temperature)(int temperature);
callback_temperature callArr[1];


void detectCurrentTemperature(int temperature) {
    if(temperature < 0) {
        printf("Now, the temperature is under 0 celsius. So I will turn on the heater. \n");
        mIsHeaterTurnedOn = 1;
    } else {
        printf("The current temperature is greater than 0 celcius. I will turn the heater off. \n");
        mIsHeaterTurnedOn = 0;
    }
};

void registerCallback(callback_temperature handler) {
    callArr[handlerNum] = handler;
    handlerNum++;
}

int main(int argc, const char * argv[]) {
    registerCallback(detectCurrentTemperature);
    
    for (int i = 0; i< (sizeof(mTemperatures) / sizeof(int)) ; i++) {
        printf("The current temperature :  %d \n " , mTemperatures[i]);
        callArr[0](mTemperatures[i]);
    }
    
    return 0;
}



