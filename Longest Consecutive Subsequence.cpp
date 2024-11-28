  
           map<int,int>mp;
           for (int i:arr) mp[i]=i;
           int count=1;
           int maxi=0;
           for (auto i:mp){
               
               if (mp.find(i.first+1)!=mp.end()){
                     count++;
               }
               else{
                   maxi=max(count,maxi);
                   count=1;
               }
           }
           return maxi;
           
           
