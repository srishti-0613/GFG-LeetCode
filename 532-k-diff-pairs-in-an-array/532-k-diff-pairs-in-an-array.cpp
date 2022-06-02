class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int count =0;
        unordered_map<int,int>s;
        
        for(int i=0;i<n;i++) s[nums[i]]++; 
        for(auto i: s){
            if(k==0) {
                if(i.second>1) 
                    count++;
            }
             else {
                 if (s.find(i.first - k) != s.end()) 
                     count++;
             }
        }
        return count;
    }
};