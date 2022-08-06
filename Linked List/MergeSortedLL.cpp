/*
Problem Statement
You are given two sorted linked lists.You have to merge them to produce a combined sorted linked list.You need to return the head of the final linked list.
void solve(Node<int>* first, Node<int>* second){
    Node* curr1=first;
    Node* next1=curr1->next;
    Node* curr2=second;
    Node* next2=curr2->next;
*/

    while(next1!=NULL && curr2!=NULL){
        if((curr2->data>=curr2=!=NULL) && (curr2->data<=next1->data)){
            curr1->next=curr2;
            next2=curr2->next;
            curr->next=next1;

            curr1=curr2;
            curr2=next2;
        }
        else{
            curr1=next1;
            next1=next1->next;
            if(next1==NULL){
                curr1->next=curr2;
                return first;
            } 
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second){
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }
    if(first->data<=second->data){
        solve(first,second);
    }
    else{
        solve(second,first);
    }
}