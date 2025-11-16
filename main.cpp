#include <iostream>
//#include "car.h"
#include "rectangle.h"
#include <memory>
#include "student.h"

using namespace std;

int main()
{
    Car car;
    car.setBrand("Toyota");
    car.setModel("Yaris");
    car.setYearModel(2005);

    car.printData();*/

    Rectangle* rect = new Rectangle();

    rect->setWidth(4.0);
    rect->setHeight(2.0);

    cout << " pinta-ala= " << rect->getArea() << endl;

    cout << " ymparysmitta= " << rect->getCircum() << endl;

    delete rect;*/

    unique_ptr<Student> student = make_unique<Student>();

    student->setName("Mauno Majava");
    student->setStudentNumber(14520);
    student->setAverage(3.2);

    cout << "Opiskelijan nimi: "<< student->getName() << endl;

    cout << "Opiskelijanumero: "<< student->getStudentNumber() << endl;

    cout << "Keskiarvo: "<< student->getAverage() << endl;

    return 0;
}
