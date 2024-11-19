 vector<int> countDistinct(int k, vector<int> &arr) {
        // code here.
        
        int l=0;
        int r=0;
        int n=arr.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        
        while(r<n){
            
            
            if(r>=k){
                ans.push_back(mp.size());
                mp[arr[l]]--;
                if(mp[arr[l]]==0){
                    mp.erase(arr[l]);
                }
                l++;
                
            }
            
            mp[arr[r]]++;
            
            
            
            r++;
        }
        
    ans.push_back(mp.size());
        
    return ans;
    }
