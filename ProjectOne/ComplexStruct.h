#ifndef COMPLEXSTRUCT_H_INCLUDED
#define COMPLEXSTRUCT_H_INCLUDED

/*
Define a structure to represent a complex number with real and imaginary parts.
Implement functions to set and get the real and imaginary parts, print the complex number,
and perform addition and subtraction operations.
*/

// Struct by default is public 

struct ComplexStruct{
    float real;
    float imag;

    void setReal(float);
    void setImag(float);
    float getReal(void);
    float getImag(void);
    void print(void);

};

ComplexStruct SumComplex(ComplexStruct c1, ComplexStruct c2);
ComplexStruct SubtractComplex(ComplexStruct c1, ComplexStruct c2);

#endif