//Write a program to find out total and average of four subjects[English, Mathematics, Assamese, Sciense].

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float a,b,c,d,total,ave;
    /*
    a= marks in english.
    b= marks in mathematics.
    c= marks in Assamese.
    d= marks in Science.
    */
   cout<<"Enter the mark of English = ";
   cin>>a;
   cout<<"Enter the mark of Mathematics = ";
   cin>>b;
   cout<<"Enter the mark of Assamese = ";
   cin>>c;
   cout<<"Enter the mark of Science = ";
   cin>>d;
   total = a+b+c+d;
   ave=total/4;
   cout<<"Total marks you got  = "<<total<<endl;
   cout<<"Average marks is = "<<ave<<endl;
    return 0;
}
