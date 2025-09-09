class Solution {
  public:
    string largestSwap(string &s) {
        // code here
         
              int a =-1;
              int n = s.size();
              string c = s;
              sort(s.rbegin(),s.rend());
              
              for(int i=0;i<n;i++){
                     if (s[i]!=c[i]){
                          a=i;            
                          break;
                     }
              }
              if (a==-1) return c;
               int maxi = a;
              for(int i=a+1;i<n;i++){
                    if (c[i]>=c[maxi]){
                          maxi=i;
                    }    
              }
              swap(c[a],c[maxi]); 
              return c;
           
    }
};