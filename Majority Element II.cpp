    vector<int> findMajority(vector<int>& arr) {
        int n=arr.size();
         map<int,int>mp;
         for (int i:arr){
             mp[i]++;
         }
         vector<int>result;
         for (auto i:mp){
             if (i.second>n/3){
                  result.push_back(i.first);
             }
         }
         return result;
       
    }
