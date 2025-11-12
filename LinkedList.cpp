// linked list is a linear data structure in which the data arrange in non-contigeous memory allocation:
// linked list are dynamic in nature :
// implementation of linked list by two methods are-->
//1--> STL
//2--> Scratch--> used by class and object:

//implementation of linked list by the scrach:

#include<iostream>
#include<list>
using namespace std;

// create class Node which holds the data as well as pointer to address the next node:
class Node{
    public:
       int data;
       Node* next;

     //parameterised constructor:
       Node(int val){
        data=val;
        next=NULL;
       }
};

//create class list which combine all the nodes class object:
class List{
    Node* head; // store the add of the first node;
    Node* tail; // store the add of the last node;

    // Non-parameterised constructor:
    List(){
        head=tail=NULL; // empty linked list created from the starting
    }
};

int main(){
    return 0;
}
