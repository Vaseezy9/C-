#include "lorry.h"

std::istream& operator>>(std::istream& is, Lorry& lorry) {
    is >> lorry.getBrandMark() >> lorry.getCylinders() >> lorry.getPower() >> lorry.load_capacity;
    Car::count_objects++;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Lorry& lorry) {
    os << "brand: " << lorry.getBrandMark() << std::endl
       << "cylinders: " << lorry.getCylinders() << std::endl
       << "power: " << lorry.getPower() << std::endl
       << "load capacity: " << lorry.load_capacity << std::endl;
    return os;
}

Lorry::Lorry() : Car(), load_capacity(0) {}
Lorry::Lorry(const std::string& brand, int cylinders, int pow, int load_capacity) : Car(brand, cylinders, pow), load_capacity(load_capacity) {}
Lorry::Lorry(const Lorry& other) : Car(other), load_capacity(other.load_capacity) {}
Lorry::~Lorry() {}

std::string Lorry::getBrandMark() const { return static_cast<const Car&>(*this).getBrandMark(); }
void Lorry::setBrandMark(const std::string& brand) { static_cast<Car&>(*this).setBrandMark(brand); }
int Lorry::getCylinders() const { return static_cast<const Car&>(*this).getCylinders(); }
void Lorry::setCylinders(int cyl) { static_cast<Car&>(*this).setCylinders(cyl); }
int Lorry::getPower() const { return static_cast<const Car&>(*this).getPower(); }
void Lorry::setPower(int pow) { static_cast<Car&>(*this).setPower(pow); }
int Lorry::getLoadCapacity() const { return load_capacity; }
void Lorry::setLoadCapacity(int load) { load_capacity = load; }

Lorry& Lorry::operator=(const Lorry& other) {
    if (this != &other) {
        *this = static_cast<const Car&>(other);
        load_capacity = other.load_capacity;
    }
    return *this;
}
