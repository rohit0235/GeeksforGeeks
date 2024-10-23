 int sumOfLastN_Nodes(struct Node* head, int n) {
      
           
           int count=0;
              Node *temp1=head;
           while (temp1!=NULL){
               count++;
               temp1=temp1->next;
           }

           Node *temp=head;
           int sum=0;
           int c=0;
           while (temp!=NULL){
               if (c>=count-n){
                   sum+=temp->data;
               }
               else{
 
                   c++;
               }
               temp=temp->next;
           }
        
           return sum;
        
        
    }
