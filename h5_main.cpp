#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    int* pointerA = &a;
    int &refA = a;

    pointerA = &b;
    refA = b;

    //cout << "a:n arvo on: "<< a << " ja osoite on "<< &a << endl;

    //pointterin tulostus
    cout << "Pointterin osoittama osoite on "<< pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on "<< *pointerA << endl;

    //referenssin tulostus
    cout << "refA osoittaa osoitteeseen:" << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on:" << refA << endl;

    return 0;
}
