#include <iostream>
#include <string>
#ifndef LORRY_H
#define LORRY_H
#include "car.h"

class Lorry : public Car {
private:
    int load_capacity;

public:
    Lorry(const std::string& brand, int cylinders, int pow, int load_capacity) : Car(brand, cylinders, pow), load_capacity(load_capacity) {}
    virtual ~Lorry() {}

    friend int count();
    friend std::istream& operator>>(std::istream& is, Lorry& lorry);
    friend std::ostream& operator<<(std::ostream& os, const Lorry& lorry);
};

#endif
