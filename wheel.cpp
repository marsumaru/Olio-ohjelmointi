#include "wheel.h"
#include <iostream>

using namespace std;

Wheel::Wheel(int size, string type): size(size), type(type) {}

//getterit
int Wheel::getSize() const{
    return size;
}
string Wheel::getType() const{
    return type;
}

//setterit
void Wheel::setSize(int s){
    size = s;
}
void Wheel::setType(string t){
    type = t;
}

