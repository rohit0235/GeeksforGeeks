int count(struct Node* head, int key) {
        // add your 
        if (head==NULL ) return 0;
        int count=0;
        while (head!=NULL){
            if (head->data==key){
                count++;
            }
            head=head->next;
        }
        return count;
    }
