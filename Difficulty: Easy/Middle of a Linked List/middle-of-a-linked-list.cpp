/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node *s= head;
        Node *f= head->next;
        
        while (f && f->next){
       
               s=s->next;
               f=f->next->next;
               
        }
         
        if (f) return s->next->data;
     
        return s->data;
        
        
        
        
    }
};