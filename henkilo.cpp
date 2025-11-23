#include "henkilo.h"
#include <iostream>


Henkilo::Henkilo(string n, int i) : nimi(n), ika(i) {}

void Henkilo::tulostaTiedot(){
    cout<< "nimi: " << nimi << " ika " << ika << endl;
}
