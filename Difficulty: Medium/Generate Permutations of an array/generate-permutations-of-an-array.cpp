class Solution {
  public:
    vector<vector<int>>ans;
    int n ;
    // void solve(vector<int>&arr, vector<int>&temp, int i ){
           
    //       if(temp.size()==arr.size()) { 
    //           ans.push_back(temp);
            
    //           return ;
    //       }
    //       if(i>=n) return ;
           
    //       temp.push_back(arr[i]);
    //       solve(arr,temp, i+1);
    //       temp.pop_back();
    //           temp.push_back(arr[i]);
    //       solve(arr,temp, i+1);
      
    // }
    
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
          vector<int>temp;
          n=arr.size();
        //   solve(arr, temp,0);
        sort(arr.begin(),arr.end());
          do{
               ans.push_back(arr);
          }while(next_permutation(arr.begin(),arr.end()));
          
          return ans;    
    }
};