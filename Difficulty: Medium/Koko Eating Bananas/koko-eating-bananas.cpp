class Solution {
  public:
  
      bool ispos(int mid ,vector<int>& arr, int k ){
           
           int count =0;
           
           for(int i:arr){
                 
                   count+=((i+mid-1)/mid);
                     
                   if (count>k) return false;
                
           }
           
           return true;
           
      }
  
  
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        
             int maxelement = *max_element(arr.begin(),arr.end());
             
             int l=1;
             int r=maxelement;
              int ans =0;
             while (l<=r){
                   
                   int mid =(l+r)/2;
                   
                   
                   if (ispos(mid,arr,k)){
                        ans=mid;
                        r=mid-1;
                   }
                   else{
                        l=mid+1;
                   }
                   
                   
             }
             
             
             return ans;
              
             
             
             
        
        
    }
};