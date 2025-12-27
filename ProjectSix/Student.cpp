#include "Student.h"


Student::Student(string name, int age, int nCourses)
{
    cout<<"Student constructor"<<endl;
    this->name=name;
    this->age=age;
    this->nCourses=nCourses;
    pGrades=new int[nCourses];
    cout<<"plz enter grades : "<<endl;
    for(int i=0; i<nCourses; i++)
    {
        cin>>pGrades[i];
    }
}

// copy constructor (deep copy)

Student::Student(const Student& S)
{
    cout<<"Student copy constructor"<<endl;
    this->name=S.name;
    this->age=S.age;
    this->nCourses=S.nCourses;
    pGrades=new int[nCourses];
    for(int i=0; i<nCourses; i++)
    {
        pGrades[i]=S.pGrades[i];
    }
}


Student::~Student()
{
    cout<<"destructor";
    delete[] pGrades;
    pGrades=0;
}

void Student::display()
{
    cout<<"name : "<<name<<" age : "<<age<<" nCourses : "<<nCourses<<" pgrades : "<<pGrades<<endl; 
    for(int i=0; i<nCourses; i++)
    {
        cout<<" Grades : "<<pGrades[i];
    }
}