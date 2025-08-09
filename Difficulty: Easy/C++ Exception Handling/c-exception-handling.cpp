// User function Template for C++

class Solution {
  public:
    int maxValue(int A, int B) {
        // code here
           
            int max=A+B;
        if(max<A-B) max=A-B;
        if(max<A*B) max=A*B;
        try
        {
            if(B==0) throw 0;
            if(max<A/B) max=A/B;
        }
        catch(int) {return -999999;}
        return max;
           
         
        
    }
};