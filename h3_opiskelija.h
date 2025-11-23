#ifndef OPISKELIJA_H
#define OPISKELIJA_H
#include "henkilo.h"
#include <iostream>

class Opiskelija : public Henkilo{
private:
    string opiskelijanumero;

public:
    Opiskelija(string n, int i, string onum);
    void tulostaTiedot() override;

};

#endif // OPISKELIJA_H
