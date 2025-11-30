#include "car.h"
#include "engine.h"
#include <iostream>
using namespace std;

Car::Car(string m, string b)
    : model(m), brand(b), engine(0,0.0), wheel1(0,""), wheel2(0,""), wheel3(0,""), wheel4(0,"")
{}

//getterit
string Car::getModel() const{
    return model;
}
string Car::getBrand() const{
    return brand;
}

//setterit
void Car::setModel(string m){
    model = m;
}
void Car::setBrand(string b){
    brand = b;
}

//Annetaan moottorille arvot
void Car::setEngine(){
    engine.setHorsePower(150);
    engine.setDisplacement(2.0);
}

//Annetaan renkaille arvot
void Car::setWheels(){
    wheel1.setSize(17);
    wheel2.setSize(17);
    wheel3.setSize(17);
    wheel4.setSize(17);

    wheel1.setType("kesarengas");
    wheel2.setType("kesarengas");
    wheel3.setType("kesarengas");
    wheel4.setType("kesarengas");
}


//printDetails-funktion toteutus
void Car::printDetails(){
    cout << "Auto: " << model <<" "<< brand << endl;
    cout << "Moottori: " << engine.getHorsePower() << " hp " << engine.getDisplacement() << " L "<< endl;
    cout << "Rengas 1: " << wheel1.getSize() << " tuumaa, " << wheel1.getType() << endl;
    cout << "Rengas 2: " << wheel2.getSize() << " tuumaa, " << wheel2.getType() << endl;
    cout << "Rengas 3: " << wheel3.getSize() << " tuumaa, " << wheel3.getType() << endl;
    cout << "Rengas 4: " << wheel4.getSize() << " tuumaa, " << wheel4.getType() << endl;

}
