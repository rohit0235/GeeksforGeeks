class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2) {
        // Code here.
        
        // -1 1 -1  0  0  -1
        // -1 0 -1 -1 -1  -2
        
        //[0, 1, 0, 1, 1, 1, 1], a2[] = [1, 1, 1, 1, 1, 0, 1]
        
        // -1 0 -1 0 0 1 0
        // -1 -1 -2  -2 -2 -1 -1
        
        // 
        
        // vector<int>s;
        for(int i=0;i<a1.size();i++){
             a1[i]-=a2[i];
        }
        unordered_map<int,int>mp;
        
        int sum=0;
        int maxlen=0;
        for(int i=0;i<a1.size();i++){
            
            //   cout<<sum<<" "<<maxlen<<" ";
              sum+=a1[i];
              if (sum==0) maxlen=i+1;
             else if (mp.find(sum)!=mp.end()){
                 
                  maxlen=max(maxlen,i-mp[sum]) ;  
                  
               
              } 
              else{
                     mp[sum]=i;
              }
              
              
              
        }
        return maxlen;
        
    }   
};