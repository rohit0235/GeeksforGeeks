   vector<vector<int>> findTriplets(vector<int> &arr) {
          int n =arr.size();
          vector<vector<int>>result;
          unordered_map<int,vector<int>>mp;
          for (int i=0;i<n;i++){
              mp[arr[i]].push_back(i);
          }   
          
          
          for (int i=0;i<n-2;i++){
              
              
              for (int j=i+1;j<n-1;j++){
                  int fi=0-(arr[i]+arr[j]);
                  if (mp.find(fi)!=mp.end()){
                          for(auto &k : mp[fi]){
                         if(k > j){
                        result.push_back({i, j, k});
                               }
                       }
                  }
              }
          }
          
          return result;
              
              
              
              
              
    }
