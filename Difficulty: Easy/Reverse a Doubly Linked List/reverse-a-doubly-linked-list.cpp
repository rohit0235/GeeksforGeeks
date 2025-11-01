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
        // code here
           
              Node *prevn = NULL;
              Node *temp =head;
              
              while (temp){
                     Node *nxt= temp->next;
                     temp->prev = nxt;
                     temp->next = prevn;
                     prevn = temp;
                     temp =nxt;
              }
              return prevn;
          
    }
};