#ifndef CAR_H
#define CAR_H
#include <string>
#include "engine.h"
#include "wheel.h"

class Car
{
private:
    Engine engine;

    Wheel wheel1;
    Wheel wheel2;
    Wheel wheel3;
    Wheel wheel4;

    std::string model;
    std::string brand;

public:
    Car(std::string model, std::string brand);

    //getterit
    std::string getModel() const;
    std::string getBrand() const;

    //setterit
    void setEngine();
    void setWheels();
    void setModel(std::string model);
    void setBrand(std::string brand);

    void printDetails();
};

#endif // CAR_H
