// Push Frony--> function is used to push the value from the front of the linked list:

#include<iostream>

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
public:    
    List(){
        head=tail=NULL; // empty linked list created from the starting
    }

    // create function to push value from the front of the linked list:
    void push_front(int val){
        //create new node:
        
        //(method 1-->create node pointer newNode and initialsed it with new Node(val) )
        Node* newNode = new Node(val); //dynamic
        
        //(method 1-->create newNode my passing value in Node newNode(val) but it created static object for this class so when we come out from the control of this function the newNode automatically deletd:)
        //Node newNode(val); // static object created 
        
        //condition1->for NULL value in linked list:
        if(head==NULL){
            head=tail=newNode; // then assign same node to the head and tail;
            return;
        }
        //condition2-> for NOT-NULL value in linked list:
        else{
            newNode->next=head; //(*newNode).next = head; pointre ko derefernce krke uski next properties ko access krna chahte h to assign in head;
            head=newNode; // update the head;
        }
    }
    //create function to Print the linked list:
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
     // create object:
     List li;
     li.push_front(1);
     li.push_front(2);
     li.push_front(3);

     li.Print_Linked_List();

    return 0;
}
