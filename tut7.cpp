#include<iostream>

using namespace std;

int c = 45;

int main(){
    // **************** Built in datatypes ****************
    // int a, b, c;
    // cout<<"Enter the value of a:" <<endl;
    // cin>>a;
    // cout<<"Enter the value of a:" <<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum of a and b is c is " <<c<<endl;
    // cout<<"The value of c is "<<::c<<endl;
    
    // **************** Float, Double and long double Literals ****************
    // float d=34.4f;
    // long double e = 34.4l;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    
    // **************** Refrence Variable ****************
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // **************** Typecasting ****************
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a <<endl;
    cout<<"The vale of b is "<<int(b)<<endl;
    int c = int(b);
    return 0;
}