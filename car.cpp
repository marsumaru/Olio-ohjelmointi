#include "car.h"
#include <iostream>

Car::Car(std::string b, std::string m, int y){
    brand =b;
    model = m;
    yearModel = y;
}
void Car::printData(){
    std::cout<< "Merkki= "<< brand
         <<" malli= " << model
         << " valmistusvuosi= " << yearModel << std::endl;
}
