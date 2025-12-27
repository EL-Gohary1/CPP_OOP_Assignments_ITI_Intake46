#include "Time.h"
#include <iostream>
using namespace std;
/*
Learn to overload operators for custom classes.
Create a Time class with hours and minutes.
Tasks:
Overload + to add two times.
Overload - to find the difference.
Overload ++ to increment the time by 1 minute.
Overload += to add minutes to a time object.
Display the time before and after operations.
Expected Learning:
How to overload operators for custom behavior
When to use member function vs friend function for overloading

*/

int main(){
    Time t1(2, 50);
    Time t2(1, 30);

    cout << "Initial Times:" << endl;
    t1.printTime();
    t2.printTime();

    Time sum = t1 + t2;
       // cout << "\nAfter t1 + t2:" << (string)(t1+t2) <<endl;
    cout << "\nAfter t1 + t2:" << endl;
    sum.printTime();

    Time diff = t1 - t2;
    cout << "\nAfter t1 - t2:" << endl;
    diff.printTime();

    // t + int
    Time addMinutes = t1 + 15;
    cout << "\nAfter t1 + 15 minutes:" << endl;
    addMinutes.printTime();

    // int + t
    Time addMinutes2 = 20 + t1;
    cout << "\nAfter 20 + t1:" << endl;
    addMinutes2.printTime();

    // ++ prefix
    cout << "\nBefore ++t1:" << endl;
    t1.printTime();
    ++t1;
    cout << "After ++t1:" << endl;
    t1.printTime();

    // ++ postfix
    cout << "\nBefore t1++:" << endl;
    t1.printTime();
    Time t1_post = t1++;
    cout << "Value returned by t1++:" << endl;
    t1_post.printTime();
    cout << "t1 after t1++:" << endl;
    t1.printTime();

    // -- prefix
    cout << "\nBefore --t2:" << endl;
    t2.printTime();
    --t2;
    cout << "After --t2:" << endl;
    t2.printTime();

    // -- postfix
    cout << "\nBefore t2--:" << endl;
    t2.printTime();
    Time t2_post = t2--;
    cout << "Value returned by t2--:" << endl;
    t2_post.printTime();
    cout << "t2 after t2--:" << endl;
    t2.printTime();

    // +=
    cout << "\nBefore t1 += 40:" << endl;
    t1.printTime();
    t1 += 40;
    cout << "After t1 += 40:" << endl;
    t1.printTime();

    // -=
    cout << "\nBefore t2 -= 50:" << endl;
    t2.printTime();
    t2 -= 50;
    cout << "After t2 -= 50:" << endl;
    t2.printTime();

    // cast
    int c = t1;
    cout << "\nc after cast : " << c << endl;

    string s = (string)(t1);
    cout << "\ns after explict cast : " << s <<endl;
    return 0;
}