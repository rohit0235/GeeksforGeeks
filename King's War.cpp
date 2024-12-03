  sort(arr.begin(),arr.end());
             unordered_map<int,int>mp;
             for (int i:arr) mp[i]++;
             int count=0;
              int n=arr.size();
    
                 
                 count+=mp[arr[0]];
                 count+=mp[arr[n-1]];
       
             return n-count;
