class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        
          sort(arr.begin(),arr.end());
          int n =arr.size();
          vector<int>ans ;
          int count =1;
          
          
          for(int i=1;i<n;i++){
                
                 if (arr[i]==arr[i-1]) count++;
                 else{
                    //   cout<<count<<" "<<arr[i]<<endl;
                        if (count>n/3) ans.push_back(arr[i-1]);
                        
                        count =1;
                       
                 }
               
          }
          
             if (count>n/3) ans.push_back(arr[n-1]);
                        
                    return ans;
        
        
    }
};