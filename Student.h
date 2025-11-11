#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
class Student :: public Person{
  private:
  int yearLevel;
  string major;
  public:
  Student();
  Student(int year, string m);
  int getYearLevel();
  string getMajor();
  void display();
}
#endif
