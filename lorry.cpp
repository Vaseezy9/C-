std::istream& operator>>(std::istream& is, Lorry& lorry) {
    is >> lorry.торговая_марка >> lorry.число_цилиндров >> lorry.мощность >> lorry.грузоподъёмность_кузова;
    Car::count_objects++;
    return is;
}
std::ostream& operator<<(std::ostream& os, const Lorry& lorry) {
    os << "торговая марка: " << lorry.торговая_марка << std::endl
       << "число цилиндров: " << lorry.число_цилиндров << std::endl
       << "мощность: " << lorry.мощность << std::endl
       << "грузоподъёмность кузова: " << lorry.грузоподъёмность_кузова << std::endl;
    return os;
}
