#include <iostream>
using namespace std;
#include "ComplexStruct.h"
#include "ComplexClass.h"

/*
Write a main function to create two complex numbers, set their real and imaginary parts,
compute their sum and difference using the provided functions, and print the results.  
*/

 ComplexClass SUmComplex( ComplexClass c1,  ComplexClass c2);
 ComplexClass SUbtractComplex( ComplexClass c1,  ComplexClass c2);

 ComplexClass SUmComplex( ComplexClass c1,  ComplexClass c2){
    ComplexClass Result;
    Result.setReal(c1.getReal()+c2.getReal());
    Result.setImag(c1.getImag()+c2.getImag());
    return Result;
}

 ComplexClass SUbtractComplex( ComplexClass c1,  ComplexClass c2){
    ComplexClass Result;
    Result.setReal(c1.getReal()-c2.getReal());
    Result.setImag(c1.getImag()-c2.getImag());
    return Result;
}

int main(){
    ComplexStruct c1;
    ComplexStruct c2,c3;
    c1.setReal(5);
    c2.setReal(7);
    c1.setImag(2);
    c2.setImag(3);
    c3=SumComplex(c1,c2);
    c3.print();
    c3=SubtractComplex(c1,c2);
    c3.print();
    int c;
    cin>>c;

    ComplexClass c4;
    ComplexClass c5,c6;
    c4.setReal(5);
    c5.setReal(7);
    c4.setImag(2);
    c5.setImag(3);
    c6=SUmComplex(c4,c5);
    c6.print();
    c6=SUbtractComplex(c4,c5);
    c6.print();
    cin>>c;
    return 0;
}

