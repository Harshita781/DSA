void insertAtTail(Node* &head,Node* &tail,int d){
    Node* newNode=new Node(d);
    if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

Node* copyList(Node* head){
    Node* cloneHead=NULL;
    Node*cloneTail=NULL;

    Node* temp=head;
    while(temp!=NULL){
        insertAtTail(cloneHead,cloneTail,temp->data)
        temp=temp->next;
    }
    unordered_mapp<Node* , Node*> oldToNewNode;
    Node* originalNode=head;
    Node* cloneNode=cloneHead;
    while(originalNode!=NULL && cloneNode!=NULL){
        oldToNewNode[originalNode]=cloneNode;
        original=originalNode->next;
        cloneNode=cloneNode->next;
    }

    originalNode=head;
    cloneNode=cloneHead;
    while(originalNode!=NULL){
        cloneNode->random=oldToNew[originalNode->random];
        originalNode=originalNode->next;
        cloneNode=cloneNode->next;
    }
    return cloneHead;
}