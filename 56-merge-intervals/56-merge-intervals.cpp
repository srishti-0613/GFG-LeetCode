class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>v;
        v.push_back(intervals[0]);
        int n=intervals.size() ;
        int res=0;
       // sort(intervals.begin(),intervals.end());
        int start,end;
        for(int i=1;i<n;i++){
            if(v[res][1] >= intervals[i][0]){
                v[res][1]=max(v[res][1],intervals[i][1]);
                
            }
            else{
                res++;
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};