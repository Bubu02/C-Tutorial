/* There are two types of header filers:
1. System defined header files */
#include<iostream>
/* 2. User defined header files: It is written by the programmer
#include "header.h" //--> This will produce an error if header.h is not present in the current directory */

using namespace std;

int main(){
    int a=7, b=8;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmatic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of -- a is "<<--a<<endl;
    cout<<"The value of -- a is "<<--a<<endl;

    // Comparison operators
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < is "<<(a<b)<<endl;
     // Logical operators
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:" <<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:" <<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is:" <<(!(a==b))<<endl;
    
    return 0;
}

// NOTE : For header files search cppheader in google 