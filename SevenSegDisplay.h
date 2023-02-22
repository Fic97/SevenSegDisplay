#ifndef SEVENSEGDISPLAY_H
#define SEVENSEGDISPLAY_H

#include "mbed.h"

class SevenSegDisplay {
public:
    SevenSegDisplay(PinName a, PinName b, PinName c, PinName d, PinName e, PinName f, PinName g);
    void write(int digit);
    void off();

private:
    BusOut _display;
};

#endif
