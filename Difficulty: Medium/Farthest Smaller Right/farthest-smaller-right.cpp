class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {

               int n =arr.size();
               vector<int>ans(n,-1);
               vector<int>suff(n,-1);
               
               suff[n-1] =arr[n-1];
               
               
               for(int i=n-2;i>=0;i--){
                    
                        suff[i]= min(arr[i], suff[i+1]);
               }
               
               
               for(int i=0;i<n;i++){
                    
                        int l= i+1;
                        int r=n-1;
                        
                        int res= -1;
                        
                        while (l<=r){
                                        
                             int mid =  l+ (r-l)/2;
                          
                             if (suff[mid]<arr[i]){
                                        res=mid;  
                                       l= mid+1;
                                       
                                        
                             }
                             else{
                                  r= mid-1;
                             }
                         
                         
                                  
                               
                        }
                      
                      
                        ans [i] = res;
               }
               
               return ans ;
               
               // maxii = -1
               // prioriuty 
               // 1 2   2 4   2 0   3 3    5 1
               
               // -1   
        
        
    }
};