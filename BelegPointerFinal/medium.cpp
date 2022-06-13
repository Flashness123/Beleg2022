//#include <iostream>
//#include <iomanip>
//#include <cstdio>
#include <cstring>
#include "medium.h"
using namespace std;

ostream& operator <<(std::ostream& COUT, medium& other){
    return other.OUT(COUT);
}
ostream& medium::OUT(std::ostream& COUT)
{
    COUT<< "..> Wrong cout of medium<..";
    return COUT;
}