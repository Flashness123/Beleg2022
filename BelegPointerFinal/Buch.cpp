//#include <iostream>
//#include <iomanip>
//#include <cstdio>
#include <cstring>
#include "medium.h"
using namespace std;

Buch::Buch(){
    name=new char[16];
    name[0]='\0';
    mediumnr=0;
    usage=false;
    usgnr=0;
    FSK=0;
}

Buch::Buch(const char* name,int FSK, int mediumnr,bool usage, int usgnr){
    this->usage=false;
    this->usgnr=usgnr;
    this->mediumnr=mediumnr;
    this->name=new char[strlen(name+1)];
    strcpy(this->name,name);
    this->FSK=FSK;
}

bool Buch::operator==(Buch other){
    return strcmp(this->name,other.name) == 0;
    }

/*ostream& operator <<(std::ostream& COUT, Buch& other){
    COUT<<"Name:"<<other.name<<'\n';
    COUT<<"FSK:"<<other.FSK<<'\n';
    COUT<<"Mediumnumber:"<<other.mediumnr<<'\n';
    COUT<<"In use:"<<other.usage<<'\n';
    COUT<<"User Number:"<<other.usgnr<<'\n';
return COUT;
}*/
ostream& Buch::OUT(std::ostream& COUT){
    COUT<<name<<'\n';
    COUT<<FSK<<'\n';
    COUT<<mediumnr<<'\n';
    COUT<<usage<<'\n';
    COUT<<usgnr<<'\n';
    return COUT;}


void Buch::display()const{
    cout<<"Name:"<<name<<'\n';
    cout<<"FSK:"<<FSK<<'\n';
    cout<<"Mediumnumber:"<<mediumnr<<'\n';
    cout<<"In use:"<<usage<<'\n';
    cout<<"User Number:"<<usgnr<<'\n';
}

void Buch::changeusage(){
    if (usage==false)
    {
        this->usage=true;
    }else{
        this->usage=false;
    }
    
}