#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle();

private:
    double width;
    double height;

public:
    double getArea();
    double getCircum();

    void setWidth(double w);
    void setHeight(double h);

};

#endif // RECTANGLE_H
