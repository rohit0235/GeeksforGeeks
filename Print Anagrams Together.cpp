 vector<vector<string>> anagrams(vector<string>& arr) {
            
            int n=arr.size();
            
            map<string,vector<string>>mp;
            for (int i=0;i<n;i++){
                string s=arr[i];
                sort(s.begin(),s.end());
                mp[s].push_back(arr[i]);
            }
            vector<vector<string>>ans;
            for (auto i:mp){
                 ans.push_back(i.second);
            }
            return ans;
    }
