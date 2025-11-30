#include "engine.h"

//konstruktori
Engine::Engine(int horsepower, double displacement):
    horsepower(horsepower), displacement(displacement){}

//getterit
int Engine::getHorsePower() const{
    return horsepower;
}

double Engine::getDisplacement() const{
    return displacement;
}

//setterit
void Engine::setHorsePower(int h){
    horsepower = h;
}
void Engine::setDisplacement(double d){
    displacement = d;
}
