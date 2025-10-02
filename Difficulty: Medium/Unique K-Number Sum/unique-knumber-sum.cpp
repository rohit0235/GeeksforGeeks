class Solution {
  public:
   
    vector<vector<int>>ans;
    
    void solve(int n, int k , int& sum, vector<int>&temp, int st){
              
             if (temp.size()==k) {
                 if (sum==n) ans.push_back(temp);
                 
                 return ;
             }
             if (sum>n || temp.size()>k) return ;
             
             for(int i=st;i<=9;i++){
                    
                    temp.push_back(i);
                    sum+=i;
                    solve(n,k,sum,temp,i+1);
                    temp.pop_back();
                   
                    sum-=i;                    
                    
             }
         
              
    } 
   
    vector<vector<int>> combinationSum(int n, int k) {
           vector<int>temp;
           int sum=0;
            solve(n,k,sum,temp,1);  
            return ans; 
            
    }
};