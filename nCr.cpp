 int nCr(int n, int r) {
           
           if (r>n) return 0;
           int run = r; 
           if(n<=2*r){
               run  = n-r; 
           }
          long sum1 = 1 ; 
           for (int i=0;i<run;i++){
               sum1*=(n-i); 
               sum1/=(i+1);
               
               
           }
           
           return sum1; 
    }
