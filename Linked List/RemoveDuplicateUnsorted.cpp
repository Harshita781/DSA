/*
Problem Statement
You want to play your fried, but your friend has pending homework, help him complete that.
Yoy are given a 'Head' of a unsorted linked list.You can remove some values from the linked list.In the end,you must return a sorted linked list that contains no adjacent values that are equal.

Sample Input 1 :
2
2 1 3 2 -1
1 4 2 3 -1
Sample Output 1 :
-1 1 2 3 
-1 1 2 3 4 
*/
bool RemoveDuplicateUnsorted(Node* head){
    if(head==NULL){
        return NULL;
    }
    map<Node*, bool> visited;
    Node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            Node* next_next=temp->next->next;
            Node* nodeToDelete=temp->next;
            delete(nodeToDelete);
            temp->next=next_next;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}