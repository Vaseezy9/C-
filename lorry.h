class Lorry : public Car {
private:
    int грузоподъёмность_кузова;

public:
    Lorry(const std{string& марка, int цилиндры, int мощ, int грузоподъёмность) : Car(марка, цилиндры, мощ), грузоподъёмность_кузова(грузоподъёмность) {}
    virtual ~Lorry() {}

    friend int count();
    friend std::istream& operator>>(std::istream& is, Lorry& lorry);
    friend std::ostream& operator<<(std::ostream& os, const Lorry& lorry);
};
