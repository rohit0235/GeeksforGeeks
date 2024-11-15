  int getSecondLargest(vector<int> &arr) {
       int first=arr[0];
       int second=arr[1];
       if (arr[0]<arr[1]){
           first=arr[1];
           second=arr[0];
       }
       
       for (int i=2;i<arr.size();i++){
           
           if (arr[i]>first){
               second=first;
               first=arr[i];
           }
           else if (arr[i]>second && arr[i]!=first){
               second=arr[i];
           }

           
       }
       if (first!=second){
           return second;
       }
       else{
           return -1;
       }
       
    }
