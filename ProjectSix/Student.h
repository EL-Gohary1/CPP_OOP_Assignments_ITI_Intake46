#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int nCourses;
    int* pGrades;
public:
    Student(string name = "Default_name", int age=22, int nCourses=1);
    Student(const Student& S);
    ~Student();
    void display();
};





#endif