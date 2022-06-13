#ifndef __beleglist_h__
#define __beleglist_h__
#include <iostream>
//#include "BelegBluray.h"
#include "medium.h"
#include "person.h"
#include <fstream>

template <class T>
class LinkedListNode{
    public:
    LinkedListNode( T* Item,
                    LinkedListNode* Previous = nullptr,
                    LinkedListNode* Next = nullptr);
    T* Item;
    LinkedListNode* Previous;
    LinkedListNode* Next;
    
    
};
template <class T>
LinkedListNode<T>::LinkedListNode(T* item, LinkedListNode* previous,LinkedListNode* next)
                    :Item(item),Previous(previous),Next(next){}



template <class T>
class LinkedList{
public:
    LinkedList();
    ~LinkedList();
    void Clear();

    void PushBack(T* Item);
    void PopBack();
    void show();
    T* Front();
    T* Back();
    bool Empty();
    bool Search(T* Data);
    void remove(T* Data);
    void lend(T* Data, person);
    void returning(T* Data, person);
    void borrowed();
    int fileinput();
    int fileoutput();
    LinkedListNode<T>* getHead();
private:
 // zu public geandert weil sonst error: Head’ is private within this context
    LinkedListNode<T>* Head;
};


template <class T>
LinkedList<T>::LinkedList():Head(nullptr){}

template <class T>
LinkedList<T>::~LinkedList(){
    Clear();
}

template <class T>
LinkedListNode<T>* LinkedList<T>::getHead(){
    return Head;}

template <class T>
void LinkedList<T>::Clear(){
    LinkedListNode<T>* Current=Head;
    while (Current != nullptr)
    {
        LinkedListNode<T>* Temp = Current->Next;
        delete Current;
        Current = Temp;
    }
    Head=nullptr;
    
}

template<class T>
int LinkedList<T>::fileinput(){
    LinkedListNode<T> * Current = Head;
    std::ofstream out("Bluray.txt");
        while(Current != nullptr){
            out<<*(Current->Item);
            Current=Current->Next;
        }
    out.close();
    return 1;
}
/*
template<class T>
int LinkedList<T>::fileoutput(){
    ifstream in;
    //!in.eof()
    in.open("Bluray.txt", ios::in);
    for(int i=0;i<3;i++){
    Bluray bluray[i];
    in>>bluray[i];
    bluray[i].display();
    //PushBack(&bluray[i]);
}
    in.close();
    return 1;
}*/

template <class T>
void LinkedList<T>::PushBack(T* Item){//konnte tamplate problematisc werden
    if (Head == nullptr)//case if the List is empty
    {
        Head = new LinkedListNode<T>(Item);
    }
    else//case if the List is not empty
    {
        LinkedListNode<T> * Current = Head;
        while(Current->Next != nullptr){
            Current=Current->Next;
        }
        LinkedListNode<T> * Temp = new LinkedListNode<T>(Item,Current);
        Current->Next=Temp;
    }
}
/*
template <class T>
int LinkedList<T>::output(){
    ifstream file_obj;
	file_obj.open("Input.txt", ios::in);
	Bluray obj;
    file_obj.read((char*)&obj, sizeof(obj));
    	while (!file_obj.eof()) {
		// Assigning max ratings
		if (obj.Ratings > max) {
			max = obj.Ratings;
			Highest_rated = obj.Name;
		}

		// Checking further
		file_obj.read((char*)&obj, sizeof(obj));
	}
}*/

template<class T>
void LinkedList<T>::show(){ 
    LinkedListNode<T> * Current = Head;
        while(Current != nullptr){
            cout<<*(Current->Item)<<endl;
            Current=Current->Next;
        }
}

template <class T>
std::ostream& operator <<(std::ostream& COUT, LinkedList<T>& other){
    //std::cout<< "X";
    LinkedListNode<T> * Current = other.getHead();
    while (Current != nullptr){
        COUT<<(Current->Item)<<" "; //vielleict fehlerhaft
        Current=Current-> Next;
    }
    //std::cout<< "X";
    return COUT;
}

template <class T>
T* LinkedList<T>::Front(){
    if(Head==nullptr){
        throw std::out_of_range("Tried to call Front() empty linked list");
    }
    return Head->Item;
}

template <class T>
T* LinkedList<T>::Back(){
    if(Head==nullptr){
        throw std::out_of_range("Tried to call Back() empty linked list");
    }
    LinkedListNode<T>* Current = Head;
    while (Current->Next != nullptr){
        Current=Current-> Next;
    }
    return Current->Item;
}

template <class T>
void LinkedList<T>::PopBack(){
    if(Head==nullptr){//empty list
        throw std::out_of_range("Tried to pop empty linked list");
    }

    if(Head->Next==nullptr){
        delete Head;// one node
        Head=nullptr;
    }
    else{//when two or more nodes exist in the list
        LinkedListNode<T>* Current = Head;
        while (Current->Next != nullptr){
            Current=Current-> Next;
        }
        Current->Previous->Next=nullptr;
        delete Current;
    }
}

template <class T>
bool LinkedList<T>::Empty(){
    return Head == nullptr;
}

template<class T>
bool LinkedList<T>::Search(T* Data){ //funktioniert, eventuell noch umarbeiten fur T werte
    LinkedListNode<T> * Current = Head;
        while(Current != nullptr){
            if(Current->Item==Data){
                cout<<"Item enthalten"<<endl;
                return true;
                break;
                }
            else{Current=Current->Next;
                }
            }
            cout<<"Item nicht enthalten"<<endl;
            return false;
}

template<class T>
void LinkedList<T>::remove(T* Data){
    LinkedListNode<T> * Current = Head;
        while(Current != nullptr){
            if(Current->Item==Data){
            if(Head==nullptr){//empty list
                throw std::out_of_range("Tried to pop empty linked list");
            }

            if(Head->Next==nullptr){
                delete Head;// one node
                Head=nullptr;
            }
            else{//when two or more nodes exist in the list
                Current->Previous->Next=Current->Next;
                Current->Next->Previous=Current->Previous;
                delete Current;
            }
                break;
                }
            else{Current=Current->Next;
                }
            }

}

template<class T>
void LinkedList<T>::lend(T* Data, person p){
LinkedListNode<T> * Current = Head;
    while(Current != nullptr){
        if(Current->Item==Data){
            cout<<"Item wird verliehen"<<endl;
            Data->changeusage();
            int a=p.getusgnr();
            Data->setusgnr(a);
            break;
            }
        else{Current=Current->Next;
            }
        }
}

template<class T>
void LinkedList<T>::returning(T* Data, person p){
if(Data->getusage()){
    LinkedListNode<T>* Current = Head;
    while(Current != nullptr){
        if(Current->Item==Data){
            cout<<"Item wird zuruckgegeben"<<endl;
            Data->changeusage();
            Data->setusgnr(0);
            break;
        }
        else {Current=Current->Next;}
    }
}
else{cout<<"Item nicht verliehen"<<endl;}
}

template<class T>
void LinkedList<T>::borrowed(){
    LinkedListNode<T>* Current = Head;
   
        while(Current != nullptr){
            if(Current->Item->getusage()){
                cout<<*(Current->Item)<<endl;
            }
          
            Current=Current->Next;
            
        }
}

#endif