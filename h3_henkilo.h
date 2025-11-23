#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>

using namespace std;

class Henkilo
{
private:
    string nimi;
    int ika;

public:
    Henkilo(string n, int i);
    virtual void tulostaTiedot();
};

#endif // HENKILO_H
