#include "SevenSegDisplay.h"

SevenSegDisplay::SevenSegDisplay(PinName p1, PinName p2, PinName p3, PinName p4, PinName p5, PinName p6, PinName p7, PinName p8) :
    _display(p1, p2, p3, p4, p5, p6, p7, p8) {}

void SevenSegDisplay::write(int value) {
    // Use a look-up table to determine the segment pattern for each digit
    const int patterns[] = {
        0b11111100, // 0
        0b01100000, // 1
        0b11011010, // 2
        0b11110010, // 3
        0b01100110, // 4
        0b10110110, // 5
        0b10111110, // 6
        0b11100000, // 7
        0b11111110, // 8
        0b11110110  // 9
    };

    if (value >= 0 && value <= 9) {
        _display = patterns[value];
    } else {
        _display = 0b00000010; // Display the character 'E'
    }
}

void SevenSegDisplay::off() {
    _display = 0b00000000;
}
