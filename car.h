#include <iostream>
#include <string>
#ifndef CAR_H
#define CAR_H

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

    std::string getBrandMark() const;
    void setBrandMark(const std::string& brand);
    int getCylinders() const;
    void setCylinders(int cyl);
    int getPower() const;
    void setPower(int pow);
    Car& operator=(const Car& other);
};

int Car::count_objects = 0;

#endif
