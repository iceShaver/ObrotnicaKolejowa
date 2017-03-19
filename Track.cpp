//
// Created by kamil on 3/19/17.
//

#include "Track.h"
#include <iostream>
using namespace std;
Track::Track() {
    int carsNumber;
    int id;
    cin >> carsNumber;
    for (int i = 0; i < carsNumber; ++i) {
        cin >> id;
        cars.PushLast(new Car(id));
    }

}

void Track::PushCar(Car * car) {
    cars.PushFirst(car);
}


Car *Track::PullCar() {
    return cars.PopFirst();
}

int Track::GetNumberOfCars() {
    return cars.GetSize();
}

int Track::GetCarID( int index) {
    return cars.Get(index)->GetID();
}

Car *Track::GetCar() {
    return cars.GetFirst();
}
