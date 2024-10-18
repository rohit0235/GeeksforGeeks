    bool checkDuplicates(vector<int> &arr) {
        
        set<int>s;
        for (int i:arr){
            s.insert(i);
        }
        return s.size()!=arr.size();

    }
