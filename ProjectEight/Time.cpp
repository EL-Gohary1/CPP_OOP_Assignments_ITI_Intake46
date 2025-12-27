#include "Time.h"
#include <iostream>
using namespace std;
#include <math.h>

Time::Time(int hours, int minutes) : hours(hours), minutes(minutes)
{
    cout<<"Time constructor"<<endl;
    normalize();
}

Time::~Time()
{
    cout<<"Tis is destroyed"<<endl;
}

void Time::setTime(int hours, int minutes)
{
    this->hours=hours;
    this->minutes=minutes;
}

void Time::printTime(void)
{
    cout<<hours<<":"<<minutes<<endl;
}

void Time::normalize() {
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
        else if (minutes < 0) {
            int borrow = (-minutes + 59) / 60;
            hours -= borrow;
            minutes += borrow * 60;
        }

        if (hours < 0)
            hours = minutes = 0;
}


Time Time::operator + (const Time& T2)
{
     return Time(hours + T2.hours, minutes + T2.minutes);
}
Time Time::operator + (int minutes)
{
    return Time(this->hours, this->minutes + minutes);
}
Time operator + (int minutes, const Time& T2)
{
    return Time(T2.hours, T2.minutes + minutes);
}
        
Time Time::operator - (const Time& T2)
{
    return Time(hours - T2.hours, minutes - T2.minutes);
}
Time Time::operator - (int minutes)
{
    return Time(this->hours, this->minutes - minutes);
}
Time operator - (int minutes, const Time& T2)
{
    return Time(T2.hours, T2.minutes - minutes);
}

Time& Time::operator ++ (void) // prefix
{
    minutes++;
    normalize();
    return *this;
}
Time Time::operator ++ (int minute) //int dummy postfix
{
    Time temp=*this;
    minutes++;
    normalize();
    return temp;
}
Time& Time::operator += (int minute)
{
    minutes += minute;
    normalize();
    return *this;
}
        
Time& Time::operator -- (void) // prefix --T
{
    minutes--;
    normalize();
    return *this;
}
Time Time::operator -- (int minute)  //int dummy postfix
{
    Time temp = *this;
    minutes--;
    normalize();
    return temp;
}
Time& Time::operator -= (int minute)
{
    minutes -= minute;
    normalize();
    return *this;
}

Time::operator int()
{
    return hours * 60 + minutes;
}

Time::operator string(){
    return to_string(hours) + ":" + to_string(minutes);
}
