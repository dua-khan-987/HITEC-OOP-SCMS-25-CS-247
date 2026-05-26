#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using name space std;
class person {
Protected:
string name;
int age;
Public:
Person(string n,int a){
name=n;
age=a;
}
virtual void displayInfo()=0;
};
#endif
