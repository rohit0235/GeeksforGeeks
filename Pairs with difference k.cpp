   int c=0, n=arr.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            int num=it.first;
            int count=it.second;
            if(mpp.find(num+k) !=mpp.end())
            c+=count*mpp[num+k];
        }
        return c;
