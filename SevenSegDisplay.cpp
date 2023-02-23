#include "SevenSegDisplay.h"

SevenSegDisplay::SevenSegDisplay(PinName a, PinName b, PinName c, PinName d, PinName e, PinName f, PinName g) :
    _display(a, b, c, d, e, f, g) {}

void SevenSegDisplay::write(int value) {
    // Use a look-up table to determine the segment pattern for each digit
    const int patterns[] = { // 0b.gfedcba
        0b00111111, // 0
        0b00000110, // 1
        0b01011011, // 2
        0b01001111, // 3
        0b01100110, // 4
        0b01101101, // 5
        0b01111101, // 6
        0b00000111, // 7
        0b01111111, // 8
        0b01101111  // 9
    };

    if (value >= 0 && value <= 9) {
        _display = patterns[value];
    } else {
        _display = 0b01111001; // Display the character 'E'
    }
}

void SevenSegDisplay::off() {
    _display = 0b00000000;
}
