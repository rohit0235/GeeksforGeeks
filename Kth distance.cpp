bool checkDuplicatesWithinK(vector<int>& arr, int k) {
       

        // your code
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp[arr[i]]!=0){
                if(i+1-mp[arr[i]]<=k) return true;
            }
            mp[arr[i]]=i+1;
        }
        return false;
    }
