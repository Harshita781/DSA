/*
Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Example 1:
Input:
N = 3
value[] = {1,2,1}
Output: 1
*/

bool checkPalindrome(vector<int> arr){
    int n=arr.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool IsPallindrome(Node* head){
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return checkPallindrome(arr);
}