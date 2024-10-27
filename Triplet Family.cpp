 bool findTriplet(vector<int>& arr) {
         unordered_map<int,int>mp;
         for (int i:arr){
             mp[i]++;
         }
         int n=arr.size();
          for (int i=0;i<n-1;i++){
              for (int j=i+1;j<n;j++){
                  if (mp.find(arr[i]+arr[j])!=mp.end()){
                      return true;
                  }
              }
          }
          return false;
          
    }
