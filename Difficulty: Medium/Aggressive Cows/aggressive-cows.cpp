// User function Template for C++

class Solution {
  public:
  
  
    bool ispos(int mid , vector<int>&stalls ,int k){
          
            
               int prev =stalls[0];
               
               int count=1;
              
                  int n = stalls.size();
               for(int i=1;i<n;i++){
                        
                         if (stalls[i]-prev>=mid){
                              count++;
                              prev =stalls[i];
                         }
                        
                       
               }
               
               return count>=k;
           
          
    }

    int aggressiveCows(vector<int> &stalls, int k) {
                    
                    sort(stalls.begin(),stalls.end());
                    int n = stalls.size();
                    
                    int l =1;
                    int h =stalls[n-1]-stalls[0];
                    
                    int ans =0;
                    while (l<=h){
                          
                          int mid =l+(h-l)/2;
                          
                          if(ispos(mid , stalls , k)){
                               ans =mid ;
                               l =mid+1;
                          }
                          
                          else{
                               h =mid-1;
                          }
                          
                    }
                    
                    
                    return ans ;
        
    }
};