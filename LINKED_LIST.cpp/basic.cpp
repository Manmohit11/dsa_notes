#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this -> data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

// Inserting element at front
void insertAtHead(Node* & head, int d){

    Node* temp = new Node(d);
    temp->next = head;
    head = temp; 

}

// Inserting element at end
void insertAtTail(Node* & tail, int d){

    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp; 

}

// Inserting element at given position
void insertAtPos(Node* & head,Node* & tail, int pos, int d){
    
    if(pos == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    Node* insert = new Node(d);
    int c = 1;

    while(c != pos-1){
        temp = temp->next;
        c++;
    }
    
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    insert->next = temp->next;
    temp->next = insert;

}

// deleting element from given position
void deletion(Node* & head,Node* & tail, int pos){

    Node* temp = head;

    if (pos==1){
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int c = 1;

    while (++c<pos){
        temp = temp->next;
    }

    Node* curr = temp->next;
    temp->next = curr->next;
    if(curr->next==NULL){
        tail = temp;
    }
    delete curr;

}


void print(Node* & head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node = new Node(10);
    Node* head = node;
    Node* tail = node;

    insertAtHead(head, 12);
    insertAtHead(head, 16);
    insertAtHead(head, 18);
    print(head);

    
    // insertAtTail(tail, 12);
    // print(tail);

    insertAtPos(head,tail,3,14);
    insertAtPos(head,tail,6,8);
    print(head);
    cout<<endl<<head->data<<" "<<tail->data<<endl<<endl;

    deletion(head,tail,1);
    print(head);
    cout<<endl<<head->data<<" "<<tail->data<<endl<<endl;

}
