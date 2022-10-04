/*
Problem Statement
You are given a linked list of 'N' nodes and an integer 'K'. You have to reverse the given linked list in groups of size K i.e if the list contains x nodes numbered from 1 to x, then you need to reverse each of the groups (1,K),(K+1,2*K), and so on.
For example, if the list is [1, 2, 3, 4, 5, 6] and K = 2, then the new list will be [2, 1, 4, 3, 6, 5].
Sample Input 1:
2
1 2 3 4 5 6 -1
2
5 4 3 7 9 2 -1
4
Sample Output 1:
2 1 4 3 6 5
7 3 4 5 2 9
*/
Node *KReverse(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = KReverse(next, k);
    }
    return prev;
}
