#include "Person.h"
#include <iostream> 
using namespace std;
Person::Person()
{ id = 0; name = ""; email = ""; } 
Person::Person(int i, string n, string e)
{ id = i; name = n; email = e;
} 
void Person::setId(int i)
{ id = i;
} 
void Person::setName(string n) 
{ name = n;
} 
void Person::setEmail(string e) 
{ email = e;
}
int Person::getId()
{ return id;
}
string Person::getName()
{ return name;
}
string Person::getEmail()
{ return email;
} 
void Person::display()
{ cout << "ID: " << id << endl;
cout << "Name: " << name << endl; 
cout << "Email: " << email<<endl;
}
