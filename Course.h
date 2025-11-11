#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
#include <iostream>
using namespace std;
class Course{
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    Course(){

    }
    Course(int CC, string CN, int max){
        courseCode = CC;
        courseName = CN;
        maxStudents = max;
        students[] = malloc(sizeof(Student)*maxStudents);
        currentStudents = 0;
    }
    void addStudent(const Student& s){
        students[currentStudents-1] = s;
        currentStudents++;
    }
    string getCourseName(){
        return courseName;
    }
    int getCourseCode(){
        return courseCode;
    }
    int getMaxStudents(){
        return maxStudents;
    }
    Student getStudents(){
        return students;
    }
    void display(){
        cout<<"Course: "<<getCourseCode()<<" - "<<getCourseName()<<endl;
        cout<<"Max Students: "<<getMaxStudents()<<endl;
        cout<<"Currently Enrolled: "<<getStudents()<<endl;
    }
}

#endif
