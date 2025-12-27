#include "Student.h"

#include <iostream>
using namespace std;
/*
Create a Student class with name, age, and dynamically allocated array of grades.
Tasks:
Implement a constructor to initialize the object.
Implement a copy constructor to correctly copy the object.
Show what happens if the copy constructor is not used (shallow copy problem).
Display student information.
Expected Learning:
Difference between shallow and deep copy
Memory management with new and delete

*/
/*
IF COPY CONSTRUCTOR TAKE VALUE NOT REF WILL CAUSE RECURSION
*/

int main(){
    
    Student s1("ahmed",26,3);
    Student s2=s1;
    s1.display();
    cout<<endl;
    s2.display();

    return 0;
}