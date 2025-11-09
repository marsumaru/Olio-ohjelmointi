#include <iostream>
#include "h1.h"

using namespace std;

int main()
{
    int a, b;
    int result;
    int sum;

    cout << "Anna luku" << endl;
    cin >> (a);

    cout << "Anna toinen luku" << endl;
    cin >> (b);

    calcSum(a,b);
    calcDiv(a,b);

    sum = retSum(a,b);
    cout << a << "+" <<  b << " = " << sum << endl;

    try {
        result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;}


