#include <iostream>
#include <fstream>
#include "beleglist.h"//
//#include "Bluray.cpp"//"BelegBluray.cpp"
//#include "Buch.cpp"
//#include "person.cpp"
//#include "medium.cpp"
int main(){
/*    LinkedList<char> a;//wir haben die Liste vorerst fur ints angefertigt
    std::cout<<"char Liste:"<<std::endl;
    a.PushBack('a');a.PushBack('b');a.PushBack('c');a.PushBack('d');   

    for  (int i=0; i<=3; i++){
        try{
             // soll spater ausfuhrbar sein
            a.PopBack(); 
        }
        catch(std::exception e){
            std::cout<<"Exception caught";
        }
    }
  std::cout<<a<<std::endl;
    char f=a.Search('b');
    std::cout<<"f: "<<f<<std::endl;
    std::cout<<"Leere char Liste:"<<std::endl;std::cout<<a<<std::endl;


    LinkedList<int> b;//wir haben die Liste vorerst fur ints angefertigt
    std::cout<<"int Liste:"<<std::endl;
    b.PushBack(1);b.PushBack(2);b.PushBack(3);b.PushBack(4);   
    std::cout<<b<<std::endl;
    b.Clear();
    std::cout<<"Leere int Liste:"<<std::endl;std::cout<<b<<std::endl;

    //Bluray* p1=new Bluray("HI", 16, 123);
    //p1->display();
    

    //------------------------
    Bluray Potter("Harry Potter", 16, 237, 1, 345);
    Bluray Potter2("Harry Potter2", 16, 237, 1, 345);
    Potter.display();
    LinkedList<Bluray> c;
    c.PushBack(Potter);
    a.show();
    c.show();
    bool g=c.Search(Potter2);
    std::cout<<"g: "<<g<<std::endl;
*/
/*
    LinkedList<person> p;
    person Lukas("Lukas", 19, 1);
    person Maik("Maik", 16, 2);
    person Nikko("Nikko", 23, 3);
    p.PushBack(Lukas);
    p.PushBack(Maik);
    p.PushBack(Nikko);
    p.show();
    cout<<"------------"<<endl;
    p.remove(Maik);
    p.show();

    LinkedList<Bluray> m;//selen, vitamin b
    Bluray Potter("Harry Potter", 16, 1, 0, 0);//exception einbauen, dass entweder beide null oder keins
    m.PushBack(Potter);
    m.show();
    cout<<"Nun leiht Lukas Potter aus"<<endl;
    Bluray temp=m.lend(Potter, Lukas);
    m.remove(Potter);
    m.PushBack(temp);
    cout<<"---------"<<endl;
    m.show();
    cout<<"----------"<<endl;
    LinkedList<Buch> b;
    Buch Fifty("Fifty Shades", 18, 0, 0);
    b.PushBack(Fifty);
    cout<<"Nun leiht Lukas Fifty aus"<<endl;
    Buch tempp=b.lend(Fifty, Lukas);
    b.remove(Fifty);
    b.PushBack(tempp);
    b.show();
    cout<<"Nun returned Lukas Fifty"<<endl;
    Buch temppp=b.returning(Fifty, Lukas);
    b.remove(Fifty);
    b.PushBack(temppp);
    b.show();

    LinkedList<medium>* p = new LinkedList<medium>; //= new <Bluray>
    Bluray Potter("Harry Potter", 16, 1, 0, 0);
    Buch Illuminati("Illuminati", 18, 1, 0, 0);
    person Lukas("Lukas", 19, 1);
    p->PushBack(&Potter);
    p->PushBack(&Illuminati);
    medium* a =p->Back();

    cout<<*a<<endl;

    p->show();
    p->lend(&Potter, Lukas);
    p->borrowed();
*/
    LinkedList<medium>* p = new LinkedList<medium>;
    Bluray Potter("Harry Potter", 16, 1, 0, 0);
    Bluray Herr("Herr der Ringe", 18, 2, 0, 0);
    Bluray College("College Teens", 12, 3, 0, 0);
    p->PushBack(&Potter);
    p->PushBack(&Herr);
    p->PushBack(&College);
    p->fileinput();
    p->fileoutput();
    

return 0;
}