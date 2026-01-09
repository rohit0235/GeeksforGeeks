/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL) return head;
        
        // deleting xth nnode 
        
        if(x==1){
             // pehle wala dekete jar di
               Node *temp = head->next;
               
               delete head;
               
               return temp;
              
        }
        
        else{
               
               Node *temp = head;
               while (x>2){
                    
                    temp =temp->next;
                    x--;
               }
               
                Node *t = temp->next;
                temp->next = temp->next->next;
                delete t;
                return head;
               
        }
        
        
        
        
        
        
        
    }
};