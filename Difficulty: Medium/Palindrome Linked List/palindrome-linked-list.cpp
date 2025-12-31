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
  
      
    Node * reverse(Node *head){
            
            Node *prev=NULL;
            Node *curr = head;
     
            while (curr){
                  
                  Node *nxt = curr->next;
                  curr->next = prev;
                  prev= curr;
                  curr=nxt;
                   
            }
            return prev;
            
            
    }
    
    bool isPalindrome(Node *head) {
        //  code here
        // find the mind and reverse it check from mid
         
          Node *slow = head;
          Node *fast = head->next;
          
          while (fast && fast->next){
               slow= slow->next;
               fast= fast->next->next;
          }
          
          Node *mid=slow;
          Node *n = reverse(slow->next);
          slow->next = n;
          slow=slow->next;
         Node *temp = head;
        //  while (temp){
        //       cout<<temp->data<<endl;
        //       temp=temp->next;
        //  }
          slow=mid->next;
         while ( slow){
            //  cout<<temp->data<<" "<<slow->data<<endl;
              if (temp->data!=slow->data) return false;
              slow = slow->next;
              temp = temp->next;
         }
         return true;
          
          
          
          
    }
};