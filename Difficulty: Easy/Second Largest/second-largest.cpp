class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
            
            
            int first =-1;
            int second =-1;
            
            for(int i:arr){
                 
                  if (first==-1){
                       first=i;
                  }
                  if (second==-1 && i<first){
                       second =i;
                  }
                  
                  
                 else  if (i>first){
                       swap(first,second);
                       first=i;
                  }
                  
                  else if (i>second && i<first){
                          second =i;
                  }
                  
                  
            }
            // if (second==-1) return second;
            
            return second;
            
            
    }
};