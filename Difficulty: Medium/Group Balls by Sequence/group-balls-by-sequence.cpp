class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
            
              int n =arr.size();
              if (n%k!=0)  return false;
              
              map<int,int>mp;
              for(int i:arr) mp[i]++;
              for(auto i:mp){
                    
                    int f =i.first;
                    int s =i.second;
                    
                    if(s>0){
                          
                         for(int start=0;start<k;start++){
                             int check =mp[f+start];
                  
                            if (check<s) return false;
                            mp[f+start]-=s;
                         }
                    }
                   
              }
              return true;
              
              
              
              
            //   sort(arr.begin(),arr.end());
              
            //   int count =0;
            //   for(int i=0;i<n;i+=k){
                      
            //           int prev =arr[i];
            //          for(int j=1;j<k;j++){
                           
            //                 if (arr[i+j]-prev!=1) return false;
            //                 prev = arr[i+j];
                           
            //          }
                    
            //   }   
              
            //   return true;
                
    }
};