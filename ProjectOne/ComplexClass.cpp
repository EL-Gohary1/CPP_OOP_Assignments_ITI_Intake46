#include "ComplexClass.h"
#include <iostream>
using namespace std;
#include <math.h>

ComplexClass::ComplexClass()
{
    //ctor
}

ComplexClass::~ComplexClass()
{
    //dtor
}

void ComplexClass::setReal(float r){
    real = r;
}

void ComplexClass::setImag(float i){
    imag = i;
}

float ComplexClass::getReal(void){
    return real;
}

float ComplexClass::getImag(void){
    return imag;
}

void ComplexClass::print(void){
    if(imag<0)
	{
		cout<<real<<" - "<<fabs(imag)<<"i"<<endl;
	}
	else
	{
		cout<<real<<" + "<<imag<<"i"<<endl;
	}
}
