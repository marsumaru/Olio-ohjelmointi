#ifndef WHEEL_H
#define WHEEL_H
#include <string>


class Wheel
{
private:
    int size;
    std::string type;

public:
    Wheel();
    Wheel(int size, std::string type);

    //getterit
    int getSize() const;
    std::string getType() const;

    //setterit
    void setSize(int s);
    void setType(std::string t);

};

#endif // WHEEL_H
