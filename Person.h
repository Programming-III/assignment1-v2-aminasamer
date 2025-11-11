#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person{
private:
string name;
int id;
public:
string getName(){
return name;
}
int getId(){
return id;
}
void display(){
  cout<<"Name: "<<getName()<<endl;
  cout<<"ID: "<<getId()<<endl;
}
};
#endif
