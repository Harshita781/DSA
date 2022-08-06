
/*
You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. You are also given M random pointers, where you will be given M number of pairs denoting two nodes a and b  i.e. a->arb = b.

Construct a copy of the given list. The copy should consist of exactly N new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.
Input:
N = 4, M = 2
value = {1,2,3,4}
pairs = {{1,2},{2,4}}
Output: 1
*/
void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *newNode = new Node(d);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

Node *copyList(Node *head)
{
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data)
            temp = temp->next;
    }
    unordered_mapp<Node *, Node *> oldToNewNode;
    Node *originalNode = head;
    Node *cloneNode = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        oldToNewNode[originalNode] = cloneNode;
        original = originalNode->next;
        cloneNode = cloneNode->next;
    }

    originalNode = head;
    cloneNode = cloneHead;
    while (originalNode != NULL)
    {
        cloneNode->random = oldToNew[originalNode->random];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    return cloneHead;
}