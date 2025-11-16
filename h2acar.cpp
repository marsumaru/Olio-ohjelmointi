#include "car.h"

Car::Car() {
    brand = "";
    model = "";
    yearModel = 0;}

void Car::printData(){
    cout<< "Auton merkki on "<< brand
        << " malli on "<< model
        << " ja valmistusvuosi on " << yearModel << endl;
    }

void Car::setBrand(string b){
    brand = b;
}
void Car::setModel(string m){
    model = m;
}
void Car::setYearModel(int y){
    yearModel = y;
}
