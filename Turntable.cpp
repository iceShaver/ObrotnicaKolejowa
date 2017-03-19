//
// Created by kamil on 3/19/17.
//

#include "Turntable.h"

Turntable::Turntable(short maxCapacity, int tracksNumber, Track **tracks, int attachedTrack) :
        MAX_CAPACITY(maxCapacity), TRACKS_NUMBER(tracksNumber), tracks(tracks), attachedTrackNumber(attachedTrack) {

}

void Turntable::TurnClockwise(int number) {
    attachedTrackNumber = ((number + attachedTrackNumber) % TRACKS_NUMBER);
}

void Turntable::TurnAnticlockwise(int number) {
    int mod = (attachedTrackNumber - number) % TRACKS_NUMBER;
    attachedTrackNumber = (mod < 0 ? TRACKS_NUMBER + mod : mod);
}

void Turntable::BringIn(int number) {
    Car *car = tracks[attachedTrackNumber]->GetCar();
    while (car != nullptr && cars.GetSize() < MAX_CAPACITY && number--) {
        if (car = tracks[attachedTrackNumber]->PullCar())
            cars.PushFirst(car);
    };
}

void Turntable::BringOut(int number) {
    Car *car = cars.GetFirst();
    while (car != nullptr && number--) {
        if (car = cars.PopFirst());
        tracks[attachedTrackNumber]->PushCar(car);
    }
}

int Turntable::GetNumberOfCars() const {
    return cars.GetSize();
}

int Turntable::GetCarID(int index) const {
    return cars.Get(index)->GetID();
}

int Turntable::GetTracksNumber() const {
    return TRACKS_NUMBER;
}

int Turntable::GetAttachedTrackNumber() const {
    return attachedTrackNumber;
}

Track **Turntable::GetTracks() const {
    return tracks;
}

Track *Turntable::GetAttachedTrack() const {
    return tracks[attachedTrackNumber];
}
