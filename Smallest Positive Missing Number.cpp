     unordered_map<int,int>mp;
      int maxi=INT_MIN;
      for (int i:arr){
         mp[i]++;
         maxi=max(maxi,i);
          
      }
      for (int i=1;i<=maxi;i++){
          if (mp.find(i)==mp.end()){
              return i;
          }
      }
      if (maxi<=0) return 1;
      return maxi+1;
      

      
      
