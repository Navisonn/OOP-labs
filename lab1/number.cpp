#include "number.h"

bool Digits(int number) {
    if (number < 10) {
        return true;  // Однозначное число всегда удовлетворяет условию
    }
    
    int x, y;
    x = number % 10;
    number = number / 10;
    
    while (number > 0) {
        y = number % 10;
        if (x < y) {
            return false;
        }
        x = y;
        number = number / 10;
    }
    
    return true;
}