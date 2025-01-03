         
            int n =arr.size();    
            int count=0;
            unordered_map<int,int>mp;
            int sum=0;
             for (int i=0;i<n;i++){
                 sum=sum^arr[i];
                 
                 if (sum==k) count++;
                 count+=mp[sum^k];
                 mp[sum]++;
                
             }
             
             return count;
        
