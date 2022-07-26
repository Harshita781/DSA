#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};
void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

Node* Reverse_ll(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
      Node* temp1=head;
      Node* temp2=temp1;
      while(temp2!=NULL){
        temp2=temp1->next->next;
        temp1=temp1->next;       
      }
      return temp1;
}
void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    
    Node* node1 = new Node(10);
    Node* head = node1; 
    Node* tail = node1;
    insertAtTail(tail, 15);
    insertAtTail(tail,20);
    insertAtTail(tail,25);
    insertAtTail(tail,30);
    Reverse_ll(head);
    print(head);
    return 0;
}