#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student
{
public:
    Student();

    std::string getName() const;
    void setName(const std::string &newName);

    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);

    double getAverage() const;
    void setAverage(double newAverage);

private:
    std::string name;
    int studentNumber;
    double average;
};

#endif // STUDENT_H
