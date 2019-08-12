/*
 * File:   main.c
 * Author: Srihari Rao Melagiri
 *
 * Created on August 11, 2019, 10:44 AM
 */


#include <xc.h>
#include "mcc_generated_files/device_config.h"
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/pin_manager.h"

void main(void) {
    
    SYSTEM_Initialize();
    
    while(1){
        RedLED_Toggle();
        __delay_ms(500);
    }
    
    
    return;
}
