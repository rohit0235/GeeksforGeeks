class Solution {
  public:
  
   map<int, vector<char>>mp= {
           {2,{'a','b','c'}},
           {3,{'d','e','f'}},
           {4,{'g','h','i'}},
           {5,{'j','k','l'}},
           {6,{'m','n','o'}},
           {7,{'p','q','r','s'}},
           {8,{'t','u','v'}},
           {9,{'w','x','y','z'}}
    };
    vector<string>result;
    
    void solve(vector<int>&arr, int n, int st, string &temp){
          
           if (st>=n){
                result.push_back(temp);
                 return ;
           }
                            if (arr[st]==1 || arr[st]==0) {
                     solve(arr,n,st+1,temp);
                     return;
                 }
           
           for(auto j:mp[arr[st]]){
            //   cout<<arr[st]<<" ";

                 
                        //  cout<<j<<endl;
                   temp.push_back(j);
                   solve(arr,n,st+1,temp);
                   temp.pop_back();
                
              
           }
    }
    
    
    vector<string> possibleWords(vector<int> &arr) {
        // code here
            int n   = arr.size();
            
             string temp="";
            solve(arr, n,0, temp);
            
            return result;
    }
};