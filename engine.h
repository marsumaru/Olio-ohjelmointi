#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsepower;
    double displacement;

public:
    Engine(int horsepower, double displacement);

    //getterit
    int getHorsePower() const;
    double getDisplacement() const;

    //setterit
    void setHorsePower(int h);
    void setDisplacement(double d);

};

#endif // ENGINE_H
