    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
         vector<int>ans;
  
       for (int i:arr){
          if (find(ans.begin(),ans.end(),i)==ans.end()){
              ans.push_back(i);
          }

       
       }       
       return ans;
    }
