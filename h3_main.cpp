#include <iostream>
#include <vector>
#include "henkilo.h"
#include "opiskelija.h"

using namespace std;

int main()
{
    Henkilo h("Mauno", 34);
    h.tulostaTiedot();
    Opiskelija o("Matti", 25, "A1453");
    o.tulostaTiedot();

    vector<Henkilo*> henkiloList;

    henkiloList.push_back(new Henkilo("Tiina", 23));
    henkiloList.push_back(new Opiskelija("Timo", 20, "A236"));
    henkiloList.push_back(new Opiskelija("Pekka", 45, "A165"));
    henkiloList.push_back(new Henkilo("Saara", 36));


    for(Henkilo* h : henkiloList){
        h->tulostaTiedot();
        delete h;
    }

    return 0;
}
