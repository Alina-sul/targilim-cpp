#include <iostream>
#include "../Headers/Targil2.h"
#include "../Headers/Targil1.h"

using namespace std;

void swapPoint(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;

}

void swapRef(int &x, int &y) {

    int temp = x;
    x = y;
    y = temp;

}

Time cloneTime(const Time &time) {

    Time clone;
    clone.hour = time.hour;
    clone.min = time.min;
    clone.sec = time.sec;

    return clone;

}