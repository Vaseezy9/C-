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
