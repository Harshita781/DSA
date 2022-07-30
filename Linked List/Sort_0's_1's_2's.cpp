/*
Problem Statement
You are given a linked list having N number of nodes and each will have an integer while can be 0,1, or 2. You have to sort the given linked list in ascending order.
Sample Input 1:
2
1 0 2 1 2 -1
0 0 1 2 -1
Sample Output 1:
0 1 1 2 2 -1
0 0 1 2 -1
*/
/*
Node* Sort(Node* head){
    int zeroCount=0;
    int oneCount=0;
    int twoCount=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zeroCount++;
        }
        else if(temp->data==1){
            oneCount++;
        }
        else if(temp->data==2){
            twoCount++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data=1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
    return head;
}
*/
//Approach 2
Node* SortList(Node* head){
    Node* zerohead=new Node(-1);
    Node* zeroTail=zerohead;
    Node* onehead=new Node(-1);
    Node* oneTail=zerohead;
    Node* twohead=new Node(-1);
    Node* twoTail=twohead;
    Node* curr=head;
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insertAtTail(zeroTail,curr);

        }
        else if(value==1){
            insertAtTail(oneTail,curr);

        }
        curr=curr->next;
    }
    if(onehead->next!=NULL){
        zeroTail->next=onehead->next;
    }
    else {
        zeroTail->next=twohead->next;
    }
    oneTail->next=twohead->next;
    twoTail->next=NULL;
    head=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
}