  vector<int> countFreq(vector<int>& arr) {
        
        
        vector<int>ans;
        map<int,int>mp;
        
        for (int i :arr){
            mp[i]++;
        }
        int sum=0;
        for (auto i:mp){
            sum+=i.second;
            ans.push_back(sum);
        }
        return ans;
        
        
        
    }
