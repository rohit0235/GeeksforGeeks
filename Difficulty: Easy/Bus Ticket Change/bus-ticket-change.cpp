class Solution {
  public:
    bool canServe(vector<int> &arr) {
          
          int n =  arr.size();
          
          int f =0;
          int t1 =0;
        //   int t2=0;
    
        
          for(int i:arr){
                  
                  if(i==5) f++;
                  else if(i==10){
                        f--;
                        t1++;
                        
                        if(f<0) return false;
                  }
                  
                  else {
                        
                        if(t1>0){
                             t1--;
                             f--;
                        }
                        else{
                             f-=3;
                             
                        }
                        
                        if(f<0 || t1<0) return false;
                        
                  }
                  
                  
          }
          
          return true;
    }
};