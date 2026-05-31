#idndef FACULTY_H
#define FACULTY_H
#include "Person.h"
class Faculty : public Person {
private:
string despartment;
public:
Faculty(string n, int a, string d)
       : Person (n,a){
      department=d;}
void displayInfo() override
{
  cout<<"Faculty Name:"<<name<<endl;
cout<<"Department:"<<department<<endl;
}
];
#endif
