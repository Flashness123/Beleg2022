#include <iostream>
#include "medium.h"
//#include "BelegBluray.h"
#include "beleglist.h"//
#include "Bluray.cpp"//"BelegBluray.cpp"
#include "Buch.cpp"
using namespace std;
int main(){
    /*LinkedList<char> a;//wir haben die Liste vorerst fur ints angefertigt
    std::cout<<"char Liste:"<<std::endl;
    a.PushBack('a');a.PushBack('b');a.PushBack('c');a.PushBack('d');  
    char f=a.Search('b');
    std::cout<<"f: "<<f<<std::endl;
    std::cout<<"Leere char Liste:"<<std::endl;std::cout<<a<<std::endl;

    cout<<"Start"<<endl;
    Bluray b1("Pie2",532,16,1,16);
    b1.display();
    cout<<"-------------"<<endl;
    Buch b11("PiePie",532,16,1,16);
    b11.display();*/
    Bluray Potter("Harry Potter", 16, 237, 1, 345);
    Bluray Potter2("Harry Potter2", 16, 237, 1, 345);
    Potter.display();
    LinkedList<Bluray> c;
    c.PushBack(Potter);
    //a.show();
    c.show();
    bool g=c.Search(Potter2);
    std::cout<<"g: "<<g<<std::endl;


}