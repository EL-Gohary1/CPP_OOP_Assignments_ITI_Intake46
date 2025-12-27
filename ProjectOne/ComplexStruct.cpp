#include <iostream>
using namespace std;
#include <math.h>
#include "ComplexStruct.h"



void ComplexStruct::setReal(float r){
    real = r;
}

void ComplexStruct::setImag(float i){
    imag = i;
}

float ComplexStruct::getReal(void){
    return real;
}

float ComplexStruct::getImag(void){
    return imag;
}

void ComplexStruct::print(void){
    if(imag<0)
	{
		cout<<real<<" - "<<fabs(imag)<<"i"<<endl;
	}
	else
	{
		cout<<real<<" + "<<imag<<"i"<<endl;
	}
}

ComplexStruct SumComplex(ComplexStruct c1, ComplexStruct c2){
    ComplexStruct Result;
    Result.setReal(c1.getReal()+c2.getReal());
    Result.setImag(c1.getImag()+c2.getImag());
    return Result;
}

ComplexStruct SubtractComplex(ComplexStruct c1, ComplexStruct c2){
    ComplexStruct Result;
    Result.setReal(c1.getReal()-c2.getReal());
    Result.setImag(c1.getImag()-c2.getImag());
    return Result;
}