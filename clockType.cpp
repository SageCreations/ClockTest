//
// Created by Edward Cruz on 11/13/19.
//

#include "clockType.h"

clockType::clockType(int h, int m, int s) {
    hr = h;
    min = m;
    sec = s;
}

bool clockType::valid()
{
    if (hr > 23 || hr < 0) { return false; }
    else if (min > 59 || min < 0) { return false; }
    else if (sec > 59 || sec < 0) { return false; }
    else return true;
}

void clockType::nextSecond()
{
    sec++;

    if (sec > 59) {
        sec = 0;
        min++;
    }

    if (min > 59) {
        sec = 0;
        min = 0;
        hr++;
    }

    if (hr > 23) {
        sec = 0;
        min = 0;
        hr = 0;
    }
}

int clockType::getHour() { return hr; }
int clockType::getMinute() { return min; }
int clockType::getSecond() { return sec; }



