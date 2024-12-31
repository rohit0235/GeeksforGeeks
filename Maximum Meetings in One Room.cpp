   vector<int> maxMeetings(int N,vector<int> &start,vector<int> &end){
        vector<int>ans;
        vector<pair<int,int>>mp;
        unordered_map<int,int>map;
        for (int i=0;i<start.size();i++){
            mp.push_back(make_pair(start[i],end[i]));
              if (map.find(start[i])==map.end())
            map[start[i]]=i;
        }
        
        sort(mp.begin(),mp.end(),comparator);;
   
        int endtime =0;
        for (auto i:mp){
                        // cout<<i.first<<i.second<<endl;       
            if (i.first>endtime){
                ans.push_back(map[i.first]+1);
       
                endtime=i.second;
            }  
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
