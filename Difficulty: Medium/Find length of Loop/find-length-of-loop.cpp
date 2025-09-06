/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
            Node *slow = head;
            Node *fast = head->next;
            int count = 0;
            while (fast && fast->next){
                   
                   if (!slow || !fast) return 0;
                     
                    if (slow == fast){
                         
                          fast = fast->next;
                          count++;
                          while (fast!=slow){
                                count++;
                                fast=fast->next;
                          }
                          
                          break; 
                    }
                    
                    slow = slow->next;
                    fast = fast->next->next;
        
                    
                   
            }
            
            
            return count ;
            
            
    }
};