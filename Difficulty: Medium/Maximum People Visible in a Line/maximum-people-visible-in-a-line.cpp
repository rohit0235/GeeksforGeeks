class Solution {
  public:
    int maxPeople(vector<int> &arr) {
        // code here
            int n = arr.size();
            
            // number of small ele in left and small ele in right
            
            // ledt side me jitne small hai unhe hata do 
            
            vector<int>left(n,0);
            stack<int>st;
             // pehle ;left
            // st.push(-1);
            for(int i=0;i<n;i++){
                  
                  
                  while (!st.empty() && arr[st.top()]<arr[i]){
                         st.pop();
                  }        
                  
                  if(st.empty()){
                       left[i] = i;
                  }
                  else{
                       left[i] = i - st.top()-1;
                  }
                  
                  st.push(i);        
            }
            
            stack<int>st2;
             

            
            for(int i=n-1;i>=0;i--){
                  
                  
                  while (!st2.empty() && arr[st2.top()]<arr[i]){
                         st2.pop();
                  }        
                  
                  if(st2.empty()){
                       left[i] += n-i-1;
                  }
                  else{
                       left[i] +=  st2.top()-i-1;
                  }
                  
                  st2.push(i);        
            }
            
 
            int ans =0;
            
            for(int i:left){
                 ans = max(ans , i+1);
            }
            return ans;
            
        
        
    }
};