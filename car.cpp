std::istream& operator>>(std::istream& is, Car& car) {
    is >> car.торговая_марка >> car.число_цилиндров >> car.мощность;
    Car::count_objects++;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << торговая марка: " << car.торговая_марка << std::endl
       << "число цилиндров: " << car.число_цилиндров << std::endl
       << "мощность: " << car.мощность << std::endl;
    return os;
}
