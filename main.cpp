#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car>carList;

    carList.emplace_back("Toyota", "Yaris", 2004);
    carList.emplace_back("Ford", "Focus", 2010);
    carList.emplace_back("Volvo", "V90", 2016);

   // cout << "Toisen alkion tiedot:" << endl;
    //carList[1].printData();

    for(int x=0; x<=2; x++){
        carList[x].printData();
    }

    return 0;
}
