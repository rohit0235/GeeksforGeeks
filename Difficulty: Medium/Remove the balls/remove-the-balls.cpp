class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        // set<pair<int,int>>st;
         int n =radius.size();
         
         
         stack<pair<int,int>>s;
         
         int i=0;
         while (i<n){
                     pair<int,int>p1={color[i],radius[i]};
            if  (!s.empty() && s.top()==p1){
                       s.pop();
                       
                  }
                  
             else     s.push({color[i],radius[i]});
             
             
             i++;
              
         }
         
         return s.size();
        //  for(int i=0;i<n;i++){
              
        //       if (st.find({color[i],radius[i]})!=st.end())  {
        //             st.erase({color[i],radius[i]});
        //       }
        //       else{
        //             st.insert({color[i],radius[i]});
        //       }
               
        //  }
         
        //  return st.size();
        
        //   int count=0;
           
        //   vector<bool>f(n,1);
        //   for(int i=1;i<n;i++){
        //         //   cout<<count<<endl;
        //           pair<int,int>p1={color[i-1],radius[i-1]};
        //           pair<int,int>p2={color[i],radius[i]};
               
        //           if (p1==p2){
        //               f[i-1]=false;
        //               f[i]=false;
        //               i++;
        //           }
                  
         
                 
        //   }
           
        //   for(bool i:f){
        //         if (i==false) count++;
        //   }
        // //           pair<int,int>p1={color[0],radius[0]};
        // //           pair<int,int>p2={color[1],radius[1]};
               
           
        // //   if (n>0 && p1!=p2 ) return count+1;
        //   return n-count;
        
        
    }
};