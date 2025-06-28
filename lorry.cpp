#include "lorry.h"

std::istream& operator>>(std::istream& is, Lorry& lorry) {
    is >> lorry.brand_mark >> lorry.cylinders >> lorry.power >> lorry.load_capacity;
    Car::count_objects++;
    return is;
}
std::ostream& operator<<(std::ostream& os, const Lorry& lorry) {
    os << "brand: " << lorry.brand_mark << std::endl
       << "cylinders: " << lorry.cylinders << std::endl
       << "power: " << lorry.power << std::endl
       << "load capacity: " << lorry.load_capacity << std::endl;
    return os;
}
