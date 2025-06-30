cmake_minimum_required(VERSION 3.5)
project(Car_Lorry)

set(SOURCES car.cpp lorry.cpp count.cpp main.cpp)
set(HEADERS car.h lorry.h)

add_executable(car_lorry ${SOURCES} ${HEADERS})
