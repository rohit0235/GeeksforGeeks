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
      Node* rev( Node* head) {
        
        Node* prev=NULL;
        Node *tmp;
        Node *curr=head;
        
        while (curr){
            
            tmp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=tmp;
            
            
            
            
        }
        return prev;
        
        
        
    }
    Node* intersectPoint(Node* head1, Node* head2) {
            
            
            Node *temp = head1;
            unordered_set<Node*>st;
         
            while (temp){
                    st.insert(temp->next);
                   temp = temp->next;
            }
            
           temp = head2;
        while (temp->next){
            //  cout<<temp->next->data<<" ";
            if (st.find(temp->next)!=st.end())return temp->next;
       
            temp=temp->next;
            
            
        } 
        
        return temp;
        
            
    }
};