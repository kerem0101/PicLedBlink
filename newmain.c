/*
 * File:   newmain.c
 * Author: kerem
 *
 * Created on 07 Nisan 2021 Çar?amba, 12:28
 */

// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

#define _XTAL_FREQ 4000000

void main(void) {
    
    TRISA = 0x01;
    TRISB = 0;
    
    while(1){
        if(RA0 == 1) PORTB = 0x0F;
        if(RA0 == 0) PORTB = 0xF0;
    }
    
    return;
}
