 vector<int>s;
        for (int i:arr){
            if (i>=0){
                s.push_back(i);
            }
        }
        
        for (int i:arr){
            if (i<0){
                s.push_back(i);
            }
        }
        arr=s;
