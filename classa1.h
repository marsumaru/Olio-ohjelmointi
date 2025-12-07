#ifndef CLASSA1_H
#define CLASSA1_H
#include "classb.h"
#include <string>

class ClassA1
{
private:
    ClassB objectB;
public:
    ClassA1(ClassB);
    std::string getBinfo();
    void setBinfo(std::string);
};

#endif // CLASSA1_H
