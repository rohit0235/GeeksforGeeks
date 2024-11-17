 int remove_duplicate(vector<int> &arr) {
       
       stack<int>s;
       vector<int>a;
       int size=0;
       for (int i:arr){
             if (s.empty()){
                 s.push(-1);
             }
            if (s.top()!=i){
                s.push(i);
                a.push_back(i);
                size++;
            }
       }
       arr=a;
       return size;
       
       
       
    }
