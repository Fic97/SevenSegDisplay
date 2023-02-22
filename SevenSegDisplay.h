#ifndef SEVENSEGDISPLAY_H
#define SEVENSEGDISPLAY_H

#include "mbed.h"

class SevenSegDisplay {
public:
    SevenSegDisplay(PinName p1, PinName p2, PinName p3, PinName p4, PinName p5, PinName p6, PinName p7, PinName p8);
    void write(int digit);
    void off();

private:
    BusOut _display;
};

#endif
