/*
Problem Statement
You want to play your fried, but your friend has pending homework, help him complete that.
Yoy are given a 'Head' of a sorted linked list.You can remove some values from the linked list.In the end,you must return a sorted linked list that contains no adjacent values that are equal.

Sample Input 1 :
2
1 2 2 3 -1
1 2 3 4 -1
Sample Output 1 :
1 2 3 -1
1 2 3 4 -1

*/
Node* uniqueSortedList(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    while(curr!=NULL){
        if(curr->next!=NULL && curr->data==cur->next->data){
            Node* next_next=curr->next->next;
            Node* nodeToDelete=curr->next
            delete(nodeToDelete);
            curr->next=next_next;
            }
        else{
            curr=curr->next;
        }
    }
    return head;
}