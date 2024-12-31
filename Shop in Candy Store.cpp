  sort(candies,candies+N);
         int minimum=0;
       
         int j=N-1;
         for (int i=0;i<N;i++){
             if (i<=j){
                 minimum+=candies[i];   j-=K;
             }
             else{
                 break;
             }
          
         }
        
         int maximum=0;
         j=0;
         for (int i=N-1;i>=0;i--){
             if (i>=j){
               maximum+=candies[i];   j+=K;
             }
             else{
                 break;
             }
          
         }
      
         return {minimum,maximum};
    }
