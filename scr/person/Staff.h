#ifndef STAFF_H
#define STAFF_H
#include "Person.h"
class Staff : public Person {
private:
string role;
piblic:
Staff(string n,int a,string r)
     :Person(n,a){
role=r;
}
void displayInfo() override
{
  cout<<"Staff Name :"<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"Role:"<<role<<endl;
}
};
#endif
