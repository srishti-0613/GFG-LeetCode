class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
       int count=1,res=nums[0];
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
                res=nums[i];
                if(count>(nums.size()/2))return res;
            } 
            else{
                    
                count=1;
                res=nums[i];
                }
            }
        
        return res;
    }
};