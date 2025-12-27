#ifndef COMPLEX_H
#define COMPLEX_H

// class by default is public

class ComplexClass
{
        float real;
        float imag;

    public:
        ComplexClass();
        ~ComplexClass();
        void setReal(float);
        void setImag(float);
        float getReal(void);
        float getImag(void);
        void print(void);


};


#endif // COMPLEX_H
