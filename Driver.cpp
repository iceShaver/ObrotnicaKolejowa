//
// Created by kamil on 3/19/17.
//
#include <iostream>
#include "Driver.h"
using namespace std;
Driver::Driver(Turntable * turntable): turntable(turntable) {

}

void Driver::ControlHandle() {
    int times;
    char instruction;
    int param;
    cin >>times;
    for (int i = 0; i < times; ++i) {
        //Report();
        cin >> instruction >> param;
        switch (instruction){
            case 'z':
                turntable->TurnClockwise(param);
                break;
            case 'o':
                turntable->TurnAnticlockwise(param);
                break;
            case 'w':
                turntable->BringIn(param);
                break;
            case 'j':
                turntable->BringOut(param);
                break;
        }
    }


}



void Driver::Report() {
    cout << turntable->GetNumberOfCars() << " ";
    for (int i = 0; i < turntable->GetNumberOfCars(); ++i) {
        cout << turntable->GetCarID(i) << " ";
    }
    cout << endl;
    for (int j = 0; j < turntable->GetTracksNumber(); ++j) {
        Track * track = turntable->GetAttachedTrack();
        cout << track->GetNumberOfCars() << " ";
        for (int i = 0; i < track->GetNumberOfCars(); ++i) {
            cout << track->GetCarID(i) << " ";
        }
        turntable->TurnClockwise(1);
        cout << endl;
    }
    cout << flush;
}
