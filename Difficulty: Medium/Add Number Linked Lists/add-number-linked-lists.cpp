/*
class Node {
  public:
    int data;
    Node* next;
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
    
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
             
             Node *dummy = new Node(-1);
             Node *curr = dummy;
             
            //  Node *curr = head1;
            //  Node *prev=NULL
              
           head1=  reverse(head1);
          head2=    reverse(head2);
           
           
          Node *temp1=head1;
          Node *temp2=head2;
          int carry=0;
          while (temp1 && temp2) {
                  
                   int sum = temp1->data +temp2->data+carry;
                   
                   if (sum>=10){
                          carry=1;
             Node *newnode = new Node(sum%10);
                 curr->next = newnode;
                 curr=curr->next;
                   } else{
                        carry=0;
                             Node *newnode = new Node(sum);
                             curr->next = newnode;
                             curr=curr->next;
                   }
                         
            
                
                    temp2=temp2->next;
                         temp1=temp1->next;
          }
          while (temp1 ) {
                  
                   int sum = temp1->data +carry;
                              if (sum>=10){
                          carry=1;
             Node *newnode = new Node(sum%10);
                 curr->next = newnode;
                 curr=curr->next;
                   } else{
                        carry=0;
                             Node *newnode = new Node(sum);
                             curr->next = newnode;
                             curr=curr->next;
                   }
                         
                     temp1=temp1->next;
               
          }
          while (temp2) {
                  
                   int sum = temp2->data +carry;
                   
                      if (sum>=10){
                          carry=1;
             Node *newnode = new Node(sum%10);
                 curr->next = newnode;
                 curr=curr->next;
                   } else{
                        carry=0;
                             Node *newnode = new Node(sum);
                             curr->next = newnode;
                             curr=curr->next;
                   }
                         
                   temp2=temp2->next;
               
          }
          
          
          if (carry==1){
                 Node *newNode =new Node(1);
                 curr->next = newNode;
                 curr=curr->next;
          }
          
          dummy = dummy->next;
          dummy = reverse(dummy);
          
          Node *temp=dummy;
          while (temp){
            if (temp->data==0) dummy=dummy->next;
            else break;
            temp=temp->next;
          }
          return dummy;
           
          
    }
};