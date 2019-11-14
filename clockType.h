//
// Created by Edward Cruz on 11/13/19.
//

#ifndef CLOCK_CLOCKTYPE_H
#define CLOCK_CLOCKTYPE_H


class clockType {
private:
     int hr, min, sec;
public:
    clockType(int, int, int);

    bool valid();
    void nextSecond();

    int getHour();
    int getMinute();
    int getSecond();
};


#endif //CLOCK_CLOCKTYPE_H
