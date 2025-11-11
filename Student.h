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
  Student(){

  }
  Student(int year, string m){
    yearLevel = year;
    major = m;
  }
  int getYearLevel(){
  return yearLevel;
  }
  string getMajor(){
  return major;
  }
  void display(){
    cout<<"Name: "<<getName()<<endl;
    cout<<"Year: "<<getYearLevel()<<endl;
    cout<<"Major: "<<getMajor()<<endl;
  }
}
#endif
