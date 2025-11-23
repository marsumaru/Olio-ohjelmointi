#include "opiskelija.h"
#include <iostream>


Opiskelija::Opiskelija(string n, int i, string onum) :
    Henkilo(n,i), opiskelijanumero(onum) {}

void Opiskelija::tulostaTiedot(){
    Henkilo::tulostaTiedot();
    cout<< "opiskelijanumero: "<<opiskelijanumero << endl;
}
