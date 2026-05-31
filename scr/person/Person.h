#ifndef PERSON_H 
#define PERSON_H
#include <string>
using namespace std;
class Person {
protected: 
int id;
string name;
string email;
public:
Person();
Person(int i, string n, string e);
void setId(int i);
void setName(string n);
void setEmail(string e);
int getId();
string getName();
string getEmail();
virtual void display();
};
#endif
