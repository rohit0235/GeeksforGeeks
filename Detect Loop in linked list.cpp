set<Node*>s;
           
           while (head){
               if (s.find(head->next)!=s.end()){
                return true;
               }
               else{
                   s.insert(head->next);
               }
               head=head->next;
           }
                return false;      
