#include <iostream>
#include <iomanip>
#include "clockType.h"

using namespace std;


int main() {

    int h, m, s;
    char more;

    do {
        cout << "\nPlease input hours: ";
        cin  >> h;
        cout << "\nPlease input minutes: ";
        cin  >> m;
        cout << "\nPlease input seconds: ";
        cin  >> s;

        clockType x(h, m, s);
        if (x.valid()) {
            cout << fixed;
            cout <<"\n\nThe time entered is: " << setfill('0') << setw(2) << x.getHour()
                 << ":" << setw(2) << x.getMinute() << ":" << setw(2) << x.getSecond();

            x.nextSecond();
            cout << "\nThe next second will be: " << setfill('0') << setw(2) << x.getHour()
                 << ":" << setw(2) << x.getMinute() << ":" << setw(2) << x.getSecond();
        }
        else {
            cout << "\n\nYou've entered an invalid number.";
        }

        cout << "\n\n\t\tDo more (Y/N) ? ";
        cin  >> more;
    } while (more == 'y' || more == 'Y');

    return 0;
}