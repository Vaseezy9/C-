#include "car.h"

std::istream& operator>>(std::istream& is, Car& car) {
    is >> car.brand_mark >> car.cylinders >> car.power;
    Car::count_objects++;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << "brand mark: " << car.brand_mark << std::endl
       << "cylinders: " << car.cylinders << std::endl
       << "power: " << car.power << std::endl;
    return os;
}

Car::Car() : brand_mark(), cylinders(0), power(0) {}
Car::Car(const std::string& brand, int cylinders, int pow) : brand_mark(brand), cylinders(cylinders), power(pow) {}
Car::Car(const Car& other) : brand_mark(other.brand_mark), cylinders(other.cylinders), power(other.power) {}
Car::~Car() {}

std::string Car::getBrandMark() const { return brand_mark; }
void Car::setBrandMark(const std::string& brand) { brand_mark = brand; }
int Car::getCylinders() const { return cylinders; }
void Car::setCylinders(int cyl) { cylinders = cyl; }
int Car::getPower() const { return power; }
void Car::setPower(int pow) { power = pow; }

Car& Car::operator=(const Car& other) {
    if (this != &other) {
        brand_mark = other.brand_mark;
        cylinders = other.cylinders;
        power = other.power;
    }
    return *this;
}

int Car::count_objects = 0;
