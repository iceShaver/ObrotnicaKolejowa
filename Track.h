//
// Created by kamil on 3/19/17.
//

#ifndef OBROTNICAKOLEJOWA_TRACK_H
#define OBROTNICAKOLEJOWA_TRACK_H


#include "Car.h"
#include "List.h"
class Track {
public:
    Track();
    Car * PullCar();
    Car * GetCar();
    void PushCar(Car*);
    int GetNumberOfCars();
    int GetCarID(int index);
private:
    List<Car> cars;
};


#endif //OBROTNICAKOLEJOWA_TRACK_H
