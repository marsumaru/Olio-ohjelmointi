#include "h1.h"
#include <iostream>
using namespace std;

void calcSum(int a, int b){
    cout << a + b << endl;
}

void calcDiv(int a, int b){
    if(b==0){
        cout<< "Jakaja ei saa olla nolla";
    }
    else{
    cout << a / b << endl;}
}


int retSum(int a, int b){
    return a + b;
}

float retDiv(int a, int b){
    if(b==0){
    throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    else{
    return a / b;}
}
