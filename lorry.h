class Lorry : public Car {
private:
    int load_capacity;

public:
    Lorry(const std{string& brand, int cylinders, int pow, int load capacity) : Car(brand, cylinders, pow), load_capacity(load capacity) {}
    virtual ~Lorry() {}

    friend int count();
    friend std::istream& operator>>(std::istream& is, Lorry& lorry);
    friend std::ostream& operator<<(std::ostream& os, const Lorry& lorry);
};
