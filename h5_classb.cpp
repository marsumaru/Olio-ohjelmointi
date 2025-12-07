#include "classb.h"
#include <string>

ClassB::ClassB() {}

std::string ClassB::getInfo()const{
    return info;
}
void ClassB::setInfo(const std::string& newInfo){
    info = newInfo;
}

