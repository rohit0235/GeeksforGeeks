class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
         
                  unordered_map<int,int>mp;
                  for(int i:arr) mp[i]++;
                  int n= arr.size();
                  vector<int>ans(n,-1);
                  stack<int>st;
                //   st.push(-1);
                  for(int i=n-1;i>=0;i--){
                           
                           while (!st.empty() && mp[arr[i]]>=mp[st.top()]){
                                 st.pop();
                           }
                           
                                           
                                 if (st.empty()){
                                      ans[i] = -1;
                                 } 
                           else ans[i] = st.top();
                           
                           st.push(arr[i]);
                           
                           
                  }
                  
                  return ans;
           
         
    }
};
