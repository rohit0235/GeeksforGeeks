  unordered_map<int,int>mp;
                //  for (int i:arr){
                //      mp[i]++;
                //  }
              int n=arr.size();
              int c=0;
              int sum=0;
              for (int i:arr){
                  sum+=i;
                  
                  if (sum==k) c++;
                  if (mp.find(sum-k)!=mp.end()){
                      c+=mp[sum-k];
                  }
                  mp[sum]++;
              }
              return c;
              
