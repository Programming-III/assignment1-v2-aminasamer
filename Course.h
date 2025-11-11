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
    Course();
    Course(int CC, string CN, int max);
    void addStudent(const Student& s);
    string getCourseName();
    int getCourseCode();
    int getMaxStudents();
    Student getStudents();
    void displayCourseInfo();
}

#endif
