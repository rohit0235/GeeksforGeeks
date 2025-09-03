/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
                  
                  
                  Node *curr = head;
                  if (head==NULL) return nullptr;
                  
                  Node *prevn = NULL;
                  while (curr){
                       
                       
                       Node *next =curr->next;
                       curr->prev=next;
                       curr->next=prevn;
                       
                       prevn= curr;
                       curr=next;
                        
                  }
                  return prevn;
                  
        
    }
};