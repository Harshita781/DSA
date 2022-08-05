/*
Problem Statement
Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.
Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0 
*/
void insertAtTail(Node* &head,Node* &tail int d) {
     // new node create
    Node* temp = new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

Node* add(Node* first,Node*second){
    int carry=0;
    Node* ansHead=NULL;
    Node* ansTail=NULL;

    while(first!=NULL || second!=NULL || carry!=0){
        int val1=0;
        if(first!=NULL)
            val1=first->data;
        int val2=0;
        if(second!=NULL)
            val2=second->data;
        int sum=carry+val1+val2;
        int digit=sum%10;
        insertAtTail(ansHead,ansTail,digit);
        
        carry=sum/10;
        if(first!=NULL)
            first=first->next;

        if(second!=NULL)
            second=second->next;

    }
    return ansHead;

}

Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node* addTwoLL(Node* first,Node* second){
    first=reverse(first);
    second reverse(second);
    Node* ans= add(first,second);
    ans=reverse(ans);
    return ans;
}