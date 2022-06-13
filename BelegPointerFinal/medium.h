#ifndef _medium_h_
#define _medium_h_
#include <iostream>
using namespace std;

class medium{
    public:
        virtual int getmediumnr()=0;
        virtual char* getname()=0;
        //friend std::ostream& operator <<(std::ostream& COUT, medium& other);
        virtual std::ostream& OUT(std::ostream& COUT) =0;
        virtual int getusgnr()=0;
        virtual bool getusage()=0;
        virtual void changeusage()=0;
        virtual void setusgnr(int a)=0;

    public:
        int mediumnr;
        char* name;
};

class Bluray : public medium{
public:
    Bluray();
    Bluray(const char* name,int FSK,int mediumnr, bool usage=false, int usgnr=0 );//const hier sehr wichtig, sonst warning
    void display()const;
    int getmediumnr(){return mediumnr;};
    char* getname(){return name;};
    int getusgnr(){return usgnr;};
    bool getusage(){return usage;};
    void setusgnr(int a){this->usgnr=a;};
    int operator<(Bluray& other){return(getmediumnr()<(other).getmediumnr());}
    //friend std::ostream& operator <<(std::ostream& COUT, Bluray& other);
    friend std::ostream & operator << (std::ostream &out, const Bluray & obj){out << obj.name<<" "<<obj.FSK<<" "<<obj.mediumnr<<" "<<obj.usage<<" "<<obj.usgnr<<std::endl;return out;}
    friend std::istream & operator >> (std::istream &in,  Bluray &obj){in >> obj.name;in>>obj.FSK;in>>obj.mediumnr;in>>obj.usage;in>>obj.usgnr;return in;}
    bool operator==(Bluray other);
    void changeusage();
    ostream& OUT(std::ostream& COUT);
private://sollte private sein aber wie dann werte andern
    int FSK;
    bool usage;
    int usgnr;
};
std::ostream& operator <<(std::ostream& COUT, medium& other);
//std::ostream& operator <<(std::ostream& COUT, Bluray& other);


class Buch : public medium{
public:
    Buch();
    Buch(const char* name,int FSK,int mediumnr, bool usage=false, int usgnr=0 );//const hier sehr wichtig, sonst warning
    void display()const;
    int getmediumnr(){return mediumnr;};
    char* getname(){return name;};
    int getusgnr(){return usgnr;};
    bool getusage(){return usage;};
    void setusgnr(int a){this->usgnr=a;};
    int operator<(Buch& other){return(getmediumnr()<(other).getmediumnr());}
    //friend std::ostream& operator <<(std::ostream& COUT, Buch& other);
    friend std::ostream & operator << (std::ostream &out, const Buch & obj){out << obj.name<<" "<<obj.FSK<<" "<<obj.mediumnr<<" "<<obj.usage<<" "<<obj.usgnr<<std::endl;return out;}
    friend std::istream & operator >> (std::istream &in,  Buch &obj){in >> obj.name;in>>obj.FSK;in>>obj.mediumnr;in>>obj.usage;in>>obj.usgnr;return in;}
    bool operator==(Buch other);
    void changeusage();//kann spater vllt mit vererbung gelost werden
    ostream& OUT(std::ostream& COUT);
private:
    int FSK;
    bool usage;
    int usgnr;
};
#endif