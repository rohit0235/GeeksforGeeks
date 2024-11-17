   int firstRepeated(vector<int> &arr) {
        unordered_map<int,int>mp;
        int mini=INT_MAX;
        for (int i=0;i<arr.size();i++){
            if (mp.find(arr[i])!=mp.end()){
                int index=mp[arr[i]];
              mini=min( mini,index+1);
            }
             mp[arr[i]]=i;
        }
        if (mini<=arr.size()+1){
              return mini;
        }
        else{
            return -1;
        }
    }
