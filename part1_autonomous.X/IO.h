#ifndef IO_H
#define IO_H

//Affectation des pins des LEDS
#define LED_ORANGE _LATC10 
#define LED_BLEUE _LATG7
#define LED_BLANCHE _LATG6 //int monbit = LATG & 0b0000000 00100000

// Prototypes fonctions
void InitIO();

#endif /* IO_H */

