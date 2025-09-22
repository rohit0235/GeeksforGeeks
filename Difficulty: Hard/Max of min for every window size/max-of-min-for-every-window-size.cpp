class Solution {
  public:
   int n;
    void setnext(vector<int>&nse,vector<int>&arr){
          
           stack<int>st;
           
           for(int i=n-1;i>=0;i--){
                 
                  while (!st.empty() && arr[st.top()]>=arr[i]){
                       st.pop();
                  }
                  
                  if (st.empty()){
                       nse[i]=n;
                  }
                  else{
                       nse[i]=st.top();
                  }
                  st.push(i);
                 
           }
          
    }
    void setprev(vector<int>&pse,vector<int>&arr){
          
           stack<int>st;
           
           for(int i=0;i<n;i++){
                 
                  while (!st.empty() && arr[st.top()]>=arr[i]){
                       st.pop();
                  }
                  
                  if (st.empty()){
                       pse[i]=-1;
                  }
                  else{
                       pse[i]=st.top();
                  }
                       st.push(i);
           }
          
    }
   
    vector<int> maxOfMins(vector<int>& arr) {
        //  code here
            n =arr.size();
            vector<int>nse(n,-1);
            vector<int>pse(n,-1);
            vector<int>ans(n,0);
        
            
            setnext(nse,arr); 
            setprev(pse,arr); 
            
            for(int i=0;i<n;i++){
                  
                  int window = nse[i]-pse[i]-1;
                  ans[window-1]=max(ans[window-1],arr[i]);
                  
            } 
            
            for(int i=n-2;i>=0;i--){
                 ans[i]= max(ans[i],ans[i+1]);
            }
            return ans;
        
    }
};