Node* Rverse_ll(Node *head){
    if(head==NULL || head->next==NULL){
        return;
    }
      Node* temp1=head;
      Node* temp2=temp1;
      while(temp2!=NULL){
        temp2=temp1->next->next;
        temp1=temp1->next;       
      }
      return temp1;
}