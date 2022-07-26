/*
Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between nodes.
Input: Head of following linked list 
1->2->3->4->NULL 
Output: Linked list should be changed to, 
4->3->2->1->NULL
*/
Node* Reverse_ll(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
