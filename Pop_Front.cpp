// pop front --> delete the first node:
// we use 'delete' keyword to delete the node dynamically;

#include<iostream>
using namespace std;

// create class for node which hold data and pointer for next data:
class Node{
public:
    int data;
    Node* next;
    //constructor-->'
    Node(int val){
        data=val;
        next=NULL;
    }
};

// create class for linked list which holds each nodes:
class List{
    Node* head;
    Node* tail;
public:
    //constructor
    List(){
        head=tail=NULL;  // linked list created with Null 
    }

    // push_front function:
    void push_front(int val){
        Node* newNode = new Node(val);
        // condition 1(head==NULL):
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        // condition 2(head!=NULL):
        else{
         newNode->next=head;
         head=newNode;
        }
    }

    // push_Back function:
    void push_back(int val){
        Node* newNode = new Node(val);
        // condition 1(head==NULL):
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        // condition 2(head!=NULL):
        else{
         tail->next=newNode;
         tail=newNode;
        }
    } 

    // pop_front function:
    void pop_front(){
        if(head==NULL){
            cout<<"This linked list is empty.."<<endl;
        }
        else{
            Node* temporary=head; // store the add of node temprary
            head=head->next;  // update the head to next node
            temporary->next=NULL; // disconnect the connection with next node
            delete temporary; // delete temporary dynamically;
        }
    }

    void Print_Linked_List(){
        //create temp pointer start from the head:
        Node* temp=head;
        // while loop to traverse and print the node:
        while(temp!=NULL){
            cout<<temp->data<<"->"; // data= val;
            temp=temp->next; // next value;
        }
        cout<<"NULL"<<endl;
    }

};

int main(){
    //create object and call functions:
    List l1;
    l1.push_front(1);
    l1.push_front(2);

    l1.push_back(3);
    l1.push_back(4);

    l1.pop_front();

    l1.Print_Linked_List();

    return 0;
}

//o/p-->2->1->3->4->NULL