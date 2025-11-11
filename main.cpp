#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;


// ==================== Person Class Implementation ====================

Person::Person(){
}
Person::Person(string n, int ID){
    name = n;
    id = ID;
}
Person::string getName(){
    return name;
}
Person::int getId(){
    return id;
}
Person::void display(){
  cout<<"Name: "<<getName()<<endl;
  cout<<"ID: "<<getId()<<endl;
}



// ==================== Student Class Implementation ====================

Student::Student(){
  }
Student::Student(int year, string m, string n, int ID){
   Person(n, ID);
    yearLevel = year;
    major = m;
  }
Student::int getYearLevel(){
  return yearLevel;
  }
Student::string getMajor(){
  return major;
  }
Student::void display(){
    cout<<"Name: "<<getName()<<endl;
    cout<<"Year: "<<getYearLevel()<<endl;
    cout<<"Major: "<<getMajor()<<endl;
  }


// ==================== Instructor Class Implementation ====================

Instructor:: Instructor(){
    }
Instructor::Instructor(string d, int exp, string n, int ID){
    Person(n, ID);
        department = d;
        experienceYears = exp;
    }
Instrcutor::string getDepartment(){
        return department;
    }
Instructor::int getExperienceYears(){
        return experienceYears;
    }
Instructor::void display(){
        cout<<"Name: "<<getName()<<endl;
        cout<<"Department: "<<getDepartment()<<endl;
        cout<<"Experience: "<<getExperienceYears()<<endl;
    }


// ==================== Course Class Implementation ====================

Course::Course(){
    }
Course::Course(int CC, string CN, int max){
        courseCode = CC;
        courseName = CN;
        maxStudents = max;
        students[] = malloc(sizeof(Student)*maxStudents);
        currentStudents = 0;
    }
Course::void addStudent(const Student& s){
        students[currentStudents-1] = s;
        currentStudents++;
    }
Course::string getCourseName(){
        return courseName;
    }
Course::int getCourseCode(){
        return courseCode;
    }
Course::int getMaxStudents(){
        return maxStudents;
    }
Course::void display(){
        cout<<"Course: "<<getCourseCode()<<" - "<<getCourseName()<<endl;
        cout<<"Max Students: "<<getMaxStudents()<<endl;
        cout<<"Currently Enrolled: "<<student.display()<<endl;
    }


// ==================== Main Function ====================
int main() {
   Student(2,"Informatics","Omar Nabil",2202);
   Instructor("Computer Science",5,"Dr Lina Khaled",1202);
    
    return 0;
}
