#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <string>
using namespace std;

class Time
{
    private:
        int hours;
        int minutes;

    public:
        Time(int hours = 0, int minutes = 0);
        virtual ~Time();
        
        void normalize();

        void setTime(int hours, int minutes);
        void printTime(void);
        
        Time operator + (const Time& T2);
        Time operator + (int minutes);
        friend Time operator + (int minutes, const Time& T2);
        
        Time operator - (const Time& T2);
        Time operator - (int minutes);
        friend Time operator - (int minutes, const Time& T2);

        Time& operator ++ (void); // prefix
        Time operator ++ (int x); //int dummy postfix
        Time& operator += (int);
        
        Time& operator -- (void); // prefix
        Time operator -- (int);  //postfix
        Time& operator -= (int);

        operator int();                  // implicit cast
        explicit operator string(); // explicit cast explicit specifier on member function only available with C++11 or later
        

};


#endif
