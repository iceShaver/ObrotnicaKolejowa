//
// Created by kamil on 3/19/17.
//

#ifndef OBROTNICAKOLEJOWA_TURNTABLE_H
#define OBROTNICAKOLEJOWA_TURNTABLE_H


#include "Track.h"

class Turntable {
public:
    Turntable(short maxCapacity, int tracksNumber, Track ** tracks, int attachedTrack);
    void TurnClockwise(int number);
    void TurnAnticlockwise(int number);
    void BringIn(int number);
    void BringOut(int number);
    int GetNumberOfCars() const;
    int GetCarID(int index) const;
    int GetTracksNumber() const;
    int GetAttachedTrackNumber() const;
    Track ** GetTracks() const;
    Track * GetAttachedTrack() const;
private:
    const short MAX_CAPACITY;
    const int TRACKS_NUMBER;
    int attachedTrackNumber;
    Track ** tracks;
    List<Car> cars;
};


#endif //OBROTNICAKOLEJOWA_TURNTABLE_H
