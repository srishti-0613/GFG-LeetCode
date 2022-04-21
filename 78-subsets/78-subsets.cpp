class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
     int n=nums.size() ;
       
        int powsize=pow(2,n);
        vector<vector<int>>v(powsize);
        
        for(int i=0;i<powsize;i++){
            for(int j=0;j<n;j++){
                if((i & (1<<j))!=0){
                    v[i].push_back(nums[j]);
              }
                
           } 
        }
        return v;
    }
};