#include <iostream>
#include "Driver.h"
using namespace std;
int main() {
    int tracksNumber;
    cin >>tracksNumber;

    Track ** tracks = new Track*[tracksNumber];
    for (int i = 0; i < tracksNumber; ++i) {
        tracks[i] = new Track();
    }
    Turntable * turntable = new Turntable(10, tracksNumber,tracks, 0);
    Driver * driver = new Driver(turntable);
    //driver->Report();
    driver->ControlHandle();
    driver->Report();
    return 0;
}