#ifndef __BelegBluray_h__
#define __BelegBluray_h__
//#include <iostream>
//#include <iomanip>
class Bluray{
public:
    Bluray();
    Bluray(const char* name,int FSK,int mediumnr, bool usage=false, int usgnr=0 );//const hier sehr wichtig, sonst warning
    void display()const;
    int getmediumnr(){return mediumnr;}
    int operator<(Bluray& other){return(getmediumnr()<(other).getmediumnr());}
    friend std::ostream& operator <<(std::ostream& COUT, Bluray& other);
    bool operator==(Bluray other);
private:
    int mediumnr;
    char* name;
    int FSK;
    bool usage;
    int usgnr;
};

std::ostream& operator <<(std::ostream& COUT, Bluray& other);
#endif