#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <iostream>
using namespace std;
class Instructor :: public Person{
    private:
    string department;
    int experienceYears;
    public:
    Instructor();
    Instructor(string d, int exp);
    string getDepartment();
    int getExperienceYears();
    void display();
}

#endif
