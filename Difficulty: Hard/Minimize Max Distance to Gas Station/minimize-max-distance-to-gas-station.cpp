 // Required for INT_MIN (though better to initialize r with actual max gap)

class Solution {
public:
  
    bool bs(vector<int>&stations,int k, long double mid, int n)
    {
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            long double gap=stations[i+1]-stations[i];
            cnt+=floor(gap/mid);
        }
        return (cnt<=k);
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        long double mx=0.0;
        
        for(int i=0;i<n-1;i++)
        {
            mx=max(mx,(long double)stations[i+1]-stations[i]);
        }
        long double l=0.0,h=mx,mid,ans=mx;
        
        while(h-l>1e-7)
        {
            mid=l+(h-l)/2.0;
            
            if(bs(stations,k,mid,n))
            {
                ans=mid;
                h=mid;
            }
            else
            {
                l=mid;
            }
           
        }
         return round(ans*100)/100;
    }
};