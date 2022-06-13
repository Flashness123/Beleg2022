#include "person.h"
#include <iostream>
#include <cstring>
using namespace std;
person::person(){
    name=new char[16];
    name[0]='\0';
    age=0;
    usgnr=0;
}

person::person(const char* name, int age, int usgnr){
    this->name=new char[strlen(name+1)];
    strcpy(this->name,name);
    this->age=age;
    this->usgnr=usgnr;
}

void person::display()const{
    cout<<"Name:"<<name<<'\n';
    cout<<"AGE:"<<age<<'\n';
    cout<<"User Number:"<<usgnr<<'\n';
}

bool person::operator==(person other){
    return strcmp(this->name,other.name) == 0;
    }

ostream& operator <<(std::ostream& COUT, person& other){
    cout<<"Name:"<<other.name<<'\n';
    cout<<"AGE:"<<other.age<<'\n';
    cout<<"User Number:"<<other.usgnr<<'\n';
return COUT;
}