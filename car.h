class Car {
private:
    std::string торговая_марка;
    int число_цилиндров;
    int мощность;

    static int count_objects;

public:
    Car(const std::string& марка, int цилиндры, int мощ) : торговая_марка(марка), число_цилиндров(цилиндры), мощность(мощ) {}
    virtual ~Car() {}

    friend int count();
    friend std::istream& operator>>(std::istream& is, Car& car);
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

int Car::count_objects = 0;
