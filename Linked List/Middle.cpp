/*
Problem Statement
Given the head node of the singly linked list, return a pointer pointing to the middle of the linked list.
If there are an odd number of elements, return the middle element if there are even elements return the one which is farther from the head node.
For example, let the linked list be 1->2->3->4->null
Sample Input 1 :
2
1 2 3 4 5 -1
4 0 32 5 48 6 -1
Sample Output 1 :
3
5
*/
Node *Rverse_ll(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return;
  }
  Node *temp1 = head;
  Node *temp2 = temp1;
  while (temp2 != NULL)
  {
    temp2 = temp1->next->next;
    temp1 = temp1->next;
  }
  return temp1;
}