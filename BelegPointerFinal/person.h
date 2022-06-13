#ifndef _person_h_
#define _person_h_
#include <iostream>
using namespace std;
class person
{

public:
    person();
    person(const char* name, int age, int usgnr);
    void display()const;
    friend ostream& operator <<(ostream& COUT, person& other);
    bool operator==(person other);
    int getusgnr(){return usgnr;};

private:
    char* name;
    int age;
    int usgnr;
};

#endif