
class Solution {
  public:
    Node *copyList(Node *head) {
      Node * temp=new Node(head->data);
        Node * ans=temp;
        while(head!=NULL){
            temp->next=head->next;
            temp->random=head->random;
            temp=temp->next;
            head=head->next;
        }
        return ans;
    }
};
