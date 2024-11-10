 vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>result;
        set<int>s;
        for (int i:a){
            s.insert(i);
        }
        for (int j:b){
            s.insert(j);
        }
    
       for (auto i:s){
           result.push_back(i);
       }
       
       return result;
        
        
        
        
        
        
    }
