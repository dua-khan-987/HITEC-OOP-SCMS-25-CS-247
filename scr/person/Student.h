#ifndef  STUDENT_H
#define STUDENT_H
#include"Person.h"
class Student : public Person{
private:
string roll no;
float gpa;
public:
Student(string n,inta,string r,float g)
:Person(n,a){
roll no=r;
gpa=g;}
void displayInfo()override{
  cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"Roll no:"<<roll no<<endl;
cout<<"GPA:"<<gpa<<endl;
}};
#endif
