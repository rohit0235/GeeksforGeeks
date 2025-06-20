class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
           
           long long sum =accumulate(A.begin(),A.end(),0LL);
           
           double mod =(double)sum/N;
           
           long long mini=LLONG_MAX;
           for(long long  i:A){
                if (mod<=i){
                     mini =min(mini,i);
                }
           }
           
           return mini;
    }
};
