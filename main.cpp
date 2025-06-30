#include <iostream>
#include "car.h"
#include "lorry.h"

int main() {
    // Создание объектов
    Car car("VW", 4, 150);
    Lorry lorry("SCANIA", 6, 200, 10000);

    // Просмотр объектов
    std::cout << "Car: " << car << std::endl;
    std::cout << "Lorry: " << lorry << std::endl;

    // Перезагрузка
    car = lorry;
    std::cout << "Car after assignment: " << car << std::endl;

    // Подсчёт объектов
    std::cout << "Total objects: " << count() << std::endl;

    return 0;
}
