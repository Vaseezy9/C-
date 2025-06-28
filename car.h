class Car {
private:
    std::string brand_mark;
    int cylinders;
    int power;

    static int count_objects;

public:
    Car(const std::string& brand, int cylinders, int pow) : brand_mark(brand), cylinders(cylinders), power(pow) {}
    virtual ~Car() {}

    friend int count();
    friend std::istream& operator>>(std::istream& is, Car& car);
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

int Car::count_objects = 0;
