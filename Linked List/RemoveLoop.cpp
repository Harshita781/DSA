/*
Problem Statement
Given a singly linked list, you have to detect the loop and remove the loop from the linked list, if present.You have to make changes in the given linked list itself and return the updated linked list.

Expected Complexity:Try doing it in O(n) time complexity and O(1) space complexity.Here, n is the number of node in the linked list.

Sample Input:
6 2
1 2 3 4 5 6 
Sample Output:
1 2 3 4 5 6
*/
Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floydDetectLoop(head);
    if(intersection==NULL){
        return NULL;
    }
    Node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;

    }
    return slow;
}

Node* RemoveLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* startOfLoop=getStartingNode(head);
    if(startOfLoop==NULL){
        return NULL;
    }
    Node* temp=startOfLoop;

    while(temp->next!=startOfLoop){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}