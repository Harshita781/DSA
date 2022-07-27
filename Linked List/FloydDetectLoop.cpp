Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return false;
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
            return true;
        }
    }
    return false;
}