class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        //  int n = arr.size();
        //  vector<int>ans;
        //  stack<pair<int,int>>st;
         
        //  for(int i:arr){
                 
        //          int  count =0;
        //          while (!st.empty() && st.top().first<i){
        //               st.pop();
        //               count+=st.top().second;
        //               cout<<count<<" ";
        //          }
                 
        //          cout<<endl;
        //         //  if(!st.empty()) {
        //         //       count+=st.top().second;
        //         //  }
        //          ans.push_back(count+1);
        //          st.push({i,count+1});
               
        //  }
         
        //  return ans;
        
         stack<int>st;
        int n = arr.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int add = 1;
            while(!st.empty() && arr[st.top()]<=arr[i]){
                add += ans[st.top()];
                st.pop();
            }
            st.push(i);
            ans[i] = add;
        }
        return ans;
    }
};