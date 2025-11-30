#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    //Luodaan olio car
    Car car("Corolla", "Toyota");

    //Kutsutaan funktioita
    car.setEngine();
    car.setWheels();

    //Tulostetaan tiedot
    car.printDetails();

    return 0;
}

