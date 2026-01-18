class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        // code here
         int n = arr.size();
         unordered_map<int,int>mp;
         
         for(auto i:arr){
             
              mp[i]++;
              
         } 
         
         vector<int>ans(n,-1);
         stack<pair<int,int>>st;
         st.push({arr[n-1],mp[arr[n-1]]});
         for(int i=n-2;i>=0;i--){
               
            while(!st.empty() && st.top().second<=mp[arr[i]]){
                  st.pop();
            }
            
            if(!st.empty()){
                
                 ans[i]= st.top().first;
            }
            
             st.push({arr[i],mp[arr[i]]});
                
         }
         
         return ans;
         
         
         
    }
};
