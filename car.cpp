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
