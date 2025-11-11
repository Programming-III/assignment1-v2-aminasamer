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
    Instructor(){

    }
    Instructor(string d, int exp){
        department = d;
        experienceYears = exp;
    }
    string getDepartment(){
        return department;
    }
    int getExperienceYears(){
        return experienceYears;
    }
    void display(){
        cout<<"Name: "<<getName()<<endl;
        cout<<"Department: "<<getDepartment()<<endl;
        cout<<"Experience: "<<getExperienceYears()<<endl;
    }
}

#endif
