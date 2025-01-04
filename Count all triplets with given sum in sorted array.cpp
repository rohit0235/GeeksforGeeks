      unordered_map<int,vector<int>>mp;
              int n =arr.size();
              for (int i=0;i<n;i++){
                   mp[arr[i]].push_back(i);
              }
            //   for (auto i:mp){
                //   cout<<i.first<<" "<<i.second<<endl;
            //   }
              int count=0;
              for (int i=0;i<n;i++){
                    
                    for (int j=i+1;j<n;j++){
                         int sum=arr[i]+arr[j];
                         if (mp.find(target-sum)!=mp.end()){
                                for (auto k:mp[target-sum]){
                                    if (k>j){
                                        count++;
                                    }
                                }
                         }
                    }
              }
              
              return count;
